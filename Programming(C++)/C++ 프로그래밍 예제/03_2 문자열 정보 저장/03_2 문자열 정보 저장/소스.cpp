//���ڿ� ����� ����ϴ� ���α׷��� ����
#include <iostream>
#include <string>
using namespace std;

class Printer {

private :
	string a; // ���ڿ� ����
	



public:
	void SetString();
	void ShowString();

};

void Printer::SetString() {

	cout << "���ڿ��� �Է��Ͻÿ� : ";
	getline(cin, a);




}

void Printer::ShowString() {

	cout << a << endl;

}

int main(void) {

	Printer pnt;

	pnt.SetString();
	pnt.ShowString();


	return 0;

}


