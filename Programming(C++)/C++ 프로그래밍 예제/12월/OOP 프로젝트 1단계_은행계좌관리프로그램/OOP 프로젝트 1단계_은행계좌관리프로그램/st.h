#pragma once

typedef struct
{
	int accID; // ���¹�ȣ
	int balance; //�ܾ�
	char cusName[NAME_LEN]; // �� �̸�

}Account;

Account accArr[100]; // Account ���� �迭
int accnum = 0; // ����� Account ��

