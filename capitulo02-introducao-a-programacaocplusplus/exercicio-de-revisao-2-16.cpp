#include <iostream>

int main(){
    
// 2.16-Escreva um programa que solicita ao usuário inserir dois números, 
//      obtém os dois números do usuário e imprime a soma, produto, diferença
//      e quociente dos dois números.

int a;
int b;
int c;

std::cout <<"Enter two integers \n\n";
std::cin >> a >> b;
std::cout << "\nR:";
c = a + b;
std::cout <<"A soma dos valores " <<  a << " e " << b << " é igual a " << c << "\n\n";
std::cout <<"O Produtos dos valores " << a << " e " << b << " é igual a " << a * b << "\n\n";
std::cout <<"A diferença entre os valores " << a << " e " << b << " é igual a " << a - b << "\n\n";
std::cout <<"O quociente entre os valores " << a << " e " << b << " é igual a " << a / b << "\n\n";

}