#include<iostream>

int BoxVolume(int length, int width = 1, int height = 1); // 첫번째 매개변수에는 디폴트 값이 지정되지 않았으므로,
// BoxVolume 함수를 호출할 때에는 반드시 하나 이상의 인자값을 전달해야만 한다.
// 인자는 항상 왼쪽에서 오른쪽으로 값을 전달하기때문에, 부분 디폴트값 지정은 우측에서부터 진행되어야 한다.


int main(void) {

	std::cout << "[3, 3, 3]  : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] :  " << BoxVolume(5, 5) << std::endl; // 인자는 왼쪽부터 채워지고, 부족한 부분은 디폴트 값이 대신하게 된다.
	std::cout << "[D, D, D] :  " << BoxVolume() << std::endl; //모든 매개변수에 디폴트 값이 지정된 것이 아니기때문에, 컴파일 에러로 이어진다.



	return 0;

}


int BoxVolume(int length, int width, int height) {

	return length * width * height;

}
