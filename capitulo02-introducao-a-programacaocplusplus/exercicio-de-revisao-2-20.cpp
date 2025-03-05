#include<iostream>
#include <cmath>
#include <cstring>
#include <iostream>

int main(){

    const float pi = 3.14;
    
    int raio;
    int diametro;
    int circunferencia; //ok
    int area;
        
    std::cout << "Informe o Raio do circulo para saber o diâmetro: " << std::endl;
    std::cin >> raio;
    diametro = 2 * raio;
    std::cout << "O Diâmetro é igual a: " << diametro << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "Informe o Diâmetro do circulo para saber o raio: " << std::endl;
    std::cin >> diametro;
    raio = diametro / 2;
    std::cout << "O Raio do circulo é igual a: " << raio << std::endl;

    std::cout << "A Circunferência do circulo é igual a: " << (2 * raio) * pi << std::endl;
    area = pi * pow(raio, 2);
    std::cout << "A Área do Circulo é igual a: " << area << std::endl;
}