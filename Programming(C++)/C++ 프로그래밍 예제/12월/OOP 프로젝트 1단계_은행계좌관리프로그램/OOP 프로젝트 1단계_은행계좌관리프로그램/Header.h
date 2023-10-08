#include<iostream>
#include<cstring> // C ǥ�ض��̺귯�� <string.h>�� �����ϰ� ����� �̸��� ���ӽ����̽� std�� �߰��Ѵ�.


using namespace std;
const int NAME_LEN = 20; // const��	���� ����� �����Ҷ� ����Ѵ�. ��, ���� �����Ҽ� ���� ���� �� ����Ѵ�.

void ShowMenu(void);     //�޴� ���
void MakeAccount(void); // ���°����� ���� �Լ�
void DepositMoney(void); // �Ա�
void WithdrawMoney(void); // ���
void ShowAllAccInfo(void); // �ܾ� ��ȸ

enum Menu_Type {

	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT

};
	

typedef struct
{
	int accID; // ���¹�ȣ
	int balance; //�ܾ�
	char cusName[NAME_LEN]; // �� �̸�

}Account;

Account accArr[100]; // Account ���� �迭
int accnum = 0; // ����� Account ��
