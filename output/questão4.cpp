#include <iostream>

int main(){
    int valores[5];

    for (int i = 0; i < 5; i++){
        std::cout << "Digite o " << i + 1 << " numero" << std::endl;
        std::cin >> valores[i];
    }
   

    std::cout << "Os valores sao:" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << valores[i]<< ',';
    }
}