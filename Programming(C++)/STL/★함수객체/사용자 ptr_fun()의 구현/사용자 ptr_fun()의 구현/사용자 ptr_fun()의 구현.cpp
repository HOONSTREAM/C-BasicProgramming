#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

template<class RType, class AType>
class Ptr_fun_class : public unary_function<AType, RType> {

private:
	RType(*pf)(AType);

public:
	Ptr_fun_class(RType(*_pf)(AType)) : pf(_pf) {}
	RType operator() (AType n) const {

		return pf(n);
	}
};

template<class RType, class AType> 
Ptr_fun_class<RType, AType> Ptr_fun(RType(*pf)(AType)) {

	return Ptr_fun_class<RType, AType>(pf);
}

bool Pred(int n) {

	return 30 <= n && n <= 40;
}

int main(void) {

	vector<int> v = { 10,20,30,40,50 };

	cout << "v : ";
	for (auto& elem : v)
		cout << elem << " ";
	cout << endl;

	cout << count_if(v.begin(), v.end(), not1((Ptr_fun(Pred)))) << endl;



	return 0;

}
