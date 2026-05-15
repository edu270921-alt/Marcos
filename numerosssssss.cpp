#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;

    //cout << "digite 4 valores \n";
    cin >> a >> b >> c >> d;

    if((b > c) && (d > a) && ((c + d > a + b)) && (c > 0) && (c > 0) && (a % 2 == 0)){
 

    cout << "Valores aceitos\n";
    }

    else{
        cout << "Valores nao aceitos\n";
    }
}