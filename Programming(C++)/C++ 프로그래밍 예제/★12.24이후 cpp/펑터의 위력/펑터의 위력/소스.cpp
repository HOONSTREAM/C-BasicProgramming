#include <iostream>
using namespace std;

class SortRule {

public :

	virtual bool operator() (int num1, int num2) const = 0; //���� �����Լ�, �Լ��� ����� ����Ŭ�������� Ȯ�����ڴٴ� �ǹ�.
};

class AscendingSort : public SortRule {

public :

	bool operator() (int num1, int num2) const {
		cout << "�������� �۵�" << endl;
		if (num1 > num2)
			return true;
		else
			cout << "�������� ���۵�" << endl;
			return false;

	}
}; //��������

class DescendingSort : public SortRule {

public :

	bool operator() (int num1, int num2) const {
		
		if (num1 < num2) {
			cout << "�������� �۵�" << endl;
			return true;
		}
		else
			cout << "�������� ���۵�" << endl;
			return false;

	}
};

class DataStorage {

private :
	int* arr;
	int idx;
	const int MAX_LEN;

public :
	DataStorage(int arrlen) :idx(0), MAX_LEN(arrlen) {

		arr = new int[MAX_LEN];
	}

	void AddData(int num) {

		if (MAX_LEN <= idx) {

			cout << "���̻� ������ �Ұ��� �մϴ�." << endl;
			return;
		}
		arr[idx++] = num; 

	}

	void ShowAllData() {
		for (int i = 0; i < (idx); i++)
			cout << arr[i] << " ";
		cout << endl;

	}

	void SortData(const SortRule& functor) {

		for (int i = 0; i<(idx - 1); i++) {
			for (int j = 0; j < (idx - 1)-i; j++) {

				if (functor(arr[j], arr[j + 1])) {  //��, 1(true)�� ��ȯ�Ǹ� ��ȯ����, 0(false)�� ��ȯ�Ǹ� ��ȯ �����

					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;

				}
			}
		}
	}
};

int main(void) {

	DataStorage storage(5);

	storage.AddData(50);
	storage.AddData(40);
	storage.AddData(30);
	storage.AddData(20);
	storage.AddData(10);

	storage.SortData(DescendingSort());

	storage.ShowAllData();

	

	if (0) {
		cout << "t" << endl;
	}
	if (1) {
		cout << "f" << endl;
	}

	return 0;
}