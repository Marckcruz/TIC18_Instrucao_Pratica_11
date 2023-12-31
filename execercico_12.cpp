#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    unordered_set<char> conjuntoA(A.begin(), A.end()); 
    string resultado = "";

    for (char c : B) {
        if (conjuntoA.count(c) > 0) {
            resultado += c; 
        }
    }

    return resultado;
}

int main() {
    string A = "abcdef";
    string B = "bcdegh";

    string C = caracteresComuns(A, B);

    cout << "Caracteres comuns em A e B: " << C << endl;
    cout << "" << endl;
    

    return 0;
}
