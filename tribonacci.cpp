#include <iostream>

using namespace std;
int main() {
    int n, inicio;

    cout << "Ingresa el numero de repeticiones: ";
    cin >> n;
    cout << "Ingresa el numero en el que deseas que empiece la secuencia de Tribonacci: ";
    cin >> inicio;

    int a = 0, b = 1, c = 1, siguiente;

    while (c < inicio) {
        siguiente = a + b + c;
        a = b;
        b = c;
        c = siguiente;
    }

    cout << "Secuencia de Tribonacci que empieza desde " << c << ":\n";
    for (int i = 0; i < n; i++) {
        cout << c << " ";
        siguiente = a + b + c;
        a = b;
        b = c;
        c = siguiente;
    }

    cout << endl;
    return 0;
}
