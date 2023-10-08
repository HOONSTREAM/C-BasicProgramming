#pragma once

class AccountData {

private:
	int accID; // ���� ID
	int balance; // ���� �ܾ�
	char* cusname; //������ �̸�

public:
	AccountData(int ID, int money, char* name); // ������
	AccountData(const AccountData& copy); //���������

	int GetAccID() const; // AccID(����ID)�� ��� ���Լ�
	int WithDraw(int money); //����Լ�
	void showAccInfo() const; //��������
	~AccountData(); //�Ҹ���
	virtual void Deposit(int money); // �Ա� �����Լ�
};