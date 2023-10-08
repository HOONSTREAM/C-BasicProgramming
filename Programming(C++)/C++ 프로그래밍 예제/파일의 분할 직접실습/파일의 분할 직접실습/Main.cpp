//함수의 선언은 헤더파일에 저장하고, 함수의 정의는 소스파일에 저장한다.
#include "NameHeader.h"

int main(void) {

	BestComImpl::SimpleFunc(); // ::은 범위지정 연산자(Scope resolution operator) 라고 함. 이름공간을 지정할때 사용하는 연산자
	ProgComImpl::SimpleFunc();

	return 0;

}
