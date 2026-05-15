#include<iostream>
using namespace std;
int main (){
    float sal;
    int porcen;

     ;
    cout << "qual o salario? ";
    cin >> sal;

    if(sal >= 0 && sal <= 400.00){
        porcen = sal * 0.15;
        cout << "\nNovo salario: " << porcen + sal << "\nReajuste: " << porcen << "\nem porcentual : 15%\n";
    }
    else if (sal >= 400.01 && sal <= 800.00){
       porcen = sal * 0.12;
       cout << "\nNovo salario: " << porcen + sal << "\nReajuste: " << porcen << "\nem porcentual : 12%\n";
    }
    else if (sal >= 800.01 && sal <= 1200.00){
        cout << "\nNovo salario: " << porcen + sal << "\nReajuste: " << porcen << "\nem porcentual : 10%\n";
    }
    else if (sal > 1200.00 && sal <= 2000.00){
        porcen = sal * 0.07;
        cout << "\nNovo salario: " << porcen + sal << "\nReajuste: " << porcen << "\nem porcentual : 07%\n";
    }
    else if ( sal > 2000){
        porcen = sal * 0.04;
        cout << "\nNovo salario: " << porcen + sal << "\nReajuste: " << porcen << "\nem porcentual : 04%\n";
    }
    

}