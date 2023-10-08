#include <iostream>
#include <stack>
using namespace std;

int main(void) {

	stack<int> st; //LIFO (Last in First Out)

	st.push(10);
	st.push(20);
	st.push(30);

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();

	}

	return 0;

}