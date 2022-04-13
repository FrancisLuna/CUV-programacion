#include <iostream>
using namespace std;

int fibonacci_a(int posicion){
    if (posicion==0) return 0;
    if (posicion==1) return 1;
    return fibonacci_a(posicion-1)+fibonacci_a(posicion-2);
}

int fibonacci_b(int posicion){
    if (posicion<=1) return posicion;
    return fibonacci_b(posicion-1)+fibonacci_b(posicion-2);
}

int main(void){
    cout<<fibonacci_a(2)<<endl;
}