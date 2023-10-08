#include <iostream>
#include <set>
using namespace std;

int main() {

	multiset<int> ms;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	ms.insert(10);

	auto iter = ms.begin();

	for (auto& elem : ms)
		cout << elem << " ";
	cout << endl;

	pair < multiset<int>::iterator, multiset<int>::iterator> iter_pair;
	iter_pair = ms.equal_range(30);

	
		cout << *iter_pair.first << " " << *iter_pair.second << " ";


	cout << endl;

	return 0;

}
