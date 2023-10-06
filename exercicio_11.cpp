#include <iostream>
#include <string>

using namespace std;

string codificar(const string& texto) {
    string textoCodificado = texto;

    for (char& c : textoCodificado) {
        if (isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
    }

    return textoCodificado;
}

string decodificar(const string& texto) {
    string textoDecodificado = texto;

    for (char& c : textoDecodificado) {
        if (isalpha(c)) {
            if (c == 'a') {
                c = 'z';
            } else if (c == 'A') {
                c = 'Z';
            } else {
                c--;
            }
        }
    }

    return textoDecodificado;
}

int main() {
    string textoOriginal = "Estruturas de Dados";
    string textoCodificado = codificar(textoOriginal);
    string textoDecodificado = decodificar(textoCodificado);

    cout << "Texto Original: " << textoOriginal << endl;
    cout << "Texto Codificado: " << textoCodificado << endl;
    cout << "Texto Decodificado: " << textoDecodificado << endl;
    cout << "" << endl;

    return 0;
}
