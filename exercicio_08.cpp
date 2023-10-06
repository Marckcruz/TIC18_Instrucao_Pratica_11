#include <iostream>
#include <cmath>

using namespace std;

int conta_primos(int *vet, int qtde);

bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }

    int limite = sqrt(num);
    for (int i = 3; i <= limite; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    int quantidadePrimos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << quantidadePrimos << endl;
    cout << "" << endl;
    
    return 0;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;
    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }
    return contador;
}
