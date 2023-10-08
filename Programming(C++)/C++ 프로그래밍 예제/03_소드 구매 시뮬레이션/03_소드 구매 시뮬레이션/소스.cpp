#include "Header.h"



void Broee::increaseSWORD(int EA) {

	numofSWORD += EA;


}

 Broee::Broee(int price, int num, int money) : SWORD_PRICE(price),numofSWORD(num),BroeMONEY(money)
 {}

	 int Broee::SalesSword(int money) {

		 if (numofSWORD <= 0) {
			 cout << "모든 소드가 판매된 상태입니다. " << endl;

			 return 0;

		 }

		int nums = money / SWORD_PRICE;
		numofSWORD -= nums;
		BroeMONEY += money;
		cout << "**********************************" << endl;
		cout << "구매가 완료되었습니다. " << endl << endl;

		return nums;


	}

	void Broee::showSWORDResult() {

		cout << "남은 브로이의그레이트소드 갯수 : " << numofSWORD << endl << endl;
		cout << "브로이의 판매실적 : " << BroeMONEY << "갈리드" << endl << endl;


	}

	void SWORDBuyer::SellSWORD(Broee &seller, int EA) {

		//해당 클래스의 멤버변수를 이용하여 조건식을 세울경우 해당 클래스에서 멤버함수를 구현하고,
		// 타 클래스의 함수를 불러오기 위해선 객체변수에 대입되는 인수에다가 타 클래스의 주소값을 레퍼런스로 받는다.

		if (numofSWORD <= 0) {
			cout << "판매할 수 있는 검이 없습니다." << endl;

			return;

		}

		if ((EA * 1500) > (numofSWORD * 1500)) {

			cout << "가지고있는 갯수보다 판매하려는 갯수가 많습니다." << endl;

			return;

		}

		numofSWORD -= EA;
		mymoney += (EA * 1500);
		seller.increaseSWORD(EA);

		



	}

	SWORDBuyer::SWORDBuyer(int money) : mymoney(money),numofSWORD(0) 
	{
		//empty 
	}

	bool SWORDBuyer::BuySWORD(Broee& seller, int money) {
		if (mymoney<= 0) {
			cout << "갈리드가 부족합니다." << endl;

			return false;
		}
		if (mymoney < money) {
			cout << "갈리드가 부족합니다." << endl;

			return false;

		}
		
		numofSWORD += seller.SalesSword(money);
		mymoney -= money;
		return true;

	}

	void SWORDBuyer::showSWORDResult() {

		cout << "브로이의그레이트소드 :" << numofSWORD << endl << endl;
		cout << "갈리드 :" << mymoney << endl << endl;

	}

	
