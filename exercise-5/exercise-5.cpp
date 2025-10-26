#include <iostream>
using namespace std;

int main(){
    int fx=0;
    int x[6];
    
    cout << "Ingrese seis valores: " << endl;
    for (int i=0; i<6; i++){
        cin >> x[i];
        fx = x[i]*x[i]*x[i] - x[i]*x[i] + 5;
        cout << "f(" << x[i] << ") = " << fx << endl;
    }
} 