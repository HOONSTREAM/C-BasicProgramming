#include "AccountArray.h"
#include "BankingCommonDec1.h"


BoundCheckPointPtrArray::BoundCheckPointPtrArray(int len) : arrlen(len) {

	arr = new Account_PTR[len]; //AccountData ��ü�� �ּ��� �ּҰ��� ������ �����Ѵ�.
}

Account_PTR& BoundCheckPointPtrArray::operator[] (int idx) {

	if (idx < 0 || idx >= arrlen) {

		cout << "Array Index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}


Account_PTR BoundCheckPointPtrArray::operator[] (int idx) const {

	if (idx < 0 || idx >= arrlen) {

		cout << "Array Index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

int BoundCheckPointPtrArray::GetArrLen() const { return arrlen; }

/*BoundCheckPointPtrArray::~BoundCheckPointPtrArray() {

	cout << "[]arr �Ҹ��� ȣ���" << endl;
	delete[]arr;

}*/