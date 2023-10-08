#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)

class Book {

private :
	char *title; //포인터형으로 멤버변수를 지정하면 동적할당을 해주어야함(힙에다 공간할당) , 스택은 그대로 사용가능
	char *isbn;
	int price;
	//char* title= "book"; 도 가능. 위의 케이스는 상수 공간에 있는 문자 리터럴(데이터세그먼트공간)을 title 포인터가 가리키게 만들었다고 보면 되겠죠!
public :
	Book(const char* mytitle, const char* myisbn, int money) : price(money) {

		title = new char[strlen(mytitle) + 1];
		strcpy(title, mytitle);
		isbn = new char[strlen(myisbn) + 1];
		strcpy(isbn, myisbn);


	}
	Book(const Book& copy) :price(copy.price) {


		cout << "Book의 복사생성자 호출" << endl;
		title = new char[strlen(copy.title) + 1];
		strcpy(title, copy.title);

		isbn = new char[strlen(copy.isbn) + 1];
		strcpy(isbn, copy.isbn);

	}

	Book& operator=(const Book& ref) {

		cout << "Book의 대입연산자호출" << endl;
		delete []title; //기존에 가리키고 있던 메모리 제거
		delete []isbn; //기존에 가리키고 있던 메모리 제거
		title = new char[strlen(ref.title)+1];
		strcpy(title, ref.title);

		isbn =new char[strlen(ref.isbn)+1];
		strcpy(isbn, ref.isbn);
		price = ref.price;

		return *this;

	}

	void ShowBookInfo() {

		cout << "제목 : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "가격 : " << price << endl;

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
	char *DRMKey; //보안인증 관련 키

public :
	
	Ebook(const char* mytitle, const char* myisbn, int money, const char* Mydrmkey) :Book(mytitle, myisbn, money) {

		DRMKey = new char[strlen(Mydrmkey) + 1];
		strcpy(DRMKey, Mydrmkey);
		DRMKeyScan(DRMKey);
	}

	Ebook(const Ebook& copys):Book(copys) {

		cout << "Ebook 복사생성자의 호출" << endl;

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
			cout << "DRM키가 틀립니다. 사용할 수 없습니다." << endl;
			return;

		}
			}
	char* GetDRMKEY() {
		return DRMKey;
	}

	void ShowEbookInfo() {

		cout << "제목 : " << GetTitle() << endl;
		cout << "ISBN : " << Getisbn() << endl;
		cout << "가격 : " << GetPrice() << endl;
		cout << "인증키 : " << GetDRMKEY() << endl;
		

	}

	~Ebook() {

		delete[]DRMKey;

	}

};


int main(void) {

	Book book1("C++ 프로그래밍", "555-1234-890-0", 2000);

	book1.ShowBookInfo();

	Ebook book2("C++프로그래밍", "555-123-43433", 20000, "EKO-1123");
	book2.ShowEbookInfo();

	Book book3 = book1;

	book3.ShowBookInfo();

	Book book4("대입을 한번 해보겠다", "555-123-890-234", 20000);

	book1 = book4;

	book1.ShowBookInfo();

	Ebook book7("D 플그래밍", "55-12", 20000, "EKO");
	book2 = book7;

	book2.ShowEbookInfo();










}
