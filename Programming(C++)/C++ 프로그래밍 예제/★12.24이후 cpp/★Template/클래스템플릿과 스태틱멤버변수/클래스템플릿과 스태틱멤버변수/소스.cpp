#include <iostream>
using namespace std;

template<class T>
class SimpleStaticMem {

private :
	static T mem;

public :

	void AddMem(T num) { mem += num; }
	void ShowMem()const { cout << mem << endl; }

};

template<class T>
T SimpleStaticMem<T>::mem = 0;

template<> //Æ¯¼öÈ­
int SimpleStaticMem<int>::mem = 7;


int main(void) {

	SimpleStaticMem<int> obj1;
	SimpleStaticMem<int> obj2;
	SimpleStaticMem<long> obj3;
	SimpleStaticMem<long> obj4;

	obj1.AddMem(2);
	obj2.AddMem(3);
	obj1.ShowMem();
	obj3.AddMem(100);
	obj4.ShowMem();



	return 0;


}