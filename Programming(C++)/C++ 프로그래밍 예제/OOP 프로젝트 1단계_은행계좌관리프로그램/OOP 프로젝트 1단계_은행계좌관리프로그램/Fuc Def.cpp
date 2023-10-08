#include "Header.h"
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

	accArr[accnum].accID = id;
	accArr[accnum].balance = balance;
	strcpy_s(accArr[accnum].cusName, name);  // ���ڿ� �����Լ�, name�� ����� ���ڿ��� accArr[accnum].cusName �� �����Ѵ�.
	
	accnum++;

}

void DepositMoney(void) {

	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "�Ա� �� :  "; cin >> money;

	for (int i = 0; i < accnum; i++) {

		if (accArr[i].accID == id) {
			accArr[i].balance = money;
			cout << "�Ա� �Ϸ�" << endl << endl;

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

		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
				cout << "�ܾ� ����" << endl << endl;
			return;

		}

		accArr[i].balance -= money;
		cout << "��� �Ϸ�" << endl << endl;
		return;


	}

	cout << "��ȿ���� ���� ID �Դϴ�. " << endl << endl;


}

void ShowAllAccInfo(void) {

	for (int i = 0; i < accnum; i++) {

		cout << "���� ID : " << accArr[i].accID << endl;
		cout << "�̸� : " << accArr[i].cusName << endl;
		cout << "�ܾ� : " << accArr[i].balance << endl;

	}
}