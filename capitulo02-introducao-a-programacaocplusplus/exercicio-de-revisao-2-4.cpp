#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    // 2.4 Escreva uma instrução (ou comentário) para realizar cada uma das seguintes sentenças  (assuma que as declarações using foram utili-zadas):

    //a) Determine se um programa calcula o produto de três inteiros."
    
    //b) Declare as variáveis x, y, z e result como tipo int (em instruções eparadas).
    int x;
    int y;
    int z;
    int result;

    //c) Peça ao usuário inserir três inteiros
    cout << "Enter three integers: \n";
    
    //d) Leia três inteiros
    cin >> x >> y >> z;
    
    //e) Compute o produto dos três inteiros
    result = x * y * z;
    
    //f) Imprima “The product is: “ seguido pelo valor da variável result.
    cout << "The product is " << result << "\n";
    
    // Retorne um valor de "main" para indicar que o programa terminou com sucesso

    return 0;
    
}