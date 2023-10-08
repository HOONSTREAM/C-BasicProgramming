#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)

class Book {

private :
	char title[100]; //포인터형으로 멤버변수를 지정하면 동적할당을 해주어야함(힙에다 공간할당) , 스택은 그대로 사용가능
	char isbn[100];
	int price;
	//char* title= "book"; 도 가능. 위의 케이스는 상수 공간에 있는 문자 리터럴(데이터세그먼트공간)을 title 포인터가 가리키게 만들었다고 보면 되겠죠!
public :
	Book(const char* mytitle, const char* myisbn, int money) : price(money) { //스택에 저장된 변수의 주소값을 받는다.

		strcpy(title, mytitle);
		strcpy(isbn, myisbn);

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
};

class Ebook :public Book {

private : 
	char DRMKey[100]; //보안인증 관련 키

public :
	
	Ebook(const char* mytitle, const char* myisbn, int money, const char* Mydrmkey) :Book(mytitle, myisbn, money) {

		strcpy(DRMKey, Mydrmkey);
		DRMKeyScan(DRMKey);
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
		cout << "인증키 : " << GetDRMKEY();
		

	}

};


int main(void) {

	Book book1("C++ 프로그래밍", "555-1234-890-0", 2000);

	book1.ShowBookInfo();

	Ebook book2("C++프로그래밍", "555-123-43433", 20000, "EKO-1123");
	book2.ShowEbookInfo();



}
