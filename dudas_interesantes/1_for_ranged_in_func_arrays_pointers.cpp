//Que esta verga que esta aca bajo y nunca nos explicaron en las putas clases?
//  Descubrelo en este enlace :D: https://stackoverflow.com/questions/42340021/what-is-the-basic-difference-between-namespace-library-and-header-files 
#include <iostream>
#include <array>

using namespace std;

//Estaba queriendo pasarle un array a una funcion y hacer un ranged for loop

//arroja error (https://stackoverflow.com/questions/31824323/range-based-for-loop-in-function-which-passes-an-array-as-value):

// void func1(int terna[3]);

// void func1(int terna[]){
//     for (const int &num : terna)
//     {
//         cout<< num << " "<< endl;
//     }    
// }

// Esto se debe a que los arrays  decaen en pointers: https://stackoverflow.com/questions/1461432/what-is-array-to-pointer-decay 


// -----------------

// forma correcta de hacerlo
void func1 (int (&terna)[3]){
    for (int c: terna) cout << c << " ";
    cout << endl; 
    }


int main () {
    int terna[3] = {1,2,3};
    func1(terna);

 return 0;
}


