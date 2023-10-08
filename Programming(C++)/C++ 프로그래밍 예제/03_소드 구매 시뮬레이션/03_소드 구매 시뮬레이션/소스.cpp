#include "Header.h"



void Broee::increaseSWORD(int EA) {

	numofSWORD += EA;


}

 Broee::Broee(int price, int num, int money) : SWORD_PRICE(price),numofSWORD(num),BroeMONEY(money)
 {}

	 int Broee::SalesSword(int money) {

		 if (numofSWORD <= 0) {
			 cout << "��� �ҵ尡 �Ǹŵ� �����Դϴ�. " << endl;

			 return 0;

		 }

		int nums = money / SWORD_PRICE;
		numofSWORD -= nums;
		BroeMONEY += money;
		cout << "**********************************" << endl;
		cout << "���Ű� �Ϸ�Ǿ����ϴ�. " << endl << endl;

		return nums;


	}

	void Broee::showSWORDResult() {

		cout << "���� ������Ǳ׷���Ʈ�ҵ� ���� : " << numofSWORD << endl << endl;
		cout << "������� �ǸŽ��� : " << BroeMONEY << "������" << endl << endl;


	}

	void SWORDBuyer::SellSWORD(Broee &seller, int EA) {

		//�ش� Ŭ������ ��������� �̿��Ͽ� ���ǽ��� ������ �ش� Ŭ�������� ����Լ��� �����ϰ�,
		// Ÿ Ŭ������ �Լ��� �ҷ����� ���ؼ� ��ü������ ���ԵǴ� �μ����ٰ� Ÿ Ŭ������ �ּҰ��� ���۷����� �޴´�.

		if (numofSWORD <= 0) {
			cout << "�Ǹ��� �� �ִ� ���� �����ϴ�." << endl;

			return;

		}

		if ((EA * 1500) > (numofSWORD * 1500)) {

			cout << "�������ִ� �������� �Ǹ��Ϸ��� ������ �����ϴ�." << endl;

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
			cout << "�����尡 �����մϴ�." << endl;

			return false;
		}
		if (mymoney < money) {
			cout << "�����尡 �����մϴ�." << endl;

			return false;

		}
		
		numofSWORD += seller.SalesSword(money);
		mymoney -= money;
		return true;

	}

	void SWORDBuyer::showSWORDResult() {

		cout << "������Ǳ׷���Ʈ�ҵ� :" << numofSWORD << endl << endl;
		cout << "������ :" << mymoney << endl << endl;

	}

	
