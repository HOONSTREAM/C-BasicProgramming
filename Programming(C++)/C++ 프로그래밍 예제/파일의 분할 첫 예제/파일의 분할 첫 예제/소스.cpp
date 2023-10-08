#include "struct.h"
/*
* <헤더파일에 들어가는것 >
1. 함수원형
2. #define 이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 템플릿 선언
5. 클래스 선언
6. 인라인 함수
*/
int main(void) {
	MyStruct PandaCoding = { 
		"Panda",
		26,

	};

	display(PandaCoding);
	
	return 0;

}

