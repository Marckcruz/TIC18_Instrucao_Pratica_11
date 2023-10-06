#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);
    int multiplicador = 2;

    multiplica_por_n(vetor, qtde, multiplicador);

    cout << "Vetor após a multiplicação por " << multiplicador << ": ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << "" << endl;
    cout << endl;

    return 0;
}
void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n; 
    }
}


