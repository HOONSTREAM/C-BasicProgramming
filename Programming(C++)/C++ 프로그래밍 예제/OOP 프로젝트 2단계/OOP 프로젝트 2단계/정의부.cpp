#include <iostream> //Ŭ���� ���� �Լ� ����, �ٱ� �����Լ� ���� �Լ� ���� ���� ��������. 
#include <cstring>
using namespace std;
const int NAME_LEN = 20;
#pragma warning (disable:4996)

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

class Account {

private :
	
	int accID;
	int balance;
	char* cusname;

public:
	Account(int ID, int money, char* name) :accID(ID),balance(money) { //�������Լ�

		cusname = new char[strlen(name) + 1]; //�����Ҵ�
		strcpy(cusname, name);
		cout << "������ ȣ��" << endl;


	}

	Account(Account& copy) :accID(copy.accID), balance(copy.balance) {

		cusname = new char[strlen(copy.cusname) + 1];
		strcpy(cusname, copy.cusname);
	}

	int GetAccID() { return accID; }

	void Deposit(int money) {

		this->balance += money;

	}

	int WithDraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;

	}

	void showAccInfo()
	{
		cout << "���� ID : " << accID << endl;
		cout << "�̸� : " << cusname << endl;
		cout << " �ܾ� : " << balance << endl;


	}

	~Account() 
	{
		delete[]cusname;

	}

};

Account* accArr[100];
int accnum = 0;


int main(void)
{

	int choice;

	while (1)
	{
		ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			DepositMoney();
			break;

		case WITHDRAW:
			WithdrawMoney();
			break;

		case INQUIRE:
			ShowAllAccInfo();
			break;

		case EXIT:
			for (int i = 0; i < accnum; i++) {
				delete accArr[i];
			}
			return 0;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}


void ShowMenu(void) {

	cout << "-------------MENU-------------" << endl;
	cout << " 1. ���°��� " << endl;
	cout << " 2. �Ա�" << endl;
	cout << " 3. ���" << endl;
	cout << " 4. �������� ��ü ���" << endl;
	cout << " 5. ���α׷� ���� " << endl;

}

void MakeAccount(void) {

	int id;
	char name[NAME_LEN];
	int balance;

	cout << " [���� ����] " << endl;
	cout << " ���� ID : "; cin >> id;
	cout << " �̸� : "; cin >> name;
	cout << "�Ա� �� : "; cin >> balance;
	cout << endl;

	accArr[accnum++] = new Account(id, balance,name); // Ŭ���� ��ü ������ �迭 �Ҵ�

}

void DepositMoney(void) {

	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "�Ա� �� :  "; cin >> money;

	for (int i = 0; i < accnum; i++) {

		if (accArr[i]->GetAccID() == id) {  //a -> b �� (*a).b�� �����մϴ�. , accArr�� ��ü ������ �迭�� ����Ǿ��� ������ .. 
		
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl;
			return;

		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;

}

void WithdrawMoney(void) {

	int money;
	int id;

	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "��� �� :  "; cin >> money;

	for (int i = 0; i < accnum; i++) {

		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->WithDraw(money)== 0) { //�Լ��� �������� �� 0�� ��ȯ�Ǹ� 
				cout << "�ܾ� ����" << endl << endl;
				return;
			}
			
			cout << "��� �Ϸ�" << endl << endl;
			return;

		}


	}

	cout << "��ȿ���� ���� ID �Դϴ�. " << endl << endl;


}

void ShowAllAccInfo(void) {

	for (int i = 0; i < accnum; i++) {

		accArr[i]->showAccInfo();
		cout << endl;

	}
}