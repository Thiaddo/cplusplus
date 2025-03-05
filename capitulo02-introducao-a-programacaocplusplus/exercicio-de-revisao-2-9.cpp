#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){   

 // Escreva uma única instrução C++ ou linha que realize cada uma das seguintes tarefas

//a) Imprima a mensagem “Entre com dois números”.
cout << "Entre com dois números: ";

//b) Atribua o produto de variáveis b e c para a variável a.
int a;
int b;
int c;
cin >> b >> c;
a = b * c;
cout << "a: " << a;

//c) Declare que um programa realiza um cálculo de folha de pagamento (isto é, utilize texto que ajuda a documentar um programa).

//d) Insira três valores de inteiro a partir do teclado nas variáveis de inteiro a, b e c.

cout << "Enter three integers: \n";
cin >> a >> b >> c;
cout << "\n";
cout << a << b << c;


}