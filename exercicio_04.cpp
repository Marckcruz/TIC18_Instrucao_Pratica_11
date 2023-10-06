#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main() {
    int X, Y;

    cout << "Digite o valor de X: ";
    cin >> X;

    cout << "Digite o valor de Y: ";
    cin >> Y;

    calcula(X, Y);
    
    cout<< "" << endl;

    cout << "Após a chamada da função:" << endl;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout<< "" << endl;
    
    return 0;
}
