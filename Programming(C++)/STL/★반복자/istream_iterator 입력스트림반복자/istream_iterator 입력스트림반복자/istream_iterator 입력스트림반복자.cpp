#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(void) {

	vector<int> v;
	//ǥ�� �Է� ��Ʈ������ ������ �Է¹޾� v�� ����
	/*copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int>>(v));

	cout << "v :";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	*/
	//������ ��Ʈ�� �� (ctrl+D) ���� �Է¹޾� ȭ�鿡 ���
	copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));

	return 0;

}