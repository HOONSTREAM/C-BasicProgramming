#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin(); //시작원소를 가리키는 반복자
	cout << iter[0] << endl; //[]연산자
	cout << iter[1] << endl;
	cout << iter[2] << endl; // iter[i] i번째 원소에 접근(역참조)한다.
	cout << endl;

	iter += 2; // iter를 2만큼 이동한다. ; 시작지점이 바뀐다. iter[0]이 30이되고, iter[3]이상은 접근할 수 없다.
	cout << *iter << endl;
	cout << endl;
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[2] << endl;
	//cout << iter[3] << endl;
	cout << endl;

	vector<int>::iterator iter2 = iter + 2; //iter에서 2만큼 더 이동한 원소를 iter2 반복자에 대입
	cout << *iter2 << endl;


	return 0;

}