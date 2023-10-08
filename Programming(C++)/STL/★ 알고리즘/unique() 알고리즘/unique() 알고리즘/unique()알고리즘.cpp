//unique() �˰��� : ���� ���Ҹ� �����ϰ� �����. search_n() -> unique() �˰��� Ȱ�� ����� ����.
// �����ѻ��¿��� �����ϸ� ��� ���Ҹ� �����ϰ� ���� �� ������, �������θ� ���� ��. ������ ���ŵ��� ����.
// �����Ⱚ�� �ڷθ��Ƽ� �����Ⱚ ó���� ������. erase() ����Լ��� ���ؼ�.
//���� ����� ����Ʈ���� �����Ѵ�. 


//while ���� ������ �Ҷ����� �ݺ� �����Ѵ�.���� if�� false�� �ٷ� while������ �ǵ��ư���. ���̸� ����. while ���� ����Ǹ� ������ �� ������ �����Ѵ�.

/*unique �˰��� ���� ���*/

/* template<class Forwarditerator>
Forwarditerator unique (ForwardIterator first, ForwardIterator last) {

if(first=last) return last;
Forwarditerator result = first;

while (++first != last ) {

  if(!(*result==*first))     //result ���� first ���� �ٸ��� (Ȥ�� ������ ������ ��� ������ �Լ��� ���� �ƴϸ�)
     *(++result)=*first     //result ĭ�� ���� ���� ��Ű�� first ������ ä���. ������ while������ �ǵ��ư��� first ĭ�� ������Ų��. 
}
return ++result; while���� ����Ǹ� result�� ������Ű�� �����Ѵ�.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v = { 10,20,30,30,40,40,30,50 };

	cout << "���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	auto iter_end = unique(v.begin(), v.end());

	cout << "unique �˰��� ���� �� ���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	v.erase(iter_end, v.end());

	cout << "erase ����Լ� ��� �� ���� v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;


	return 0;

}