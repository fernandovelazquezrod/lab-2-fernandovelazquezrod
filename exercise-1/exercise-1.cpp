#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    int sum=0;
    float prom=0;
    int prod=0;

    cout << "Ingrese tres numeros enteros diferentes: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    sum = a + b + c;
    prom = sum / 3;
    prod = a * b * c;
    cout << "La suma es: " << sum << endl;
    cout << "El promedio es: " << prom << endl;
    cout << "El producto es: " << prod << endl;

    if (a <= b && a <= c) {
        cout << "El numero menor es: " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "El numero menor es: " << b << endl;
    } else {
        cout << "El numero menor es: " << c << endl;
    }

    if (a >= b && a >= c) {
        cout << "El numero mayor es: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "El numero mayor es: " << b << endl;
    } else {
        cout << "El numero mayor es: " << c << endl;
    }


}