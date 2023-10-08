#include <iostream>
#include <stack>
using namespace std;

int main(void) {

	stack<int> st; //stack 컨테이너 생성

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl; //top 데이터 출력
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty()) //스택이 비었는지 확인
		cout << "stack에 데이터 없음" << endl;

	return 0;

}