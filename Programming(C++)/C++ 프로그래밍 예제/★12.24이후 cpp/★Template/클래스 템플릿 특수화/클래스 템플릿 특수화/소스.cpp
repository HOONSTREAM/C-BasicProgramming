#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

template<class T>
class Point {

private :
	T xpos, ypos;
public :
	Point(T x = 0, T y = 0) :xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

template<class T>
class SimpleDataWrapper {

private :
	T mdata;
public :
	SimpleDataWrapper(T data) :mdata(data) {}
	void ShowDataInfo() {

		cout << "Data : " << mdata << endl;
	}
};

template<>
class SimpleDataWrapper<const char*> {

private :
	char* mdata;
	
public :

	SimpleDataWrapper(const char* data) {

		mdata = new char[strlen(data) + 1];
		strcpy(mdata, data);

	}
	void ShowDataInfo() {

		cout << "string : " << mdata << endl;
		cout << "Length : " << strlen(mdata) << endl;
	}
	~SimpleDataWrapper() {
		delete[]mdata;

	}

};

template <>
class SimpleDataWrapper<Point<int>> {

private :
	Point<int> mdata;
public :
	SimpleDataWrapper(int x, int y) :mdata(x, y) {}
	void ShowDataInfo() {

		mdata.ShowPosition();

	}
};

int main(void) {

	SimpleDataWrapper<int> iwrap(30);
	iwrap.ShowDataInfo();

	SimpleDataWrapper<Point<int>> iiwrap(3, 4);
	iiwrap.ShowDataInfo();

	SimpleDataWrapper<const char*> iiiwrap("class simple");
	iiiwrap.ShowDataInfo();


	return 0;

}