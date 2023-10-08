#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)

class Book {

private :
	char title[100]; //������������ ��������� �����ϸ� �����Ҵ��� ���־����(������ �����Ҵ�) , ������ �״�� ��밡��
	char isbn[100];
	int price;
	//char* title= "book"; �� ����. ���� ���̽��� ��� ������ �ִ� ���� ���ͷ�(�����ͼ��׸�Ʈ����)�� title �����Ͱ� ����Ű�� ������ٰ� ���� �ǰ���!
public :
	Book(const char* mytitle, const char* myisbn, int money) : price(money) { //���ÿ� ����� ������ �ּҰ��� �޴´�.

		strcpy(title, mytitle);
		strcpy(isbn, myisbn);

	}

	void ShowBookInfo() {

		cout << "���� : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "���� : " << price << endl;

	}
	char* GetTitle() {

		return title;

	}
	char* Getisbn() {

		return isbn;

	}

	int GetPrice() {

		return price;
	}
};

class Ebook :public Book {

private : 
	char DRMKey[100]; //�������� ���� Ű

public :
	
	Ebook(const char* mytitle, const char* myisbn, int money, const char* Mydrmkey) :Book(mytitle, myisbn, money) {

		strcpy(DRMKey, Mydrmkey);
		DRMKeyScan(DRMKey);
	}

	void DRMKeyScan(const char* DRM) {

		if (strcmp("EKO-1123", DRM) != 0) {
			cout << "DRMŰ�� Ʋ���ϴ�. ����� �� �����ϴ�." << endl;
			return;

		}
			}
	char* GetDRMKEY() {
		return DRMKey;
	}

	void ShowEbookInfo() {

		cout << "���� : " << GetTitle() << endl;
		cout << "ISBN : " << Getisbn() << endl;
		cout << "���� : " << GetPrice() << endl;
		cout << "����Ű : " << GetDRMKEY();
		

	}

};


int main(void) {

	Book book1("C++ ���α׷���", "555-1234-890-0", 2000);

	book1.ShowBookInfo();

	Ebook book2("C++���α׷���", "555-123-43433", 20000, "EKO-1123");
	book2.ShowEbookInfo();



}
