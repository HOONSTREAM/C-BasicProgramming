#include <iostream>

int main(void){
char name[100];
char number[100];

std::cout << "아이디 :  ";
std::cin >> name;

std::cout << "비밀번호 :  ";
std::cin >> number;


std::cout << "아이디 :   " << name;
std::cout << " 비밀번호 : " << number << std::endl;

std::cout << " 확인완료, 로그인";






return 0;

}