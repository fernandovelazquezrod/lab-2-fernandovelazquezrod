#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int medio = 0;

    cout << "Ingrese tres números enteros: ";
    cin >> a >> b >> c;

    if (a > b && a < c || a < b && a > c)
    {
        medio = 1;
    }
    else if (b > a && b < c || b < a && b > c)
    {
        medio = 2;
    }
    else if (c < a && c > b || c > a && c < b)
    {
        medio = 3;
    }
    switch (medio){
    case 1:
            cout << "El valor de enmedio es: " << a << endl;
        break;
    case 2:
            cout << "El valor de enmedio es: " << b << endl;
        break;
    case 3:
            cout << "El valor de enmedio es: " << c << endl;
        break;
    default:
            cout << "No hay un valor de enmedio claro (pueden ser iguales)." << endl;
        
    }
    return 0;
}
