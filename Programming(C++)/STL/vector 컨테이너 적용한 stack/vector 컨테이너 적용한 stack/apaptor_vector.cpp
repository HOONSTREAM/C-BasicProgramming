//����� �����̳ʷ� vector�� ������ stack �����̳�
// ��� ǥ�ؽ����������̳ʴ� empty,size,push_back,pop_back,back �������̽��� �����Ƿ� 
// stack �����̳� ������� �����̳ʷ� ����� �� �ִ�.

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {

	stack<int, vector<int>> st; //vector �����̳ʸ� ����� �����̳ʷ� �̿��Ͽ� stack ����

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl; //top ������ ���
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty()) //������ ������� Ȯ��
		cout << "stack�� ������ ����" << endl;

	return 0;
}