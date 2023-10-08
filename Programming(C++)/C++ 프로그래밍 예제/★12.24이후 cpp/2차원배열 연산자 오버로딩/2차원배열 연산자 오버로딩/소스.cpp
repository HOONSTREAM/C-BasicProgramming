#include <iostream>
#include <cstdlib> //exit �Լ� ������ ������ ���� ��������� ,exit(1) �� ���ش�. exit(0)�� return 0 �� �����ǹ� (��������)
using namespace std;

class BoundCheckArray {

private:
    int* arr; // �ּҰ��� �޴� ������
    int arrlen; //�迭�� ����
    /*�迭�� ����� �� ��ü�� �ǹ̸� �ξ�, ����� ��°�� ����� ������ ��õ������ �����Կ� �־� �����̺��� ��������ڿ� ���Կ����� ����*/
    BoundCheckArray(BoundCheckArray& copy) {}
    BoundCheckArray& operator=(const BoundCheckArray& arr) {}

public:

    BoundCheckArray(int len) :arrlen(len) {

        arr = new int[len]; // �����ٰ� �迭�� �Ҵ��ϰ�, arr�� �� �迭�� �ּҰ��� �޴´�.

    }

    int& operator[](int idx) {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }

    int GetArrlen() const { return arrlen; }

    ~BoundCheckArray() { delete[]arr; }

    int operator[](int idx) const {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
};

typedef BoundCheckArray* BoundCheckIntArrayPtr;


class BoundCheck2DArray {

private :

    BoundCheckIntArrayPtr* arr; //������ ����� BoundCheckArray ��ü�� �ּҰ�
    int arrlen;
    BoundCheck2DArray(const BoundCheck2DArray& copy) {}
    BoundCheck2DArray& operator=(const BoundCheck2DArray& ref) {}

public :
    /*���ǻ� 1���� �迭 Ŭ������ Array, 2������ Array2D�� ����
     Array2D���� Array�� �迭�� �����ؾ� �մϴ�.
     1���� �迭�� ���� ���ڸ� �����ϴ� ���̰�, 2���� �迭�� 1���� �迭�� �����ϴ� ���̴ϱ��

     �׷��� Array2D�� ��������Ϳ� Array�� �迭�� �����ؾ� �ϴµ�, �̸����� Array **arr�� ������ ���� �� �Դϴ�. 
     ��� Array *arr�� �ص� ������ ������ �� ������ �� �̷��� �ϴ����� �� �𸣰ڳ׿�*/

    /*���� **arr�� *(*arr)�̶�� ����, ���� *arr�� ������ ������� ArrayPtr[col]�� ���� ���� �Ҵ��ϰ�, 
    �� ArrayPtr���� Array(row)�� �ٽ� �Ҵ��� �ִ°̴ϴ�*/

    BoundCheck2DArray(int col, int row) : arrlen(col) {

        arr = new BoundCheckIntArrayPtr[col]; //1���� �迭�� �����ϴ� �� (��) (arr[i])�� �ּҰ�
        for (int i = 0; i < col; i++)
            arr[i] = new BoundCheckArray(row); //1���� �迭 ���� (��) (�ּҰ�)
    }      //3���ΰ�� arr[0] arr[1] arr[2] 

    BoundCheckArray& operator[](int idx) {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return *arr[idx];
    }

    ~BoundCheck2DArray() {

        for (int i = 0; i < arrlen; i++)
            delete arr[i]; //1�����迭 
        delete[]arr; //1�����迭�� �����ϴ� ��
        
    }
   
};

int main(void) {


    BoundCheck2DArray arr2D(3, 4);

    for (int n = 0; n < 3; n++)
        for (int m = 0; m < 4; m++)
            arr2D[n][m] = n + m;

    for (int n = 0; n < 3; n++) {

        for (int m = 0; m < 4; m++)
            cout << arr2D[n][m] << " ";
        cout << endl;

    }

    return 0;

}
