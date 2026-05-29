#include<iostream>
using namespace std;
int main(){
    float vo;
    float drogas;
    float pao;
    float ifood;
    int cont = 0;

    cin >> vo;
    cin >> ifood;
    cin >> pao;
    cin >> drogas;

    if (vo >= ifood){
        cont++;

        vo = vo - ifood;
    }
        
    if (vo >= drogas){
        cont++;

        vo = vo - drogas;
    }

    if (vo >= pao){
        cont++;
    }

    cout << cont << endl;

}