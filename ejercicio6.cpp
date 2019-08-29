/*

Leer tres numeros del usuario separados por espacio: 10 15 20
Y encuentra el mayor valor: 30

*/
#include <iostream>
using namespacestd;
int main(){
    int a,b,c,mayor;
    cout<<"Ingrese tres numeros: ";
    cin>>a>>b>>c;
    if (a>=b && a>=c){
        cout<<a<<" es el numero mayor";
    }
    if (b>=a && b>=c){
        cout<<b<<" es el numero mayor";
    }
    if (c>=b && c>=a){
        cout<<c<<" es el numero mayor";
    }
    if (a==b && a==c){
        cout<<"Todos los numeros son iguales";
    }
}
