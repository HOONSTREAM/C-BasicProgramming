#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)

class Book {

private :
	char *title; //������������ ��������� �����ϸ� �����Ҵ��� ���־����(������ �����Ҵ�) , ������ �״�� ��밡��
	char *isbn;
	int price;
	//char* title= "book"; �� ����. ���� ���̽��� ��� ������ �ִ� ���� ���ͷ�(�����ͼ��׸�Ʈ����)�� title �����Ͱ� ����Ű�� ������ٰ� ���� �ǰ���!
public :
	Book(const char* mytitle, const char* myisbn, int money) : price(money) {

		title = new char[strlen(mytitle) + 1];
		strcpy(title, mytitle);
		isbn = new char[strlen(myisbn) + 1];
		strcpy(isbn, myisbn);


	}
	Book(const Book& copy) :price(copy.price) {


		cout << "Book�� ��������� ȣ��" << endl;
		title = new char[strlen(copy.title) + 1];
		strcpy(title, copy.title);

		isbn = new char[strlen(copy.isbn) + 1];
		strcpy(isbn, copy.isbn);

	}

	Book& operator=(const Book& ref) {

		cout << "Book�� ���Կ�����ȣ��" << endl;
		delete []title; //������ ����Ű�� �ִ� �޸� ����
		delete []isbn; //������ ����Ű�� �ִ� �޸� ����
		title = new char[strlen(ref.title)+1];
		strcpy(title, ref.title);

		isbn =new char[strlen(ref.isbn)+1];
		strcpy(isbn, ref.isbn);
		price = ref.price;

		return *this;

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

	~Book() {

		delete[]title;
		delete[]isbn;

	}
};

class Ebook :public Book {

private : 
	char *DRMKey; //�������� ���� Ű

public :
	
	Ebook(const char* mytitle, const char* myisbn, int money, const char* Mydrmkey) :Book(mytitle, myisbn, money) {

		DRMKey = new char[strlen(Mydrmkey) + 1];
		strcpy(DRMKey, Mydrmkey);
		DRMKeyScan(DRMKey);
	}

	Ebook(const Ebook& copys):Book(copys) {

		cout << "Ebook ����������� ȣ��" << endl;

		DRMKey = new char[strlen(copys.DRMKey) + 1];
		strcpy(DRMKey, copys.DRMKey);

	}

	Ebook& operator= (const Ebook& ref) {


		Book::operator=(ref);
		delete[]DRMKey;
		DRMKey = new char[strlen(ref.DRMKey) + 1];
		strcpy(DRMKey, ref.DRMKey);

		return *this;


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
		cout << "����Ű : " << GetDRMKEY() << endl;
		

	}

	~Ebook() {

		delete[]DRMKey;

	}

};


int main(void) {

	Book book1("C++ ���α׷���", "555-1234-890-0", 2000);

	book1.ShowBookInfo();

	Ebook book2("C++���α׷���", "555-123-43433", 20000, "EKO-1123");
	book2.ShowEbookInfo();

	Book book3 = book1;

	book3.ShowBookInfo();

	Book book4("������ �ѹ� �غ��ڴ�", "555-123-890-234", 20000);

	book1 = book4;

	book1.ShowBookInfo();

	Ebook book7("D �ñ׷���", "55-12", 20000, "EKO");
	book2 = book7;

	book2.ShowEbookInfo();










}
