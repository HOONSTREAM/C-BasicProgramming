#include <iostream>
#include <string>
using namespace std;

int main(void) {

	const char* sz ="��ſ��� ���� �ʿ��� å�� ������� �Ͽ��� ���� ���� �����ϰ� �ϴ� å�̴�. - ��ũ Ʈ���� -";
	string t("Randy");
	string s = sz;

	cout << "find(c) : " << s.find('��') << endl;
	cout << "find(c,off) : " << s.find('��', 7) << endl;
	cout << "find(sz) : " << s.find("å�̴�.") << endl;
	cout << "size : " << s.size() << "capacity : " << s.capacity() << "length : " << s.length() << endl;
	cout << "find(sz,off) : " << s.find("���", 6) << endl;

	string::size_type pos = s.find("Not Found");

	cout <<"s.find(NotFound) : " <<(int)s.find("Not Found")<<","<< (int)string::npos << endl;
	
	pos = s.rfind('��');

	if (string::npos != pos)
		cout << "s.rfind(c) : " << pos << endl;


	return 0;

}