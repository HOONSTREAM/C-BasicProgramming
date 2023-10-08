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

	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;
	cout << endl;

	iter = v.begin() + 2; //30�� ����Ű����
	iter2 = v.erase(iter); //iter2�� ����Ű����ġ�� erase����Լ� ��������ν� 40�� �ȴ�.
	cout << "iter2 = " << *iter2 << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;


	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	iter2 = v.erase(v.begin() + 1, v.end()); //�������� ����

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "size : " << v.size() << " " << "capacity : " << v.capacity() << endl;

	return 0;



}

