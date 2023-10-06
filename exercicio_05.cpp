#include <iostream>

using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento) {
    if (qtde < 0) {
        cout << "Tamanho inválido." << endl;
        return qtde;
    }

    qtde++;

    for (int i = qtde - 1; i > qtde / 2; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[qtde / 2] = elemento;

    return qtde;
}

int main() {
    int vetor[100]; 
    int qtde = 6;   
    int elemento = 100;

    for (int i = 0; i < qtde; i++) {
        vetor[i] = i + 1;
    }

    int novoTamanho = insere_meio(vetor, qtde, elemento);

    cout << "Novo tamanho do vetor: " << novoTamanho << endl;
    cout << "Vetor atualizado: ";

    
    for (int i = 0; i < novoTamanho; i++) {
        cout << vetor[i] << " ";
        
    }
    cout << "" << endl;
    cout << endl;
    
    return 0;
}
