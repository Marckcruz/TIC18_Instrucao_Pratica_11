#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        cerr << "Erro: Vetor vazio ou tamanho zero." << endl;
        return;
    }

    maximo = vetor[0]; 
    minimo = vetor[0]; 

    for (int i = 1; i < n; ++i) {
        if (vetor[i] > maximo) {
            maximo = vetor[i]; 
        } else if (vetor[i] < minimo) {
            minimo = vetor[i]; 
        }
    }
}

int main() {
    int vetor[] = {5, 12, 3, 8, 1, 15, 7, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int max, min;

    maxmin(vetor, tamanho, max, min);

    cout << "Máximo: " << max << endl;
    cout << "Mínimo: " << min << endl;
    cout << "" << endl;
    
    return 0;
}
