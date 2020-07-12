#include <iostream>

int function(){
    int a = 5;
    return a;

}

int main() {
    // int b = 2;
    // int c = function(b);
    // return 0;
    // Test commit
    
    const int& c = function();
    std::cout << "Hello world" << std::endl;
    // Please
    return 0;
}