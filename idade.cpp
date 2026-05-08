#include<iostream>
using namespace std;
int main (){
    string nome;
    int idade;
    string ano;
    int ano_nascimento;

    cout << " digite seu nome: ";
    cin >> nome;

    cout << " digite sua idade: ";
    cin >> idade;

    cout << " digite o seu nome escolar: ";
    cin >> ano;
    
    ano_nascimento = 2026 - idade;


    cout << " " << endl;
    cout << "ola " << nome << " voce tem " << idade << " seu ano de nascimento é " << ano_nascimento << " esta no " << ano << endl;

}