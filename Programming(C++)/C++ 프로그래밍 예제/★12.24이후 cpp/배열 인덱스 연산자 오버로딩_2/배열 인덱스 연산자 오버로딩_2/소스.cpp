#include <iostream>
#include <cstdlib> //exit 함수 실행중 에러로 인한 강제종료는 ,exit(1) 로 해준다. exit(0)은 return 0 과 같은의미 (정상종료)
using namespace std;

class BoundCheckArray {

private :
    int* arr;
    int arrlen;
    BoundCheckArray(BoundCheckArray& copy) {}
    BoundCheckArray& operator=(const BoundCheckArray& arr) {}

public :

    BoundCheckArray(int len) :arrlen(len) {

        arr = new int[len];

    }

    int& operator[](int idx) {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
       }
        return arr[idx];
    }

    int GetArrlen() const { return arrlen;}
    ~BoundCheckArray() { delete[]arr; }

    int operator[](int idx) const  {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
};

void ShowData(const BoundCheckArray& ref) {

    int len = ref.GetArrlen();
    for (int idx = 0; idx < len; idx++) {
        cout << ref[idx] << endl;
    }
}
    int main(void) {

        BoundCheckArray arr(5);
        for (int i = 0; i < 5; i++)

            arr[i] = (i + 1) * 11;

            ShowData(arr);
        
            return 0;

        
    }
