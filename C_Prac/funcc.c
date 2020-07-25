#include <stdio.h>

int print_hello() {
    printf("Helllo!! \n");
    return 0;
}

int main(){
    printf("함수를 돌려보자");
    print_hello();

    printf("또불러");
    print_hello();
    return 0;
}