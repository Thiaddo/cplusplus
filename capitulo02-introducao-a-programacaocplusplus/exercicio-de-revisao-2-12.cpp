// Exercicio de Revisão 2.12 //

#include <iostream>

int main(){

    int x = 2;
    int y = 3;
    int z;

    std::cout << "\n\n";


    std::cout << "2.12 - O que é impresso, se algo for, quando cada uma das seguintes instruções C++ é executada? Se nada for impresso, então responda “nada”.\n\n";
    std::cout << "Assuma x = e y = 3\n\n";


    std::cout << "a) cout << x\n   R: ";
    std::cout << x;
    std::cout << "\n\n";
    
    std::cout << "b) cout << x + x\n   R: ";
    std::cout << x + x;
    std::cout << "\n\n";

    std::cout << "c) cout << “x=”\n   R: ";
    std::cout << "x=";
    std::cout << "\n\n";

    std::cout << "d) cout << “x=”\n   R: ";
    std::cout << x + y << " = " << y + x;
    std::cout << "\n\n";

    std::cout << "e) cout << x + y << “ = “ << y + x;\n   R: ";
    std::cout << x + y << " = " << y + x;
    std::cout << "\n\n";

    std::cout << "f) z = x + y;\n   R: ";
    z = x + y;
    std::cout << z;
    std::cout << "\n\n";

    std::cout << "g) cin >> x >> y;\n   R: ";
    std::cin >> x >> y;
    std::cout << y;
    std::cout << "\n\n";

    std::cout << "h) // cout << x + y =  << x + y;\n";

    std::cout << "i) \\n n";
    
      
}