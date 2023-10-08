#include <iostream>
using namespace std;

//클래스 Data를 흉내낸 영역

typedef struct Data {

	int data;
	void (*showData)(Data*);
	void (*Add)(Data* ,int);

}Data;

void showData(Data* THIS) { cout << "Data :" << THIS->data << endl; }
void Add(Data* THIS, int num) { THIS->data += num; }

// main 함수

int main(void) {

	Data obj1 = { 15, showData,Add };
	Data obj2 = { 7, showData, Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.showData(&obj1);
	obj2.showData(&obj2);

	return 0;

};
