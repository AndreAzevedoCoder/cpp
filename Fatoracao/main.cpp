#include <iostream>

using namespace std;

int main()
{
    long long resultado = 1;
    long long fator;
    cout << "Digite um numero pra fatorar: ";
    cin >> fator;
    for(int i = fator; i > 1; i--){
        resultado = resultado * i;
    }
    cout << resultado << endl;
}
