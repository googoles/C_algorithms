#include <stdio.h>

int main(){
    // int a;
    // a = 2;

    // printf(" %p \n", &a);

    // return 0;

    int *p;
    int a;
    p = &a;
    // * 의 역할 포인터라는 변수를 선언하는 역할
    // & 변수의 주소값을 나타내는 연산자
    // ** 이중포인터 -> 포인터의 주소만을 가리킨다.
    printf("포인터 p 에 들어 있는 값 : %p \n", p);
  printf("int 변수 a 가 저장된 주소 : %p \n", &a);

  return 0;
}