#pragma once
#include "BankingCommonDec1.h"
#include "AccountData.h"


typedef AccountData* Account_PTR; 

class BoundCheckPointPtrArray {

private :
	
	Account_PTR* arr; //AccountData 객체의 주소를 저장할 포인터 arr 생성
	int arrlen;
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& ref) {}
	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& copy) {}
public :
	BoundCheckPointPtrArray(int len=100); // 확인해야할 코드
	Account_PTR& operator[] (int idx);
    Account_PTR operator[] (int idx) const;
	int GetArrLen() const;
	//~BoundCheckPointPtrArray();



};