#include <iostream>
#include <string>
using namespace std;

int main(void) {

	const char* sz ="당신에게 가장 필요한 책은 당신으로 하여금 가장 많이 생각하게 하는 책이다. - 마크 트웨인 -";
	string t("Randy");
	string s = sz;

	cout << "find(c) : " << s.find('당') << endl;
	cout << "find(c,off) : " << s.find('다', 7) << endl;
	cout << "find(sz) : " << s.find("책이다.") << endl;
	cout << "size : " << s.size() << "capacity : " << s.capacity() << "length : " << s.length() << endl;
	cout << "find(sz,off) : " << s.find("당신", 6) << endl;

	string::size_type pos = s.find("Not Found");

	cout <<"s.find(NotFound) : " <<(int)s.find("Not Found")<<","<< (int)string::npos << endl;
	
	pos = s.rfind('다');

	if (string::npos != pos)
		cout << "s.rfind(c) : " << pos << endl;


	return 0;

}