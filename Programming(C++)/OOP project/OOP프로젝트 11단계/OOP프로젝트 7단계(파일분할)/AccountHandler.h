#pragma once
#include "AccountData.h"
#include "String.h"
#include "BoundCheckArray Template.h"

class AccountHandler {

private:
	
	BoundCheckArray<AccountData*> cuslist;
	int cusnum ; //�� ��

public:
	AccountHandler(); //������
	void MakeAccount(); //���°����Լ�
	void ShowMenu(); //�޴����
	void DepositMoney(); //�Ա���Ʈ��
	void WithdrawMoney(); //�����Ʈ��
	void ShowAllAccInfo(); // ������ ������ ������� ���
	~AccountHandler();
	void MakeNormalAccount();
	void MakeCreditAccount();

};
