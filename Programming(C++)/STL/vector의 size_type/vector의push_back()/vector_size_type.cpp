#include <iostream>
#include <vector>
using namespace std;
/*size()는 unsigned int 타입을 반환하므로 i를 unsigned int로 변환해도 되지만, vector 내의
typedef된 멤버형식을 사용하는 것이 좋다.
vector의 size_type은 원소의 개수나 []연산자 등의 index로 사용하는 형식의 typedef된 멤버 형식이다.*/
int main(void) {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;


	cout << typeid(vector<int>::size_type).name() << endl;


	return 0;



}