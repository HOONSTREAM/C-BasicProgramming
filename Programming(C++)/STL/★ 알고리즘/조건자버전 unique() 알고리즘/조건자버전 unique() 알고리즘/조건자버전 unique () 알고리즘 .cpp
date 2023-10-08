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
     *(++result)=*first     //result ĭ�� ���� ���� ��Ű�� first ������ ä���. if���� false��  while������ �ǵ��ư��� first ĭ�� ������Ų��.
}
return ++result; while���� ����Ǹ� result�� ������Ű�� �����Ѵ�.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right) {

    return abs(right - left) < 10; //���� ������ ���� 10������ ���� ���̴�.

}

//������ �Լ��� ���� �ƴϸ� while�� ����

int main(void) {

    vector<int> v = { 10,11,30,32,40,50 };

    cout << "���� v : ";
    for (auto& elem : v)
        cout << elem << " ";
    cout << endl;

   auto iter_end = unique(v.begin(), v.end(), Pred);

   cout << "������ unique �˰��� ���� �� ���� v : ";
   for (auto& elem : v)
       cout << elem << " ";
   cout << endl;

   cout << "iter_end : " << *(iter_end) << endl;
   cout << "iter_end+1 : " << *(iter_end+1) << endl;

   v.erase(iter_end, v.end());

   


   cout << "erase ����Լ� ���� �� ���� v : ";
   for (auto& elem : v)
       cout << elem << " ";
   cout << endl;


   return 0;


}