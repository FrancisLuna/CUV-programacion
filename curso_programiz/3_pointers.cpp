#include <iostream>
using namespace std;

int main(){
    // Se crea un pointer y una variable
    int* pointVar,p;
    // Se instancia la variable
    p=5;
    // Observamos el valor para el pointer
    cout << "----------------------- \nvalor de p "<< p << "\nValor del pointvar: "<< pointVar<< endl // p=5 y pointVar=0x401cdb (o similar )
        <<endl;
    cout<<"----------------------"<< "\nSe instnacia el pointer"<< endl;
    // Se intencia el pointer, podemos ver que ahora a punta a p
    pointVar = &p; // Vemos que &p es igual a pointVar
    cout<<"Pointer de pointVar "<< pointVar<< "\nPointer de P: " << &p << endl; 
    // Obtenemos el valor que se encuentra alojado en el espacio de memoria indicado por pointVar
    cout<<"Valor del pointer pointVar: "<< *pointVar<< endl // *pointVar = p = 5
    <<endl;

    // Se modifica el valor de p usando el pointer
    cout<<"----------------------"<< "\nSe modifica el valor de p usando el pointer"<< endl;
    *pointVar = 100;
    cout << "Nuevo valor de p: "<< p << endl; // p ahora paso de valer 5 a 100, habiendo modificado *pointVar


// Pointers y structures
// Create a structure
    struct Distance {
    int feet;
    float inch;
    };

// Create a pointer and a distance structure (SE DECLARAN LAS VARIABLES)
    Distance *ptr, d;
// Instance pointer (SE INSTANCIAN LA VARIABLE ptr)
    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> (*ptr).feet; // Since pointer ptr is pointing to variable d in this program, (*ptr).
                        // inch and d.inch are equivalent. Similarly, (*ptr).feet and d.feet are equivalent.
                        //Hence, we enclose *ptr in brackets when using (*ptr).inch. Because of this, it is
                        // easier to make mistakes if both operators are used together in a single code.
    cout << "Enter inch: ";
    cin >> ptr->inch; //However, if we are using pointers, it is far more preferable to access struct
                      // members using the -> operator, since the . operator has a higher precedence than the * operator.
 
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";


    return 0;
    }

