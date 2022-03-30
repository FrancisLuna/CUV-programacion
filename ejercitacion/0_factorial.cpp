#include <iostream>
using namespace std;

int eje_fact(int n);
int eje_fact2(int n);

int main () {
    int n;
    cout<<"Ingrese un numero para sacar el factorial: ";
    cin>>n;
    cout<<"Resultado: " << eje_fact2(n);
 return 0;
}

int eje_fact2 (int n){
    int fact;
    fact =1;
    while (n!=0)
    {
        fact*=n;
        --n;
    }
 return fact;
}

int eje_fact (int n){
    int fact;
    fact =1;
    for (n; n > 0 ; n--)
    {
        fact*=n;
    }
 return fact;
}
