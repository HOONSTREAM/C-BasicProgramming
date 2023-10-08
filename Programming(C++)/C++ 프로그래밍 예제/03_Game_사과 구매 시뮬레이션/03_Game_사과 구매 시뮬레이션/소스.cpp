#include <iostream>

using namespace std;

class FruitSeller { //몰드, 성형틀 (클래스)

private :
	const static int APPLE_PRICE = 1000;
	int numofApples;
	int mymoney;

public :

	FruitSeller(int num, int money) : numofApples(num), mymoney(money) // 멤버 이니셜라이저를 이용한 변수초기화
	{
	}
	int SaleApples(int money) {

		int nums = money / APPLE_PRICE;
		numofApples -= nums;
		mymoney += money;

		return nums; //nums 지역변수는 소멸되고 임시변수 할당

	}

	void showSalesResult() {

		cout << "남은 사과 갯수 : " << numofApples << endl;
		cout << "판매 수익 : " << mymoney << endl;


	}
};

class FruitBuyer { //몰드 (클래스)

	int mymoney;
	int numofApples;

public :
	
	FruitBuyer(int money) : mymoney(money), numofApples(0) {}


	void BuyApples(FruitSeller& seller, int money) { //투입되는 인자가 (FruitSeller 클래스) seller의 별칭을 가진다.


		numofApples += seller.SaleApples(money); //반환값이 num(사과의 갯수)이므로 (Seller아저씨, 사과 2000원어치 주세요.)
		//나라는 객체가 과일장수라는 객체로부터 과일 객체를 구매하는 행위를 정의.
		mymoney -= money;

	}

	void showBuyResult() {

		cout << "현재 잔액 : " << mymoney << endl;
		cout << "사과 개수 : " << numofApples << endl;

	}

};

int main(void) {

	FruitSeller seller(20,0); //객체 생성
	FruitBuyer Buyer(5000); //객체 생성
	Buyer.BuyApples(seller, 2000); //과일의 구매
	// 78행 추가설명 : FruitSeller 클래스안에 존재하는 구매대상과 구매금액의 정보가 인자로 전달되도록 함수가 정의되었다.
    

	cout << "과일 판매자의 실적 " << endl;
	seller.showSalesResult();
	cout << "과일 구매자의 현황 " << endl;
	Buyer.showBuyResult();

	return 0;

}