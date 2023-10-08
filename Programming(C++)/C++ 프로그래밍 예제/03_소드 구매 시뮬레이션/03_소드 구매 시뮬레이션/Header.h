#pragma once

#include <iostream>
using namespace std;


enum Menu_Type {

	구매 = 1,
	판매,
	실적,
	갈리드충전,
	나가기


};


class Broee {


private: //칼의 구매를 목적으로 0보다 작은 수를 전달할 수 없다.

	int SWORD_PRICE;
	int numofSWORD;
	int BroeMONEY;

public:
	Broee(int price, int num, int money); // 생성자
	int SalesSword(int money);
	void showSWORDResult();
	void increaseSWORD(int EA);

	
};

class SWORDBuyer {

private:

	int mymoney;
	int numofSWORD;

public:
	SWORDBuyer(int money); //생성자
	bool BuySWORD(Broee& seller, int money);
	void showSWORDResult();
	void SellSWORD(Broee& seller, int EA);
	
		
};


