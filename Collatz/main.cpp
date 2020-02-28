#include <iostream>

using namespace std;

int main()
{
    int numero;
    int vezes = 0;
    cout << "Digite um numero: ";
    cin >> numero;

    while(numero != 1){
        vezes++;
        cout << numero << endl;
        if(numero % 2 == 0){
            numero = numero/2;
        }else{
            numero = numero*3+1;
        }
    }
    cout << "A quantidade de vezes foi: "+to_string(vezes) << endl;
}
