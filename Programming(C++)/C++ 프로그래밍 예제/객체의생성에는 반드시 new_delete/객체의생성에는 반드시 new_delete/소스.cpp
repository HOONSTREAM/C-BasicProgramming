#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct __point { // 구조체 선언

	int xpos;
	int ypos;

}point;

point& PntAdder(const point& p1, const point& p2) { // 레퍼런스를 매개변수로하고(전달받는 인수의 참조자가 되는것임), 반환형(구조체반환) 도 레퍼런스.
	//point 구조체 자료형으로 PntAdder 함수의 반환값의 별명을 직접 main()함수에 저장함. (임시변수 생성안함)
	// 함수의 반환형이 레퍼런스이면 기본형(임시변수생성)보다 복사과정을 덜 거치기때문에 효율성이 좋음

	point* pptr = new point; // 함수내에 선언된 변수를 참조형으로 반환하려면 해당변수는 어떻게 선언해야하는가? (동적할당)
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr; //pptr 포인터의 값을 리턴, (PntAdder함수의 반환값)

}

int main(void) {

	point* pptr1 = new point; //point 자료형을 가리키는 포인터 pptr1
	pptr1->xpos = 3; // 구조체 변수할당 -> 화살표연산자 (동적할당에만 사용할수있음 / 정적할당에는 사용할 수 없음.)
	pptr1->ypos = 30;

	point* pptr2 = new point; //point 자료형을 가리키는 포인터 pptr2
	(* pptr2).xpos = 70;
	(* pptr2).ypos = 7; //이것의 귀찮음을 해소하기 위해서 -> (화살표연산자)를 사용하게됨.

	point&pref = PntAdder(*pptr1, *pptr2); // 동적할당한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야하는가? 포인터형으로 전달.
	// 설명: 구조체타입 PntAdder 함수를 실행한 결과값을 pref 별칭을 붙임. , PntAdder(*pptr1, *pptr2)를 대입하건, pref를 대입하건 같은 결과가 나옴.
	// 함수의 결과값이 구조체에 반영된 변수에서 나오기때문에 ...



	cout << "[" << PntAdder(*pptr1, *pptr2).xpos << ","<< PntAdder(*pptr1, *pptr2).ypos<<"]" << endl;
	//cout << "[" << pref.xpos << "," << pref.ypos "]" <<endl;과 동일함. (별칭지정을 했기때문에)



	delete pptr1;
	delete pptr2;
	delete& pref;

	return 0;

}

