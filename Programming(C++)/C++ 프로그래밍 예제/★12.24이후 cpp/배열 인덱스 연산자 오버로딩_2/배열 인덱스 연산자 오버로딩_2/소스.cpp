#include <iostream>
#include <cstdlib> //exit �Լ� ������ ������ ���� ��������� ,exit(1) �� ���ش�. exit(0)�� return 0 �� �����ǹ� (��������)
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
