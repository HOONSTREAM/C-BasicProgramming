#pragma once
#include "AccountData.h"
#include "AccountArray.h"

class AccountHandler {

private:
	BoundCheckPointPtrArray cuslist; 
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
