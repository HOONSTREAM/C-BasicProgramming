#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30 };

	cout << "[v.begin(),v.end())�� ������ ���� : " << v.end()-v.begin() << endl;

	list<int> lt = { 10,20,30 };

	cout << "[lt.begin(),lt.end())�� ������ ���� : ";
	cout<< distance(lt.begin(), lt.end());



	return 0;

}