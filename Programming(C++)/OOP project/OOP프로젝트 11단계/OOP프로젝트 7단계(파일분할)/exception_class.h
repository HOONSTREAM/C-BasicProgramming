#pragma once
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class DepositException // �Ա� ���� ���ܻ�Ȳ�� ǥ���� ���ؼ� ���ǵ� Ŭ����
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money) {} //������ ����

	void ShowExceptionReason() {

		cout << "���� �޼��� : " << reqDep << "�� �Ա��� �Ұ��մϴ�." << endl;

	}

};

class WithDrawException // ��ݰ��� ���ܻ�Ȳ�� ǥ���� ���ؼ� ���ǵ� Ŭ����
{

private:
	int balance;

public:

	WithDrawException(int money) :balance(money) {}

	void ShowExceptionReason() {

		cout << "���� �޼��� : �� �ܰ� " << balance << "������, �ܾ��� �����մϴ�." << endl;

	}
}; 
