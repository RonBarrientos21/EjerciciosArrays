
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int numeros [10] = {1, 2,3,4,5, 6, 7, 8, 9, 10};
    int suma = 0;
    for(int i=0;i<11;i++) {
        suma = suma + numeros[i];
    }
    cout<<"la suma de los 10 elementos del vector es: "<<suma<<endl;
        getch ();
        return 0;
    }
