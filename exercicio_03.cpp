#include <iostream>

using namespace std;

void ordenarCrescente(float &num1, float &num2, float &num3, float &num4) {
    float temp;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num3 > num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Informe o primeiro número: ";
    cin >> num1;

    cout << "Informe o segundo número: ";
    cin >> num2;

    cout << "Informe o terceiro número: ";
    cin >> num3;

    cout << "Informe o quarto número: ";
    cin >> num4;

    cout << "" << endl;

    ordenarCrescente(num1, num2, num3, num4);

    cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
    cout << "" << endl;
    
    return 0;
}
