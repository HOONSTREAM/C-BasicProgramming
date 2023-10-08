#include <iostream>
#include <cstring>
using namespace std;

class Sosimple {

private:
	int num;
public :
	Sosimple(int n) :num(n)
	{
		cout << "num : " << num << endl;
		cout << "address : " << this << endl;

	}

	void ShowSimpleData() {

		cout << num << endl;

	}

	Sosimple* GetThisPointer() {

		return this; // 주소값을 반환하는 것이므로 

	}
};

int main(void) {

	Sosimple sim1(100);
	Sosimple* ptr1 = sim1.GetThisPointer(); // sim1 객체 주소값 저장
	cout << ptr1 << ",";
	ptr1->ShowSimpleData(); //ptr1이 가리키는 객체의 showsimpledata() 함수를 호출하는 것임.

	Sosimple sim2(200);
	Sosimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ",";
	ptr2->ShowSimpleData();

	return 0;


}