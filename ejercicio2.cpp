
int moda(vector<int> &lista);
vector<int> leerConsole();

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

int moda(vector<int> &lista) {
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    for(int i=0 ; i<lista.size() ; i++){
        numerorepeticiones=0;
        for(int j=0 ; j<lista.size() ; j++){
            if(lista[i]==lista[j] && i!=j){
                numerorepeticiones++;
            }
        }
        if(numerorepeticiones>=mayor){
            mayor=numerorepeticiones;
            indicemoda=i;
        }
    }
    return lista[indicemoda];
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsole();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
