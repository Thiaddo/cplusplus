// Figura 2.13: fig02_13.cpp
// Comparando inteiros utilizando instruções if, operadores relacionais
// e operadores de igualdade.
#include <iostream> // permite ao programa realizar entrada e saída

using std::cout;
using std::cin;
using std::endl;

// a função main inicia a execução do programa

int main(){

    int number1;
    int number2;

    cout << "Enter two integers to compare: \n"; // solicita dados ao usuário
    cin >> number1 >> number2; // lê dois inteiros fornecidos pelo usuário

    if(number1 == number2)      
        cout << number1 << " == " << number2 << endl;    

    if(number1 != number2)
        cout << number1 << " != " << number2 << endl;
    
    if(number1 < number2)
        cout << number1 << " < " << number2 << endl;    

    if(number1 > number2)
        cout << number1 << " > " << number2 << endl;    

    if(number1 <= number2)
        cout << number1 << " <= " << number2 << endl;    

    if(number1 >= number2)
        cout << number1 << " >= " << number2 << endl;    
}