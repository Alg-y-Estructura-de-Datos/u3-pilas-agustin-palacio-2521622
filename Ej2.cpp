#include <iostream>
#include "Pila/Pila.h"
using namespace std;
void reemplazar(Pila<int> &pila, int nu1, int nu2)
{
    Pila<int> aux;

    int valoractual;

    while (!pila.esVacia())
    {
        valoractual = pila.pop();

        if (valoractual == nu1)
        {
            pila.push(nu2);
        }
        else
        {

            pila.push(valoractual);
        }
    }

    while (!aux.esVacia())
    {
        pila.push(aux.pop());
    }
}

void imprimir(Pila<int> &pila)
{

    Pila<int> aux;

    while (!pila.esVacia())
    {
        int elemento = pila.pop();
        cout << elemento << " ";
        aux.push(elemento);
    }
    cout << "]" << endl;

    while (!aux.esVacia())
    {
        pila.push(aux.pop());
    }
}

int main()
{

    cout << "Ejercicio N° 2" << endl;

    Pila<int> pila1;
    int d, r, t, u;
    cout << "Ingrese de que tamanio quiere la pila  " << endl;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cout << "Ingrese el valor de la posicion " << i << endl;
        cin >> r;
        pila1.push(r);
    }

    cout << "Cual numero es al que quiere remplazar " << endl;
    cin >> t;

    cout << "Con que numero lo quiere remplazar " << endl;
    cin >> u;

    cout << endl;

    reemplazar(pila1, t, u);

    imprimir(pila1);
    return 0;
}
