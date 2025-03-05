#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
     
    int aux;
    int minor;
    int major;

    cout << "Digite cinco números inteiros" << endl;
    
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if(num1 > num2){
       aux = num2;
       num2 = num1;
       num1 = aux;
    }
    if(num1 > num3){
        aux = num3;
       num3 = num1;
       num1 = aux;
    }
    if(num1 > num4){
        aux = num4;
       num4 = num1;
       num1 = aux;
    }
    if(num1 > num5){
        aux = num5;
       num5 = num1;
       num1 = aux;
    }
    if(num2 < num1){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    if(num2 > num4){
        aux = num2;
        num2 = num4;
        num4 = aux;
    }
    if(num2 > num5){
        aux = num2;
        num2 = num5;
        num5 = aux;
    }
    if(num3 < num1){
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if(num3 < num2){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    if(num3 > num4){
        aux = num3;
        num3 = num4;
        num4 = aux;
    }
    if(num3 > num5){
        aux = num3;
        num3 = num5;
        num5 = aux;
    }
    if(num4 < num1){
        aux = num1;
        num1 = num4;
        num4 = aux;
    }
    if(num4 < num2){
        aux = num2;
        num2 = num4;
        num4 = aux;
    }
    if(num4 < num3){
        aux = num3;
        num3 = num4;
        num4 = aux;
    }
    if(num4 > num5){
        aux = num4;
        num4 = num5;
        num5 = aux;
    }
    system("clear");
    cout << "O menor número digitado é " << num1 << "\nO maior número digitado é " << num5 << "\n\n";
    return 0;
    // cout << num1 << " - "<< num2 << " - " << num3 << " - " << num4 << " - " << num5 << endl;
    
}
 