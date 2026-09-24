#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero" << endl;
    cin >> numero;

    if (numero > 0)
       cout << "Numero Positivo" << endl;

    else if(numero < 0)
       cout << "Numemro Negativo" << endl;

    else 
      cout << "Cero" << endl;


 return 0;
}
