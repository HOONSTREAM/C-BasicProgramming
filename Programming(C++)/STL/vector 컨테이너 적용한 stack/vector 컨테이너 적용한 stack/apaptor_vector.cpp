//어댑터 컨테이너로 vector를 적용한 stack 컨테이너
// 모든 표준시퀀스컨테이너는 empty,size,push_back,pop_back,back 인터페이스를 가지므로 
// stack 컨테이너 어댑터의 컨테이너로 사용할 수 있다.

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {

	stack<int, vector<int>> st; //vector 컨테이너를 어댑터 컨테이너로 이요하여 stack 생성

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