#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v1(5); // 0으로 초기화 된 size가 5인 컨테이너
	v1.push_back(10); // 0에 이어 10 추가
	v1.push_back(20);// 10에 이어 20 추가
	v1.push_back(30);// 20에 이어 30추가
	v1.push_back(40);
	v1.push_back(50);

	
	v1.pop_back();



	return 0;

}