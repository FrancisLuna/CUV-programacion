#include <iostream>
// #include <vector>
// #include <typeinfo>
#include <string>


using namespace std;



//###########################
//####PROBANDO PUNTEROS#####
//###########################
// void func(int* num){
//     cout << *num;
// }

// void func2(int terna[]){
//     for (const int &num : terna)
//     {
//         cout<< num << " " << endl;
//     }    
// }

// int main () {
//     int* nump, num;
//     num=5;
//     nump = &num;  
//     func(nump);
//     return 0;
// }

//#################################################
//####PROBANDO COMO FUNCA UN FOR INTERNAMENTE #####
//#################################################

// int main(int argc, char const *argv[])
// {
//     int array[5] = {1,2,3,4,5};
//     for (const int &n : array){
//         cout<<n;
//     }
//     return 0;
// }


//#################################################
//####  PROBANDO COMO UN ARRAY VS POINTERS    #####
//#################################################
// https://stackoverflow.com/questions/1461432/what-is-array-to-pointer-decay
// https://www.programiz.com/cpp-programming/pointers-arrays 
// int main(){
//     int* pointer;
//     int array[5] = {1,2,3,4,5};
//     cout << &array;
//     return 0;
// }



// int main()
// {
//    string a = "La casa";
//    for(int i=0; i<7; i++ ){
//       if (a[i] == ' ') 
//       cout<<a[i]<<endl;
//    }
// }

#include <windows.h>
int main(void)
{
// ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=M_LI6y9OMNg", NULL, NULL, SW_SHOWNORMAL);
// return 1;
int n=5, o=10;
cout<<n+o;
}