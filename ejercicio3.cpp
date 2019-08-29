int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    vector<int> elementos;
    int numero;
    do {
        cout << "Ingrese un entero positivo, escriba -1 si ya no quiere ingresar mas numeros:";
        cin >> numero;
        elementos.insert(elementos.end(), x);

    } while (x != -1);
    return elementos;
}
}

int mediana(vector<int> &lista) {
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    int null,a,b;
    if(lista.size()%2==0){
        a=lista[lista.size()/2];
        b=lista[(lista.size()/2)-1];
        null=(a+b)/2;
    }
    else{
        null=lista[(lista.size()-1)/2]
    }
    return null;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
