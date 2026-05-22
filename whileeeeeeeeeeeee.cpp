#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string rep;
    float valor;
    int parc;

 
   
    while (true){
        cout << "digite qual o valor da compra e em quantas vezes vc quer parcelar:  \n";
        cin >> valor >> parc;

        cout << "sua compra de R$" << valor << ", e cada pracela deu R$" << fixed << setprecision (2) << valor / parc << "\n";
        cout << "deseja realizar outra compra?(s/n) ";
        cin >> rep;

        if (rep =="n"){
            break;
        }
    }

}