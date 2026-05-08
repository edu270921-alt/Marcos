#include<iostream>
using namespace std;
int main(){
    float raio;
    float circulo;

    cout << "digite o raio: ";
    cin >> raio;

    circulo = (raio * raio) * 3.14159;

    cout << "area do circulo= " << circulo << endl;
}