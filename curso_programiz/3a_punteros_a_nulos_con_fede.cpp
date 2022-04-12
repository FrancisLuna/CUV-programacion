#include <iostream>
using namespace std;

/* 
Podemos crear un puntero que apunte a un espacio de memoria y luego cambiar el lugar al que apunta
*/
int main()
{
   // a punta a algo
   int* ptrx;
   int num=5;
   // Ahora hago que cambie a donde apuntaba, para que el valor del puntero valga 5
   ptrx = &num;
   cout <<"Pudimos cambiar el valor en memoria: "<< *ptrx <<endl;

/*
Podemos tambien cambiar el valor de donde apunta el puntero ¡¡¡CUANDO SEA POSIBLE!!!
Por ejemplo, si creamos un puntero que a "nulo", ese espacio de memoria al que esta apuntando
esta "reservado" y no se puede modificar. Con lo cual al tratar de hacerlo va a generar un error
dado que el SO esta protegiendose.
*/

   // a punta a nulo
   int* ptrx = nullptr;
   // Ahora busco cambiar el espacio de memoria que apuntaba a null, para remplazarlo por 5. (ERROR DE COMPILACIÓN, no se marca en rojo)
   *ptrx=5;
   // va a devolver 0
   cout <<"No pudimos cambiar el espacio en memoria con el puntero: "<< *ptrx <<endl;
   return 0;

/*Cuando el puntero es dinámico (cambia de valor a lo largo del programa) generalmente 
conviene que uses memoria dinámica (con la palabra new) y ahí el SO te da memoria válida 
Que sea dinamico es que no hay un lugar estricto reservado en memoria*/

   // creamos el puntero que apunte a nullptr (apunta al vacio)
   int* ptrx = nullptr;

   // No podes ocupar el espacio que apunta el puntero, asi que tenemos que cambiar el puntero a otro espacio nuevo y completar el valor
   ptrx = new int();
   *ptrx = 5;
   
   // Una forma reducida de hacer lo de arriba es:
   ptrx=new int (5);
}

