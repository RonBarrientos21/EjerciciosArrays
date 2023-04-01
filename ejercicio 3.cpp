#include <iostream>

int main() {

    int arreglo[50];
    using namespace std;
    int cantidad, i, auxiliar;

    cout<< "Ingrese numero de elementos que tendra el arreglo: ";
    cin >> cantidad;
    for (i=0; i < cantidad; i++) {
        cout << endl << "Ingrese elemento " << (i + 1) << ":";
        cin >> arreglo[i];
    }
            for (i= 0; i < cantidad/2; i++) {
                auxiliar = arreglo[i];
                arreglo[i] = arreglo[cantidad-1-i];
                arreglo[cantidad-1-i] = auxiliar;
            }

            cout << endl;
            for (i=0; i < cantidad; i++) {
                cout << endl << "Elemento "  << (i+1) << ". " << arreglo[i]<< endl;

            }
            return 0;
}
