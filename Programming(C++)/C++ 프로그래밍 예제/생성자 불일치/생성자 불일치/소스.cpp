/*매개변수가 void 형으로 선언되는 디폴트 생성자는 생성자가 하나도 삽입되어 있지 않을 때 자동으로 컴파일러에 의해 정의되며
다음과 같이 정의된 클래스에는 디폴트생성자가 삽입되지 않는다.*/
#include <iostream>
using namespace std;

class SoSimple {

private :
	
	int num;
public :
	SoSimple(int n) : num(n)
	{}
	
	SoSimple() : num(0) {}
};

int main(void) {

	SoSimple obj;
	SoSimple obj(100);


}