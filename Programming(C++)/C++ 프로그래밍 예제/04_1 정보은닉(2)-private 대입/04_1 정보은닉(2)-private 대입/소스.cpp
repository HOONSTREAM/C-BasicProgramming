#include <iostream>
#include <cstring>

using namespace std;

class naturalNumber {

private :
	int num; // 변수가 private로 선언되어있기 때문에 같은 클래스 내부의 Public init 함수에서 접근해서 값을 할당한다.

public :
	
	void Init(int n) {

		num = n;
		cout << "num : " << num << endl;

	} // 값을 할당하는데 어떠한 조건도 없기때문에 자연수인지 아닌지 구별할 수 없음.
	// 이를 방지하기 위해, 변수가 선언될 때 함수를 별도로 정의해서 안전한 형태로 변수접근을 유도하는것이 정보은닉 이다.


};

int main(void) {

	naturalNumber n;

	n.Init(-2);


	return 0;

}
