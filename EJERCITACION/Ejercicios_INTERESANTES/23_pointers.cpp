#include <iostream> //std::cout std::cin etc.
using namespace std;
/*
Ej. MI-23. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
*/

int main() {
    int* maxneg =nullptr;
    int* minpos =nullptr;
    int num;
    cout<<"Ingrese un valor"<<endl;
    cin>>num;
    while(num!=0){
        if (num<0){
            if(maxneg == nullptr) maxneg = new int (num);
            else if (*maxneg<num) *maxneg=num;
        }else{
            if(minpos == nullptr) minpos = new int (num);
            else if (*minpos>num) *minpos=num;
        }
        cin>>num;
    }
    if (maxneg==nullptr) cout<< "NO existe valor máximo negativo"; else cout<<"El valor máximo negativo"<< *maxneg << endl;
    if (minpos==nullptr) cout<< "NO existe valor minimo negativo"; else cout<<"El valor minimo positivo"<< *minpos << endl;
    delete maxneg;
    delete minpos;
    return  0;
}
