#include <iostream>

int main() {
    int vetor[8];
    int maiorn, menorn;

    for (int i = 0; i < 8; i++){
        std::cout << "Digite o " << i + 1 << " º numero: " << std::endl;
        std::cin >> vetor[i];
    }

    maiorn = menorn = vetor[0];

    for (int i = 1; i < 8; i++){
        if (vetor[i] > maiorn){
            maiorn = vetor[i];
        }

        if (vetor[i] < menorn){
            menorn = vetor[i];
        }

    std::cout << "Maior numero e: " << maiorn << std::endl;
    std::cout << "Menor numero e: " << menorn << std::endl;

    return 0;

    }
}


