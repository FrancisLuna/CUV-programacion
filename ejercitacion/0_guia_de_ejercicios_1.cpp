#include <iostream> //std::cout std::cin etc.
#include <cmath> // std::trunc
#include <vector> // std::vector
#include <algorithm> //  std::count
#include <numeric> // std::acumulate
using namespace std;

void ej1(int, int);
void ej2(int );
void ej3(int );
void ej5(int , int);
void ej6 (); 
void ej7();
void ej8();
void ej9();
void ej11();
void ej12();
void ej13();
void ej14();
void ej14_como_lo_quiere_el_profe();
void ej15(); // FALTA
void ej16();
void ej17();
void ej18();
void ej19(); // FALTA
void ej20_hardcore();
void ej20_como_prof_manda();
void ej20(); //FALTA
void ej21();



int main () {
    //inserte la función a ver
    ej20_como_prof_manda();
 return 0;
}

// void ej21(){
//     int n;
//     int menor[2]=
//     cout<<"Ingrese la cantidad de datos a ingresar: "<<endl;

//     int array[n]={0};
//     cout<<"Introduce los numeros."<<endl;
//     for (int i=0; i<10; i++){
//         cin>>array[i];
//     }
    
//     int mayor=array[0];
//     for (int i=0; i<9; i++){
//         if(mayor<array[i+1]){
//             mayor=array[i+1];
//         }
//     }for(const int &i:array) cout<<i<<" ";
//     cout<<"El numero mas grande es: "<< mayor;
// }

void ej20_como_prof_manda(){
    int mayor, aux;
    cout<<"Introduce los numeros."<<endl;
    cin>>mayor;
    for (int i=0; i<9; i++){
        cin>>aux;
        if (aux>mayor) mayor=aux;
        }
    cout<<"El numero mas grande es: "<< mayor;
}


void ej20_hardcore(){
    int array[10]={0};
    cout<<"Introduce los numeros."<<endl;
    for (int i=0; i<10; i++){
        cin>>array[i];
    }
    int mayor=array[0];
    for (int i=0; i<9; i++){
        if(mayor<array[i+1]){
            mayor=array[i+1];
        }
    }for(const int &i:array) cout<<i<<" ";
    cout<<"El numero mas grande es: "<< mayor;
}

void ej19(){}

void ej18(){
    int num, m;
    num=0;
    cout<<"Cantidad de numeros a buscar: ";
    cin >> m;
    // m=2;
    vector<int>v;
    while (m>0){
        if(num%3==0 && num%5!=0){
            v.push_back(num);
            m--;
        }
        num++;                
    } for(int const &i: v){
        cout<<i<<" ";}
}

void ej17(){
    float sueldo;
    int menos1520, menos2780,menos5999,mas5999;
    menos1520=menos2780=menos5999=mas5999=0;
    while(sueldo!=0){
        cin>>sueldo;
        if(sueldo<1520){
            menos1520++;
        }else if (sueldo<2780){
            menos2780++;
        }else if (sueldo<5999){
            menos5999++;
        }else if (sueldo>5999){
            mas5999++;
        }
        cout<<"sueldos menor a 1520: "<< menos1520<< endl;
        cout<<"sueldos menor a 2790: "<< menos2780<< endl;
        cout<<"sueldos menor a 5999: "<< menos5999<< endl;
        cout<<"sueldos mayor a 5999: "<< mas5999<< endl;
    }
}

void ej16(){
    float num, n_ing;
    n_ing=0;
    while (num>=0){
        cout<<"Ingresa valoles muchalo: ";
        cin>>num;
        n_ing++;
    }
    cout<<"cantidad de valores ingresados: "<<n_ing;
}

void ej15(){


}

void ej14_como_lo_quiere_el_profe(){
    float num, contador100, res100, res10, contadornum;
    contador100 = res100 = res10 = contadornum= 0; //se copian, pero comparte el puntero
    cout<<"Hola joven compatriota que quiere huir de america latina, porrrr fis pone 50 numeros... ";
    while (contadornum<5){
        cin>>num;
        if(num>100 || num<-10){
            if(num>100){
                contador100++;
                res100+=num;
            }if (num<-10){
                res10+=num;
            }contadornum++;
        }
    }
    cout<< "promedio mayores a 100: " << res100/contador100 << endl;
    cout<< "promedio menos que -10: " << res10 << endl;
}


