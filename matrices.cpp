#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int numeros [100][100], filas, columnas;
cout << " ingrese el numero de filas: ";
cin >> filas; 
cout<< " ingrese el numero de columnas: ";
cin >> columnas;

for( int i=0; i<filas; i++){
    for ( int j=0; j<columnas; j++){ 
        cout << " digite un numero  [ " << i << "] ; [ " << j << "]";
        cin >> numeros [i][j];
    }
}

for ( int i=0; i<filas; i++){
    for ( int j = 0; j < columnas; j++){
        cout<< numeros [i][j];
    }
    cout<<endl; 
}

getch();
    return 0;
}
        