#include<iostream>
using namespace std;
int main(){
    string rep;
    float valor;
    int parc;

    cout << "deseja realizar uma compra?\n";
    cin >> rep;
    while(rep == "s"){
        cout << "digite qual o valor da compra e em quantas vezes vc quer parcelar:  \n";
        cin >> valor >> parc;

        cout << "sua compra de R$" << valor << ", e cada pracela deu R$" << valor / parc << "\n";
        cout << "deseja realizar outra compra? ";
        cin >> rep;


    }

}