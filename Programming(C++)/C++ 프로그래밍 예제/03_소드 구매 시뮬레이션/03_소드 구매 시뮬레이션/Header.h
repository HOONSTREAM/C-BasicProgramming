#pragma once

#include <iostream>
using namespace std;


enum Menu_Type {

	���� = 1,
	�Ǹ�,
	����,
	����������,
	������


};


class Broee {


private: //Į�� ���Ÿ� �������� 0���� ���� ���� ������ �� ����.

	int SWORD_PRICE;
	int numofSWORD;
	int BroeMONEY;

public:
	Broee(int price, int num, int money); // ������
	int SalesSword(int money);
	void showSWORDResult();
	void increaseSWORD(int EA);

	
};

class SWORDBuyer {

private:

	int mymoney;
	int numofSWORD;

public:
	SWORDBuyer(int money); //������
	bool BuySWORD(Broee& seller, int money);
	void showSWORDResult();
	void SellSWORD(Broee& seller, int EA);
	
		
};


