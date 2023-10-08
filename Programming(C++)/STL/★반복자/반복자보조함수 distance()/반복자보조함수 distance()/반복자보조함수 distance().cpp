#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30 };

	cout << "[v.begin(),v.end())의 원소의 갯수 : " << v.end()-v.begin() << endl;

	list<int> lt = { 10,20,30 };

	cout << "[lt.begin(),lt.end())의 원소의 갯수 : ";
	cout<< distance(lt.begin(), lt.end());



	return 0;

}