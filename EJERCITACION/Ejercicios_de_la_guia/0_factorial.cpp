#include <iostream>
using namespace std;

int eje_fact(int);
int eje_fact2(int);
int factorial(int);

int main () {
    int n;
    cout<<"Ingrese un numero para sacar el factorial: ";
    cin>>n;
    cout<<"Resultado: " << factorial(n);
return 0;
}

int factorial(int n){
    if (n==1) return n;
    return n * factorial(n-1);
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

