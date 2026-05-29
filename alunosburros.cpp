#include<iostream>
#include <list>
using namespace std;
int main (){
    int numero;
    list<int> valoresN;
    list<int> valoresP;
    list<int> valoresI;
    list<int> valoresPA;
    for(int i = 0; i < 5; i++){
        cout <<"\nDigite um numero: ";
        cin >> numero;

        if(numero == 0){
            continue;
        }

        if (numero > 0){
            valoresP.push_back(numero);
        }
        else{
            valoresN.push_back(numero);
        }
        if (numero % 2 == 0){
            valoresPA.push_back(numero);
        }
        else{
            valoresI.push_back(numero);
        }
    }
    cout << "\nDentre os valores pares temos: " << valoresPA.size() << " sendo eles: \n";
    for (auto par : valoresPA){
        cout << par <<endl;
    }

    cout << "\nvalores impares: " << valoresI.size() << " sendo eles: \n";
    for (auto impar : valoresI){
        cout << impar <<endl;
    }

     cout << "\nvalores positivo: " << valoresP.size() << " sendo eles: \n";
    for (auto positivo : valoresP){
        cout << positivo <<endl;
    }

         cout << "\nvalores negativo: " << valoresN.size() << " sendo eles: \n";
    for (auto negativo : valoresN){
        cout << negativo <<endl;
    }
    

}