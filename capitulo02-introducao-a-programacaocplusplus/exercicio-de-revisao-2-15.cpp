#include <iostream>

int main(){

// 2.15Declare a ordem de avaliação dos operadores em cada uma das seguintes instruções C++ e mostre o valor de x depois que cada instrução é realizada.

int x; // declarando a variavel x

// a) x = 7 + 3 * 6 / 2 – 1;

x = 7 + 3 * 6 / 2 -1;

std::cout << "a) x = 7 + 3 * 6 / 2 - 1" << std::endl; 
std::cout << x << std::endl;

// b) x = 2 % 2 + 2 * 2 – 2 / 2;

x = 2 % 2 + 2 * -2 / 2;
std::cout << "b) x = 2 % 2 + 2 * 2 - 2 / 2;"<< std::endl;
std::cout << x << std::endl;

// c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );
x = (3 * 9 / (9 * 3 / (3)));

std::cout << "c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );" << std::endl;
std::cout << x << std::endl;    

}