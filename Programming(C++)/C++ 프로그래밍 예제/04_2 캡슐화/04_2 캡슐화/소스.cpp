/*참조로 전달을 사용해야 하는 경우:

구조체 또는 클래스를 전달할 때 (읽기 전용인 경우 const 사용)
인수를 수정하는 함수가 필요할 때
고정 배열의 유형 정보에 접근해야 할 때
참조로 전달을 사용하지 않아야 하는 경우:

수정할 필요가 없는 기본 자료형을 전달할 때 (값으로 전달 사용)*/

/* 만일 클래스의 멤버변수로 객체 및 포인터객체를 포함할 경우 클래스는 상속의 일부분인 물질적인 부분(구성요소)을 
포함(소유)하므로 생성자(Constructor) 함수를 정의할 때 상속의 개념을 도입하여 멤버변수를 초기화할 수가 있다.*/

#include <iostream>
using namespace std;

class SinivalCap {

public:

	void Take() const 
	{
		cout << "콧물제거알약" << endl;

	}
};

class SneezeCap {
public:

	void Take()const {
		cout << "재채기 제거 알약" << endl;
	}
};

class SnuffleCap {
public:
	void Take() const {
		cout << "비충혈 제거 알약" << endl;

	}
};

class CONTAC600 {

private:
	SinivalCap sin;
	SneezeCap sne;
	SnuffleCap snu;


public:
	void Take() const {

		sin.Take();
		sne.Take();
		snu.Take();

	}

};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& capsule) const { capsule.Take(); }


};

int main(void) {

	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

	return 0;

}