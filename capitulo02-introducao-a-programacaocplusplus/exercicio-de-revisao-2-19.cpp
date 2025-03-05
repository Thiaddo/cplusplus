#include <iostream>

int main(){

    int a;
    int b;
    int c;
    int d;

    std::cout << "Entre com três valores inteiros: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout <<"Soma: " << a + b + c << std::endl;
    std::cout <<"Média: " << (a + b + c) / 3 << std::endl;
    std::cout <<"Produto: " << a * b * c << std::endl;
    
    if((a > b) && (a > c) && (b > c))
    {
        std::cout << "O menor: " << c << std::endl;
        std::cout << "O maior: " << a << std::endl;
    }
    
    else if ((a > b) && (a > c) && (b < c))
    {
        std::cout << "O menor: " << b << std::endl;
        std::cout << "O maior: " << a << std::endl;
    }
    else if ((b > a) && (b > c) && (c > a))
    {
        std::cout << "O menor: " << a << std::endl;
        std::cout << "O maior: " << b << std::endl;
    }
    else if ((b > a) && (b > c) && (c < a))
    {
        std::cout << "O menor: " << c << std::endl;
        std::cout << "O maior: " << b << std::endl;
    }
    else if ((c > b) && (c > a) && (b > a))
    {
        std::cout << "O menor: " << a << std::endl;
        std::cout << "O maior: " << c << std::endl;
    }
    else
    {
        std::cout << "O menor: " << b << std::endl;
        std::cout << "O maior: " << c << std::endl;
    }  
}