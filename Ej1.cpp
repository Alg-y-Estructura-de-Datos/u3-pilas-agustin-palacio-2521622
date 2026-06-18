#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void palabrainvertidapila(Pila<char>&palabra){

   char caracter;           //Al parecer Char es para guardar letras....

   do
   {
    cin.get(caracter);
    if (caracter != '.')
    {
        palabra.push(caracter);
    }
    
   } while (caracter != '.');
   

   cout << "Palabra o frase invertida: ";

    // Desapila cada caracter y lo imprime, invirtiendo así la palabra o frase
    while (!palabra.esVacia()) {
        cout << palabra.pop();
    }

    cout << endl;



}

int main() {

    cout << "Ejercicio N° 1" << endl;
    Pila<char> pal;
    char d;
    cout<<"Ingrese palabra o frase la cual le gustaria invertir(Por favor usar punto final)"<<endl;
    cin>>d;

    pal.push(d);

    palabrainvertidapila(pal);

    return 0;
}
