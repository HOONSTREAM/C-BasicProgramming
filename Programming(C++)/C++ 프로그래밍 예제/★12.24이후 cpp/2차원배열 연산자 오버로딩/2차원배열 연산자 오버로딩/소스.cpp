#include <iostream>
#include <cstdlib> //exit 함수 실행중 에러로 인한 강제종료는 ,exit(1) 로 해준다. exit(0)은 return 0 과 같은의미 (정상종료)
using namespace std;

class BoundCheckArray {

private:
    int* arr; // 주소값을 받는 포인터
    int arrlen; //배열의 길이
    /*배열은 저장소 그 자체에 의미를 두어, 저장소 통째의 복사와 대입은 원천적으로 차단함에 있어 프라이빗에 복사생성자와 대입연산자 선언*/
    BoundCheckArray(BoundCheckArray& copy) {}
    BoundCheckArray& operator=(const BoundCheckArray& arr) {}

public:

    BoundCheckArray(int len) :arrlen(len) {

        arr = new int[len]; // 힙에다가 배열을 할당하고, arr에 그 배열의 주소값을 받는다.

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

    BoundCheckIntArrayPtr* arr; //저장의 대상이 BoundCheckArray 객체의 주소값
    int arrlen;
    BoundCheck2DArray(const BoundCheck2DArray& copy) {}
    BoundCheck2DArray& operator=(const BoundCheck2DArray& ref) {}

public :
    /*편의상 1차원 배열 클래스를 Array, 2차원은 Array2D로 보면
     Array2D에는 Array의 배열을 포함해야 합니다.
     1차원 배열은 여러 숫자를 보관하는 곳이고, 2차원 배열은 1차원 배열을 보관하는 곳이니까요

     그래서 Array2D의 멤버데이터에 Array의 배열을 보관해야 하는데, 이를위해 Array **arr를 선언해 놓은 것 입니다. 
     사실 Array *arr만 해도 구현은 가능할 것 같은데 왜 이렇게 하는지는 잘 모르겠네요*/

    /*따라서 **arr은 *(*arr)이라고 보면, 먼저 *arr을 보관할 저장소인 ArrayPtr[col]을 먼저 힙에 할당하고, 
    각 ArrayPtr마다 Array(row)를 다시 할당해 주는겁니다*/

    BoundCheck2DArray(int col, int row) : arrlen(col) {

        arr = new BoundCheckIntArrayPtr[col]; //1차원 배열을 보관하는 곳 (렬) (arr[i])의 주소값
        for (int i = 0; i < col; i++)
            arr[i] = new BoundCheckArray(row); //1차원 배열 생성 (행) (주소값)
    }      //3열인경우 arr[0] arr[1] arr[2] 

    BoundCheckArray& operator[](int idx) {

        if (idx < 0 || idx >= arrlen) {

            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return *arr[idx];
    }

    ~BoundCheck2DArray() {

        for (int i = 0; i < arrlen; i++)
            delete arr[i]; //1차원배열 
        delete[]arr; //1차원배열을 저장하는 곳
        
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
