#include <iostream>
#include <string>

using namespace std;

int* encontra_letra(const string& texto, char letra, int& tamanho);

int main() {
    string texto = "programming";
    char letra = 'g';
    int tamanho = 0;

    int* indices = encontra_letra(texto, letra, tamanho);

    cout << "Letra '" << letra << "' encontrada nas posições: ";
    for (int i = 0; i < tamanho; i++) {
        cout << indices[i] << " ";
    }

    cout << "" << endl;
    
    cout << endl;

    delete[] indices;

    return 0;
}

int* encontra_letra(const string& texto, char letra, int& tamanho) {
    int* indices = nullptr;
    tamanho = 0;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {

            int* novoIndices = new int[tamanho + 1];

            for (int j = 0; j < tamanho; j++) {
                novoIndices[j] = indices[j];
            }

            novoIndices[tamanho] = i;

            delete[] indices;

            indices = novoIndices;
            tamanho++;
        }
    }

    return indices;
}
