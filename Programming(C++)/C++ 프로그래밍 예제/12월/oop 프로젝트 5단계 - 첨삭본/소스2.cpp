#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

enum MenuType {
	kMake = 1,
	kDeposit,
	kWithdraw,
	kInquire,
	kExit
};

// ������ Ŭ������ �����Ѵ�.
class AccountData {
public:
	AccountData(size_t id, size_t money, char* name); // ������
	AccountData(const AccountData& copy); //���������
	~AccountData(); //�Ҹ���
	 
	size_t GetAccID() const; // AccID(����ID)�� ��� ���Լ�
 	void Deposit(size_t money); //�Ա��Լ�
	size_t WithDraw(size_t money); //����Լ�
	void showAccInfo() const; //��������
	
private:
	size_t mAccountId; // ���� ID
	size_t mBalance; // ���� �ܾ�
	char* mCustomerName; //������ �̸�

	char* NewCustomerName(char* name);
};

AccountData::AccountData(size_t id, size_t money, char* name) : mAccountId(id), mBalance(money), mCustomerName(NewCustomerName(name)) { }

AccountData::AccountData(const AccountData& copy) : AccountData(copy.mAccountId, copy.mBalance, copy.mCustomerName) { }

char* AccountData::NewCustomerName(char* name) {
	char* result = new char[strlen(name) + 1];
	strcpy(result, name);

	return result;
}

size_t AccountData::GetAccID() const { return mAccountId; } // accID�� ���Ϲ޴� ���Լ� ����


void AccountData::Deposit(size_t money) {
	this->mBalance += money; 
}

size_t AccountData:: WithDraw(size_t money) {
	if (mBalance < money)
		return 0;

	mBalance -= money;
	return money;
}

void AccountData:: showAccInfo() const {
	cout << "���� ID : " << mAccountId << endl;
	cout << "�̸� : " << mCustomerName << endl;
	cout << " �ܾ� : " << mBalance << endl;
}

AccountData::~AccountData() { //�Ҹ��� ����
	delete[] mCustomerName;
}

//��Ʈ�� Ŭ������ ����
class AccountHandler {
public:
	AccountHandler() = default; //������
	void MakeAccount(); //���°����Լ�
	void ShowMenu(); //�޴����
	void DepositMoney(); //�Ա���Ʈ��
	void WithdrawMoney(); //�����Ʈ��
	void ShowAllAccInfo(); // ������ ������ ������� ���
	~AccountHandler();

private:
	static constexpr size_t kMaxCustomer = 100;
	static constexpr size_t kMaxNameLength = 20;

	AccountData* mCustomerList[100] = {0}; //��ü�����͹迭�� ���������� �ּҰ����� ����
	size_t mSize = 0; //�� ��

	AccountData* FindCustomer(size_t id);
};

void AccountHandler:: MakeAccount() {
	size_t id;
	char name[kMaxNameLength];
	size_t balance;

	cout << " [���� ����] " << endl;
	cout << " ���� ID : "; cin >> id;
	cout << " �̸� : "; cin >> name;
	cout << "�Ա� �� : "; cin >> balance;
	cout << endl;

	mCustomerList[mSize++] = new AccountData(id, balance, name); // Ŭ���� ��ü ������ �迭 �Ҵ�
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
	size_t money;
	size_t id;
	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "�Ա� �� :  "; cin >> money;

	AccountData* customer = FindCustomer(id);
	if (customer == nullptr) {
		cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
	} else {
		customer->Deposit(money);
		cout << "�ԱݿϷ�" << endl;
	}
}

// �� id�� �������� ������ nullptr�� ��ȯ
AccountData* AccountHandler::FindCustomer(size_t id) {
	AccountData *result = nullptr;

	for (size_t i = 0; i < mSize; i++) {

		if (mCustomerList[i]->GetAccID() == id) {  //a -> b �� (*a).b�� �����մϴ�. , accArr�� ��ü ������ �迭�� ����Ǿ��� ������ .. 
			result = mCustomerList[i];
			break;
		}
	}

	return result;
}

void AccountHandler::WithdrawMoney() {

	size_t money;
	size_t id;

	cout << "[�� ��]" << endl;
	cout << "���� ID : "; cin >> id;
	cout << "��� �� :  "; cin >> money;

	AccountData* customer = FindCustomer(id);
	if (customer == nullptr) {
		cout << "��ȿ���� ���� ID �Դϴ�. " << endl << endl;
		return;
	} 

	if (customer->WithDraw(money) == 0) {
		cout << "�ܾ� ����" << endl << endl;
	} else {
		cout << "��� �Ϸ�" << endl << endl;
	}
}

void AccountHandler:: ShowAllAccInfo() {
	for (size_t i = 0; i < mSize; i++) {
		mCustomerList[i]->showAccInfo(); //(*mCustomerList[i].showAccInfo() �� ����) , �� mCustomerList[i]�� �ּҴ�. 
		cout << endl;
	}
}

AccountHandler::~AccountHandler() {
	for (size_t i = 0; i < mSize; i++) {
		delete mCustomerList[i];
	}
}

int main(void) {

	size_t choice;
	AccountHandler obj1;

	bool repeat = true;
	while (repeat)
	{
		obj1.ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case kMake:
			obj1.MakeAccount();
			break;

		case kDeposit:
			obj1.DepositMoney();
			break;

		case kWithdraw:
			obj1.WithdrawMoney();
			break;

		case kInquire:
			obj1.ShowAllAccInfo();
			break;

		case kExit:
			repeat = false;
			break;

		default:
			cout << "Illegal Selection .. " << endl;

		}
	}

	return 0;
}

