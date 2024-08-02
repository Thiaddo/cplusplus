// Figura 2.1: fig02_05.cpp
// Programa de adição que exibe a soma de dois números.
#include <iostream> // permite que o programa gere saída de dados na tela

// a função main inicia com a execução do programa
int main()
{
    int number1; // primeiro inteiro a adicionar
    int number2; // segundo inteiro a adicionar
    int sum;     // soma de number1 e number2 

    std::cout <<"Enter first integer: "; // solicita dados ao usuário
    std::cin >> number1;                  // lê primeiro inteiro inserido pelo usuário em number1

    std::cout <<"Enter second integer: "; // solicita dados ao usuário
    std::cin >> number2;                   // lê segundo inteiro inserido pelo usuário em number2

    sum = number1 + number2; // adiciona os números; armazena o resultado em sum

    std::cout << "Sums is " << sum << std::endl; 

    return 0; // indica que o programa terminou com sucesso
} // fim da função

