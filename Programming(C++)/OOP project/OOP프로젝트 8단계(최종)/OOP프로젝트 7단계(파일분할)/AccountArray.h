#pragma once
#include "BankingCommonDec1.h"
#include "AccountData.h"


typedef AccountData* Account_PTR; 

class BoundCheckPointPtrArray {

private :
	
	Account_PTR* arr; //AccountData ��ü�� �ּҸ� ������ ������ arr ����
	int arrlen;
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& ref) {}
	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& copy) {}
public :
	BoundCheckPointPtrArray(int len=100); // Ȯ���ؾ��� �ڵ�
	Account_PTR& operator[] (int idx);
    Account_PTR operator[] (int idx) const;
	int GetArrLen() const;
	//~BoundCheckPointPtrArray();



};