/*함수류(함수객체,함수,함수포인터) 조건자로 조건을 판단하는 예제*/
#include <iostream>
using namespace std;

struct LessFunctor {

	bool operator() ( int left, int right) const {

		return left < right;
	}
};

bool LessFun(int left, int right)  {

	return left < right;
}


int main(void) {

	bool (*LessPTR)(int, int) = LessFun; //함수 포인터(함수의 주소를 저장) 정의
	LessFunctor lessFunctor;
	// 1. 함수 객체로 10과 20 비교
	cout << lessFunctor.operator()(10, 20) << endl;

	// 2. 함수로 10 20 비교
	cout << LessFun(10, 20) << endl;

	//3. 함수 포인터로 10,20 비교

	cout << LessPTR(10, 20) << endl;

	return 0;

}
