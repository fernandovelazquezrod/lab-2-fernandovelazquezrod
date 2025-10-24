#include <iostream>
using namespace std;

int main(){
    int a = 0;
    
    cout << "Ingrese un número entero: " << endl;
    cin >> a;

    if (a%2 == 0)    {
        cout << a << " el número es par " << endl;
    }
    else {
        cout << a << " el número es impar " << endl;
    }
    return 0;
}