#include <iostream>
using namespace std;

namespace BestComImpl { // 이름 공간을 둘 이상 나누어서 선언할 수도 있다. 물론 동일 공간으로 간주된다.

	void SimpleFunc(void);

}

namespace BestComImpl {

	void PrettyFunc(void);

}

namespace ProgComImpl {

	void SimpleFunc(void);

}

int main(void) {


	BestComImpl::SimpleFunc();

	return 0;


}

void BestComImpl::SimpleFunc(void){

	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc(); //동일 이름공간이므로 직접호출이 가능하다.
	ProgComImpl::SimpleFunc(); //다른 이름공간 , 함수 호출 위치가 어떻게 되건, 이름공간 ProgComImpl에 정의된 함수 SimpleFunc 를 호출하는 방법에는 차이가 없다.

}


void BestComImpl::PrettyFunc(void) {

	cout << "So Pretty !" << endl;

}

void ProgComImpl::SimpleFunc(void) {

	cout << "ProgCom이 정의한 함수" << endl;
}