void ej14(){
    float num;
    vector<int>may100;
    vector<int>men10;
    cout<<"Hola joven compatriota que quiere huir de america latina, porrrr fis pone 50 numeros... ";
    for (int i=0;i<50;i++){
        cin>>num;
        if(num>100) may100.push_back(num);
        if(num<-10) men10.push_back(num);
    }
    cout<< "promedio mayores a 100: " << accumulate(may100.begin(), may100.end(),0.0)/may100.size() <<endl;
    cout<< "promedio menos que -10: " << accumulate(men10.begin(), men10.end(),0.0) << endl;    
}

void ej13(){
    int n,m, res;
    res=0;
    cout<<"ingresar n y m: ";
    cin>>n>>m;
    for(int i=0; i<m;i++){
        res+=n;
    }
    cout<<res<<endl;
}

void ej12(){
    int sumatoria;
    for (int i=0; i<100; i++){
        sumatoria +=i;
        cout<<i<<endl;
    }
}

void ej11(){
    cout<<"Ingresa la edad wuachiiiin";
    int edad; cin>>edad ;
    if (edad<=12) printf("menor");
    else if (edad<=18) printf("cadete");
    else if (edad <= 26) printf("juvenil");
    else printf("mayor");    
}

void ej9(){
    int mes,anio;
    cout<<"Ingrese mes y anio: ";
    cin >>mes>>anio;
    vector<int> v_31_days = {1,3,5,7,8,10,12};
    vector<int> v_30_days = {2,4,6,9,11};
    // chequeo si el mes esta dentro de los meses con 31 dias
    if (count(v_31_days.begin(), v_31_days.end(), mes))
    {
        cout<<"El mes tiene 31 dias";
    // chequep si el mes esta dentro de los meses con 30 dias 
    }else if (count(v_30_days.begin(), v_30_days.end(), mes)){
        cout<<"El mes tiene 31 días";
    // caso particualar de febrero
    }else if (mes==2 && anio&4==0 && anio%100!=100 && anio%400==0)
    {
        cout<<"El mes tiene 30 dias";
    }else if (!(mes==2 && anio&4==0 && anio%100!=100 && anio%400==0)){
        cout<<"El mes tiene 29 dias";
    }
}

void ej8(){
    float a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c) cout << "Equilateral triangle\n";
    else if(a==b || a==c || b==c) cout << "Isosceles triangle\n";
    else cout << "Scalene triangle\n";
}

void ej7(){
    float a,b,c;
    cin>> a >>b>>c;
    if (a+b>c && a+c>b && b+c>a)
    {
        cout<< "es un triangulo"<<endl;
    }else{
        cout<<"no es un triangulo"<<endl;
    }
    
}
void ej6 (){
    //fecha debe ser ingresada como AAAADDMM
    int fecha1, fecha2;
    cout<<"Ingrese dos fechas formado AAAADDMM"<<endl;
    cin>>fecha1;
    cin>>fecha2;
    cout << "fecha mas reciente: "<<max(fecha1, fecha2);

}

void ej5(int a, int b){
    if (a>b)
    {
        cout<<a<<" es mayor que : "<<b<<endl;
    }else{
        cout<<a<<" es menos que : "<<b<<endl;
    }
}

void ej4(){
    float a,b, c, input;
    cin>>input;
    a = input/5;
    b = int(input)%5;
    c= a/7;
    cout<< " quinta parte: "<<a<<"\n /5: "<<b<<"\n /7 de a: "<<c<<endl;

}

void ej3(int fecha){
    int dia, mes, anio;
    dia = trunc(fecha/1000000);
    mes = trunc((fecha - dia*1000000)/10000);
    anio = fecha%10000;
    cout<<dia<<"/"<<mes<<"/"<<anio;
}

void ej2(int (&terna)[3]){
    int res = (terna[0]*100+terna[1])*10000+terna[2]; 
    cout<<res;
}


void ej1(int a, int b){
    cout<<"suma: " << a+b<<endl;
    cout<< "resta: "<< a-b<<endl;
    cout<< "multiplicacion: "<< a*b<<endl;
}