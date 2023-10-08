#pragma once
#include "AccountData.h"

class AccountHandler {

private:
	AccountData* cuslist[100]; //��ü�����͹迭�� ���������� �ּҰ����� ����
	int cusnum; //�� ��

public:
	AccountHandler(); //������
	void MakeAccount(); //���°����Լ�
	void ShowMenu(); //�޴����
	void DepositMoney(); //�Ա���Ʈ��
	void WithdrawMoney(); //�����Ʈ��
	void ShowAllAccInfo(); // ������ ������ ������� ���
	~AccountHandler();
	void AddAccount(AccountData* emp);
	void MakeNormalAccount();
	void MakeCreditAccount();

};
