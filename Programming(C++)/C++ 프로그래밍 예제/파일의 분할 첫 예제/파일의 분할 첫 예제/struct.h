#ifndef STRUCT // STRUCT가  #define에 의해서 정의되어 있지않으면
#include <iostream>

using namespace std;

struct MyStruct
{

	string name;
	int age;

};

void display(MyStruct&);


/*파일을 분할하게 되면은 획기적으로 재사용성이 늘어나게된다. 수정과 관리가 용이하다. */
/*헤더파일을 여러파일에 포함시킬 때에 반드시 단 한번만 포함시켜야 한다.*/

#endif //여기까지 실행
// 헤더파일을 여러파일에 포함시킬 때에 반드시 단 한번만 포함시키기 위해 사용하는 기법 