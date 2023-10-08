#include "AccountHandler.h"
#include "BankingCommonDec1.h"
#include "HighCreditAccount.h"


AccountHandler::AccountHandler() : cusnum(0) {}

void AccountHandler::MakeAccount() {

	int sel;
	cout << "[���� ���� ����]" << endl;
	cout << "1.���� ���� ����" << endl;
	cout << "2. �ſ� �ŷ� ����" << endl;
	cout << "���� : ";
	cin >> sel;

	if (sel == NORMAL)
		MakeNormalAccount();
	else
	{
		MakeCreditAccount();
	}



}

void AccountHandler::MakeNormalAccount() {

	int id;
	char name[NAME_LEN];
	int balance;
	int ratio;

	cout << " [���� ����] " << endl;
	cout << " ���� ID : "; cin >> id;
	cout << " �̸� : "; cin >> name;
	cout << "�Ա� �� : "; cin >> balance;
	cout << "������(%) : "; cin >> ratio;
	cout << endl;


	cuslist[cusnum++] = new NormalAccount(id, balance, name, ratio);


}

void AccountHandler::MakeCreditAccount() {

	int id;
	char name[NAME_LEN];
	int balance;
	int ratio;
	int creditlevel;


	cout << " [���� ����] " << endl;
	cout << " ���� ID : "; cin >> id;
	cout << " �̸� : "; cin >> name;
	cout << "�Ա� �� : "; cin >> balance;
	cout << "������(%) : "; cin >> ratio;
	cout << "�ſ� ��� (1 = A , 2 = B , 3 = C ) : ";
	cin >> creditlevel;

	switch (creditlevel) {

	case 1:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_A);

		break;

	case 2:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_B);

		break;
	case 3:
		cuslist[cusnum++] = new HighCreditAccount(id, balance, name, ratio, LEVEL_C);

		break;
	}

	cout << endl;

}

void AccountHandler::AddAccount(AccountData* emp) {

	cuslist[cusnum++] = emp;
}

void AccountHandler::ShowMenu() {

	cout << "-------------MENU-------------" << endl;
	cout << " 1. ���°��� " << endl;
	cout << " 2. �Ա�" << endl;
	cout << " 3. ���" << endl;
	cout << " 4. �������� ��ü ���" << endl;
	cout << " 5. ���α׷� ���� " << endl;

}


void AccountHandler::DepositMoney() {

	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "�Ա� �� :  "; cin >> money;

	for (int k = 0; k < cusnum; k++) {

		if (cuslist[k]->GetAccID() == id) {  //a -> b �� (*a).b�� �����մϴ�. , accArr�� ��ü ������ �迭�� ����Ǿ��� ������ .. 

			cuslist[k]->Deposit(money);
			cout << "�ԱݿϷ�" << endl;
			return;

		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;

}

void AccountHandler::WithdrawMoney() {

	int money;
	int id;

	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "��� �� :  "; cin >> money;

	for (int i = 0; i < cusnum; i++) {

		if (cuslist[i]->GetAccID() == id)
		{
			if (cuslist[i]->WithDraw(money) == 0) { //�Լ��� �������� �� 0�� ��ȯ�Ǹ� 
				cout << "�ܾ� ����" << endl << endl;
				return;
			}

			cout << "��� �Ϸ�" << endl << endl;
			return;

		}


	}

	cout << "��ȿ���� ���� ID �Դϴ�. " << endl << endl;


}

void AccountHandler::ShowAllAccInfo() {

	for (int i = 0; i < cusnum; i++) {

		cuslist[i]->showAccInfo(); //(*accArr[i].showAccInfo() �� ����) , �� accArr[i]�� �ּҴ�. 
		cout << endl;

	}

}

AccountHandler::~AccountHandler() {

	for (int i = 0; i < cusnum; i++) {
		delete cuslist[i];
	}
}
