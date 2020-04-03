// EJERCICIO 6

// AUTOR: PEDRO ESTÉVEZ

/* Escribir un programa que cree un vector de caracteres de la ‘a’ a la ‘k’ y que posteriormente
 * sustituya todas las vocales que se encuentran en el vector por el carácter ‘*’
Notas:
•Es el mismo que ya hicimos anteriormente, pero ahora es necesario usar el mayor número de
algortimos que sea posible (para que el programa salga más corto que antes) */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

void aleatorio (char &letra){
    char valor = int('a') + rand() % 11;
    letra = valor;
}

void imprimir(char valor){
    cout<<valor<<" ";
}

int main() {

    // Definimos la semilla para que la función rand de verdad genere números aleatorios
    srand(time(0));

    // Definimos un vector de tipo caracter de 11 elementos (de la 'a' a la 'k')
    vector<char> v(11);

    // Pasamos por referencia el valor a la función aleatorio
    for_each(v.begin(), v.end(),aleatorio);

    // Imprimimos el resultado
    cout<<"El vector generado es: [ ";
    for_each(v.begin(),v.end(),imprimir);
    cout<<" ]"<<endl;

    // Buscamos las vocales y las cambiamos por asteriscos
    replace(v.begin(),v.end(),'a','*');
    replace(v.begin(),v.end(),'e','*');
    replace(v.begin(),v.end(),'i','*');

    // Imprimimos el resultado
    cout<<"El vector modificado es: [ ";
    for_each(v.begin(),v.end(),imprimir);
    cout<<" ]"<<endl<<endl;

    system("pause");
    return 0;
}
