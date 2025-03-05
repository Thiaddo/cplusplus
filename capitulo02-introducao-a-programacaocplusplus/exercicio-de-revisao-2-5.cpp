// Calcula o produto de três inteiros
#include <iostream> // permite ao programa realizar entrada e saída

using std::cout; // o programa utiliza cout
using std::cin;  // o programa utiliza cin
using std::endl; // o programa utiliza endl

int main(){

    int x;      // primeiro inteiro a multiplicar 
    int y;      // segundo inteiro a multiplicar 
    int z;      // terceiro inteiro a multiplicar
    int result; // o produto dos três inteiros

    cout << "Enter three integers: "; // Solicita dados ao usuário
    cin >> x >> y >> z; // lê três inteiros de usuário
    result = x * y * z;
    cout << "The product is " << result << endl; // imprime resultado; termina a linha

    return 0; // indica que o programa executou com sucesso
} // fim da função main