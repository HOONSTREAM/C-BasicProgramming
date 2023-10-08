#include <iostream>
using namespace std;

class SortRule {

public :

	virtual bool operator() (int num1, int num2) const = 0; //순수 가상함수, 함수의 기능을 유도클래스에서 확정짓겠다는 의미.
};

class AscendingSort : public SortRule {

public :

	bool operator() (int num1, int num2) const {
		cout << "오름차순 작동" << endl;
		if (num1 > num2)
			return true;
		else
			cout << "오름차순 비작동" << endl;
			return false;

	}
}; //오름차순

class DescendingSort : public SortRule {

public :

	bool operator() (int num1, int num2) const {
		
		if (num1 < num2) {
			cout << "내림차순 작동" << endl;
			return true;
		}
		else
			cout << "내림차순 비작동" << endl;
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

			cout << "더이상 저장이 불가능 합니다." << endl;
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

				if (functor(arr[j], arr[j + 1])) {  //즉, 1(true)가 반환되면 교환실행, 0(false)가 반환되면 교환 비실행

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