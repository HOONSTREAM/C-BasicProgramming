#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
#define NAME_LEN 20
using namespace std;

enum Menu_Type {

	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT

};
// ������ Ŭ������ �����Ѵ�.
class AccountData {

private:
	int accID; // ���� ID
	int balance; // ���� �ܾ�
	char* cusname; //������ �̸�

public:
	AccountData(int ID, int money, char* name); // ������
	AccountData(const AccountData& copy); //���������
	 
	int GetAccID() const; // AccID(����ID)�� ��� ���Լ�
 	void Deposit(int money); //�Ա��Լ�
	int WithDraw(int money); //����Լ�
	void showAccInfo() const; //��������
	~AccountData(); //�Ҹ���
};

	AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {  //������ 

		cusname = new char[strlen(name) + 1]; //�����Ҵ�
		strcpy(cusname, name);
		
	}

	AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //��������ڸ� ����

		cusname = new char[strlen(copy.cusname) + 1];
		strcpy(cusname, copy.cusname);
	}

	int AccountData::GetAccID() const { return accID; } // accID�� ���Ϲ޴� ���Լ� ����


	void AccountData::Deposit(int money) {

		this->balance += money; 

	}

	int AccountData:: WithDraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;

	}

	void AccountData:: showAccInfo() const
	{
		cout << "���� ID : " << accID << endl;
		cout << "�̸� : " << cusname << endl;
		cout << " �ܾ� : " << balance << endl;


	}

	AccountData::~AccountData()  //�Ҹ��� ����
	{
		delete[]cusname;

	}

//��Ʈ�� Ŭ������ ����
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

	};

	AccountHandler::AccountHandler() : cusnum(0) {}

	void AccountHandler:: MakeAccount() {


		int id;
		char name[NAME_LEN];
		int balance;

		cout << " [���� ����] " << endl;
		cout << " ���� ID : "; cin >> id;
		cout << " �̸� : "; cin >> name;
		cout << "�Ա� �� : "; cin >> balance;
		cout << endl;

		cuslist[cusnum++] = new AccountData(id, balance, name); // Ŭ���� ��ü ������ �迭 �Ҵ�

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

	void AccountHandler:: ShowAllAccInfo() {

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



int main(void) {

	AccountHandler obj1;
	int choice;

	while (1)
	{
		
		obj1.ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			obj1.MakeAccount();
			break;

		case DEPOSIT:
			obj1.DepositMoney();
			break;

		case WITHDRAW:
			obj1.WithdrawMoney();
			break;

		case INQUIRE:
			obj1.ShowAllAccInfo();
			break;

		case EXIT:
			obj1.~AccountHandler();
			
			return 0;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}

