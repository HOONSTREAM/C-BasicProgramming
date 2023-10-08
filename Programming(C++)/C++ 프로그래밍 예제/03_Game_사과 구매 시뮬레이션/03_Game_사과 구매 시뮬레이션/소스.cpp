#include <iostream>

using namespace std;

class FruitSeller { //����, ����Ʋ (Ŭ����)

private :
	const static int APPLE_PRICE = 1000;
	int numofApples;
	int mymoney;

public :

	FruitSeller(int num, int money) : numofApples(num), mymoney(money) // ��� �̴ϼȶ������� �̿��� �����ʱ�ȭ
	{
	}
	int SaleApples(int money) {

		int nums = money / APPLE_PRICE;
		numofApples -= nums;
		mymoney += money;

		return nums; //nums ���������� �Ҹ�ǰ� �ӽú��� �Ҵ�

	}

	void showSalesResult() {

		cout << "���� ��� ���� : " << numofApples << endl;
		cout << "�Ǹ� ���� : " << mymoney << endl;


	}
};

class FruitBuyer { //���� (Ŭ����)

	int mymoney;
	int numofApples;

public :
	
	FruitBuyer(int money) : mymoney(money), numofApples(0) {}


	void BuyApples(FruitSeller& seller, int money) { //���ԵǴ� ���ڰ� (FruitSeller Ŭ����) seller�� ��Ī�� ������.


		numofApples += seller.SaleApples(money); //��ȯ���� num(����� ����)�̹Ƿ� (Seller������, ��� 2000����ġ �ּ���.)
		//����� ��ü�� ���������� ��ü�κ��� ���� ��ü�� �����ϴ� ������ ����.
		mymoney -= money;

	}

	void showBuyResult() {

		cout << "���� �ܾ� : " << mymoney << endl;
		cout << "��� ���� : " << numofApples << endl;

	}

};

int main(void) {

	FruitSeller seller(20,0); //��ü ����
	FruitBuyer Buyer(5000); //��ü ����
	Buyer.BuyApples(seller, 2000); //������ ����
	// 78�� �߰����� : FruitSeller Ŭ�����ȿ� �����ϴ� ���Ŵ��� ���űݾ��� ������ ���ڷ� ���޵ǵ��� �Լ��� ���ǵǾ���.
    

	cout << "���� �Ǹ����� ���� " << endl;
	seller.showSalesResult();
	cout << "���� �������� ��Ȳ " << endl;
	Buyer.showBuyResult();

	return 0;

}