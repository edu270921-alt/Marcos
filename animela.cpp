#include <iostream>
using namespace std;
int main()
{
    string verte;
    string tipo;
    string alimento;

    cout << "o animal é vertebrado ou invertebrado?, qual é a especie do animal?, doque ele se alimenta?\n";
    cin >> verte >> tipo >> alimento;

    if (verte == "vertebrado")
    {

        if (tipo == "ave")
        {

            if (alimento == "carnivoro")
            {
                cout << "é uma aguia\n";
            }

            else
            {
                cout << "é uma pomba\n";
            }
        }

        else
        {
            if (alimento == "onivoro")
            {
                cout << "é um homem\n";
            }

            else
                cout << "é uma vaca\n";
        }
    }
    else
    {
        if (verte == "invertebrado")
        {

            if (tipo == "inseto")
            {
                if (alimento == "hematofago")
                {
                    cout << "é uma pulga\n";
                }
                else
                {
                    cout << "é um lagarta\n";
                }
            }

            else
            {
                if (alimento == "hematofago")
                {
                    cout << "sanguessuga\n";
                }
                else
                {
                    cout << "è uma minhoca\n";
                }
            }
        }
    }
}