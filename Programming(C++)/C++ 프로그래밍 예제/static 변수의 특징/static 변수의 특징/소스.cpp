/*멤버변수,멤버함수에 대하여 static 선언이 가능하며, 그 객체에 속하지 않아서 객체 생성 이전에도 호출이 가능하다.
static 멤버변수에 대해서는 생성자로 초기화하는것이 아닌 초기화문법이 존재한다 , */

#include <iostream>
using namespace std;

class Sosimple {

private: 
	static int simobjcnt; //Sosimple 객체에 의해서 공유된다.

public :
	Sosimple() {

		simobjcnt++;
		cout << simobjcnt << "번째 Sosimple 객체" << endl;

	}
};
int Sosimple::simobjcnt = 0; // static 멤버변수에 관한 초기화 방법

int main(void) {

	Sosimple obj1; //각각의 객체가 simobjcnt의 메모리 주소를 공유하는 형태로 참조가 된다.
	Sosimple obj2; 

}