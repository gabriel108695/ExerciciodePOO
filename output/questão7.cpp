#include <iostream>

int main() {
    int vetor[10];
    int x;

    std::cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

   
    std::cout << "\nDigite o numero X: ";
    std::cin >> x;

    
    bool encontrado = false;
    int posicao = -1;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            encontrado = true;
            posicao = i; 
            break;       
        }
    }

    if (encontrado) {
        std::cout << "O numero " << x << " esta no vetor.\n";
        std::cout << "Ele aparece pela primeira vez na posicao " << posicao << ".\n";
    } else {
        std::cout << "O numero " << x << " nao esta no vetor.\n";
    }

    return 0;
}