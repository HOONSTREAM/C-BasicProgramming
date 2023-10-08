#include "AccountArray.h"
#include "BankingCommonDec1.h"


BoundCheckPointPtrArray::BoundCheckPointPtrArray(int len) : arrlen(len) {

	arr = new Account_PTR[len]; //AccountData 객체의 주소의 주소값을 힙에다 생성한다.
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

	cout << "[]arr 소멸자 호출됨" << endl;
	delete[]arr;

}*/