#include<iostream>
using namespace std;

template<class T1, class T2>
void ShowData(T1 num1, T2 num2)
{
	cout << (T1)num1 << " " << (T2)num2 << endl;

}

template<class T1>
void ShowData(T1 num1, double num2) { //특수화 할때는 항상 형을 명시해줘야 좋다.

	cout << (T1)num1 << " " << (double)num2 << endl;
	cout << "특수화가 진행되었음" << endl;
}

int main(void) {
	ShowData<int,int>(3, 4);
	ShowData<double>(3, 1.7);



	return 0;

}