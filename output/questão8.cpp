#include <iostream>
#include <string>
using namespace std;

int main(){
    string nomes[6];

    for(int i = 0; i < 6; i++){
        cout << "Digite o " << i + 1 << " nome: " << endl;
        cin >> nomes[i];
    }

    string buscar;
    cout << "Digite o nome que você deseja verificar no vetor: " << endl;
    cin >> buscar;

    for (int i = 0; i < 6; i++){
        if (nomes[i] == buscar){
            cout << "Nome informado existe no vetor!" << endl;
        }else{
            cout << "Nome informado não existente no vetor!" << endl;
        }

        return 0;

    }

    
}