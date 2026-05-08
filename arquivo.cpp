#include<iostream>
using namespace std;
int main(){
    int numero;
    int numero2;
    int soma;
    int sub;
    float div;
    int mult;

    cout << "digite um numero: ";
    cin >> numero;
    
    cout << "digite outro numero: ";
    cin >> numero2;
    
    soma = numero + numero2;
    sub = numero - numero2;
    div = numero / numero2;
    mult = numero * numero2;
    
    cout << soma << endl;
    cout << sub << endl;
    cout << div << endl;
    cout << mult << endl;
}