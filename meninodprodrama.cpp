#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;

    cout << "digite um numero: ";
    cin >> n1;

    cout << " digite outro numero: ";
    cin>> n2;

    if (n1 == n2){
        cout << "Os numeros são iguais" << endl;
    }

    else if (n1 > n2){
        cout << " o numero " << n1 << " é maior que o numero " << n2 << endl;
    }

    else{
        cout << " o numero " << n2 << " é maior que o numero " << n1 << endl;
    }
}