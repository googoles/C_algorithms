#include <iostream>

int function(){
    int a = 5;
    return a;

}

int main() {
    // int b = 2;
    // int c = function(b);
    // return 0;
    const int& c = function();
    std::cout << "c: " << c << std::endl;
    std::cout << "Hello world" << std::endl;
    return 0;
}