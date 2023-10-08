#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	vector<int>::iterator iter = v.begin() + 1;
	vector<int>::const_iterator citer = iter;

	//vector<int>::reverse_iterator riter(iter)와 같음
	reverse_iterator<vector<int>::iterator> riter(iter);
	//vector<int>::const_reverse_iterator criter(riter)와 같음
	reverse_iterator<vector<int>::const_iterator> criter(riter);

	cout << "iter : " << *iter << endl;
	cout << "citer : " << *citer << endl;
	cout << "riter : " << *riter << endl;
	cout << "criter : " << *criter << endl;

	cout << "======================" << endl;
	cout << "riter.base() : " << *riter.base() << endl;
	cout << "criter.base() : " << *criter.base() << endl;

	return 0;


}