#include<iostream>
using namespace std;
int main (){
    int num;

    cout << "digite um numero seu viado: \n";
    cin >> num;

    for(int i = 0; i <= 10; i++){


        cout << i << " x " << num << " = " << num * i;
        cout << "\n";
    }

}