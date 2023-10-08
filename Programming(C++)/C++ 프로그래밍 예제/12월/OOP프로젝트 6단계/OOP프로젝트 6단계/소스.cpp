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
// ���� ����
 enum {NORMAL=1,CREDIT=2};
//�ſ� ���
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };

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
	int WithDraw(int money); //����Լ�
	void showAccInfo() const; //��������
	~AccountData(); //�Ҹ���
	virtual void Deposit(int money); // �Ա� �����Լ�
};

AccountData::AccountData(int ID, int money, char* name) : accID(ID), balance(money) {

	cusname = new char[strlen(name) + 1]; //�����Ҵ�
	strcpy(cusname, name);

}

AccountData::AccountData(const AccountData& copy) :accID(copy.accID), balance(copy.balance) { //��������ڸ� ����

	cusname = new char[strlen(copy.cusname) + 1];
	strcpy(cusname, copy.cusname);
}

void AccountData::Deposit(int money) {

	cout << "AccountData::Deposit" << endl;
	balance += money;

}

int AccountData::GetAccID() const { return accID; } // accID�� ���Ϲ޴� ���Լ� ����


 

int AccountData::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;

}

void AccountData::showAccInfo() const
{
	cout << "���� ID : " << accID << endl;
	cout << "�̸� : " << cusname << endl;
	cout << " �ܾ� : " << balance << endl;


}

AccountData::~AccountData()  //�Ҹ��� ����
{
	delete[]cusname;

}

class NormalAccount : public AccountData {

private : 
	int Account_interest;

public :

	NormalAccount(int MyID, int Mymoney, char* myname, int ratio); //������

	NormalAccount(const NormalAccount& copy); //�ڽ�Ŭ���� ���������

	virtual void Deposit(int money){

		cout << "virtual void Deposit ::normalAccount " << endl;

		AccountData::Deposit(money); 

		AccountData::Deposit(money * Account_interest/100);

	}

};

NormalAccount ::NormalAccount(int MyID, int Mymoney, char* myname, int ratio) :AccountData(MyID, Mymoney, myname), Account_interest(ratio) {}
NormalAccount ::NormalAccount(const NormalAccount& copy) : AccountData(copy), Account_interest(copy.Account_interest) {}


class HighCreditAccount : public NormalAccount {

private :

	double specialrate;

public :
	HighCreditAccount(int MyID, int Mymoney, char* myname, double ratio_1, double ratio_2) : NormalAccount(MyID, Mymoney, myname, ratio_1), specialrate(ratio_2) {}
	HighCreditAccount(const HighCreditAccount& copy) : NormalAccount(copy), specialrate(copy.specialrate) {}

	virtual void Deposit(int money) {

		cout << "DePosit::HighcreditAccount" << endl;

		NormalAccount::Deposit(money);

		NormalAccount::Deposit(money * specialrate/100);
     
	}
};



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
	 void AddAccount(AccountData *emp);


protected :
	void MakeNormalAccount();
	void MakeCreditAccount();

};

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

	case 1 :
		cuslist[cusnum++] = new HighCreditAccount (id, balance,name, ratio, LEVEL_A);
		
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

void AccountHandler::AddAccount(AccountData *emp) {

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
