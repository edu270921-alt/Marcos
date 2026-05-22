#include<iostream>
#include <list>
using namespace std;
int main(){
    string item;
    string rep;
    list<string> mercado;
    while(true){

        cout << "\nDigite os itens da lista da compra: ";
        cin >> item;

        mercado.push_back (item);

        cout << "\nDeseja adicionar outro item?{s/n}: ";
        cin >> rep;

        if (rep == "n"){
            break;
        }
            
    }
    cout << "\nSua lista do mercado ficou:\n";
    for(auto n : mercado){
        cout << "- "<< n << endl;

    }
    cout << "\nObrigado por comprar\n";
}