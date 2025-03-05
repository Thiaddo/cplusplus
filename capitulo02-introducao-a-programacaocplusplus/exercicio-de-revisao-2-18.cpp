#include <iostream>

int main(){

    int a;
    int b;

    std::cout << "Digite dois números inteiros: " << std::endl;
    std::cin >> a >> b;

    if (a > b)
        std::cout << a << " é maior do que " << b << std::endl;   
    
    else if (a < b)
             std::cout << b << " é maior do que " << a << std::endl;
        else
              std::cout << "Os números digitados são iguais" << std::endl;       
}