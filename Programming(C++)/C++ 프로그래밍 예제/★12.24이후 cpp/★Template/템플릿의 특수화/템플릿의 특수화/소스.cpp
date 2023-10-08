#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {

	return a > b ? a : b;

}

template<>
char* Max<char*>(char* a, char* b) { //char*형 함수에 대해서는 직접 정의할테니, 별도로 템플릿을 찍어내지말고 이것을 사용하라! <특수화>
	//가급적이면 자료형 정보를 명시하는 것이 뜻을 명확히 하는 방법이 된다.

	cout << "char* 형 템플릿함수 직접정의 " << endl;

	return strlen(a) > strlen(b) ? a : b;

}

template<> //템플릿의 특수화

const char* Max<const char*>(const char* a, const char* b) { //const char*형에 대해서는 직접 정의할테니, 별도로 템플릿을 찍어내지말고 이것을 사용하라! <특수화>
	//가급적이면 자료형 정보를 명시 하는 것이 뜻을 명확히 하는 방법이 된다.

	cout << "const char* 형 템플릿 함수 직접정의" << endl;

	return strcmp(a, b) > 0 ? a : b;

}

int main(void) {

	cout << Max(11, 15) << endl;
	cout << Max("simple", "best") << endl; //문자열 상수

	char str1[] = "simple"; //문자열 변수
	char str2[] = "best"; //문자열 변수

	cout << Max(str1, str2) << endl;

	return 0;



}