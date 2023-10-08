//참조 : https://see-ro-e.tistory.com/29
/*변수 studentNumber가 아닌 상수값이 들어가야한다고 나온다.
즉 상수값을 넣어야 배열 만들어지고
프로그램에서 미리 사이즈를 정해두어야 한다는 것이다.
따라서 학생수를 입력받아 그 크기만큼 배열을 만드는 것은 지금까지로는 불가능하다.
이유는 해당 변수가 만들어지는 과정이 "정적" 이기 때문이다
지금까지 만든 변수들은 전부 정적 변수이며 컴파일때 타입과 크기가 결정되고 생성된다.
정적인 배열은 크기가 컴파일 시간에 만들어지기떄문에 프로그램 실행중(런타임) 중에는 입력받는 값으로 설정이 불가능하다.
즉, 스택영역(정적) 영역이 아닌 new 연산자를 사용하여 힙(동적)영역에 할당한다.

<Type>*ptr = new <Type> heap영역에 <Type>변수를 선언하고 해당 메모리 주소값은 반환.*/
// -> 멤버십 연산자
/*포인터가 32비트 주소로 4바이트라는 것을 생각하면 좀더 이해가 쉽습니다. 주소를 저장한다는 개념을 갖추면 메모리에 대한 강력한 제어를 할 수 있습니다.*/

#include <iostream>
using namespace std;
#pragma warning (disable : 4996)

typedef struct __person {
	
	char name[30];
	int age;
	char gender;

}person;

int main(void) {


	//1 . 구조체 동적 할당

	person* ptr = new person;

	strcpy(ptr->name, "이승훈");
	ptr->age = 17;
	(*ptr).gender = 'M';

	cout << "name : " << (*ptr).name << endl;
	


	delete ptr;


	return 0;


}


