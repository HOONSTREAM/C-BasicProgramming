/*�Ű������� void ������ ����Ǵ� ����Ʈ �����ڴ� �����ڰ� �ϳ��� ���ԵǾ� ���� ���� �� �ڵ����� �����Ϸ��� ���� ���ǵǸ�
������ ���� ���ǵ� Ŭ�������� ����Ʈ�����ڰ� ���Ե��� �ʴ´�.*/
#include <iostream>
using namespace std;

class SoSimple {

private :
	
	int num;
public :
	SoSimple(int n) : num(n)
	{}
	
	SoSimple() : num(0) {}
};

int main(void) {

	SoSimple obj;
	SoSimple obj(100);


}