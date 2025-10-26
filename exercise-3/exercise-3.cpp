#include <iostream>
using namespace std;

int main(){
    int x[3];
    
    cout << "Ingresa 3 numeros enteros: " << endl;
    cin >> x[0] >> x[1] >> x[2];
    cout << "el nuevo número entero por los tres numeros es: " << endl;
    for(int i = 0 ; i<3 ; i++)
    {
        cout << x[i];
    }
    return 0;
}