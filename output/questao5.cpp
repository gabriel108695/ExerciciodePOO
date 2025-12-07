#include <iostream>

int main(){
    int valores[5];
    int soma = 0;
    double media = 0;

    for (int i = 0; i < 5; i++){
        std::cout << "Digite o " << i + 1 << " numero" << std::endl;
        std::cin >> valores[i];
        soma = soma += valores[i];
        media = soma/5;
    }

    std::cout << "A soma dos numeros e: " << soma << std::endl;
    std::cout << "A medía dos numeros e: " << media << std::endl;
}