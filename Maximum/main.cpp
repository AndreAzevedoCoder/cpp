#include <iostream>

using namespace std;

void somar(int n1, int n2){
    cout << n1+n2 << endl;
}

int main()
{
    int n1,n2;
    cout << "Digite um numero: ";
    cin >> n1;

    cout << "Digite outro numero: ";
    cin >> n2;

    somar(n1,n2);

    return 0;
}


