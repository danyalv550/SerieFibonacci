#include <iostream>

using namespace std;

int main(){
    int a=0,b=1,c,numero,cont;
    cout << "Escriba la cantidad de numeros que tendra la serie: ";
    cin >> numero;
    while(numero <=1){
        cout << "Escriba un numero mayor que 1: ";
        cin >> numero;
    }
    cout << a << " " << b << " ";
    for(cont = 2; cont <= numero; cont++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}