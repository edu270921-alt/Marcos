#include<iostream>
#include<iomanip>
using namespace std;
int main () {
    float nota1;
    float nota2;
    float nota3;
    float media;
    cout << "digite a primeira nota: ";
    cin >> nota1;

    cout << " digite a segunda nota: ";
    cin >> nota2;

    cout << " digite a ultima nota: ";
    cin >> nota3;

    media = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;

    cout << setprecision(2) << media << endl;
}