// TO DO; ej15, ej19, ej20, ej 22
#include <iostream> //std::cout std::cin etc.
#include <cmath> // std::trunc
#include <vector> // std::vector
#include <algorithm> //  std::count
#include <numeric> // std::acumulate
using namespace std;

void ej1(int, int); void ej2(int ); void ej3(int ); void ej5(int , int); void ej6 (); void ej7();void ej8();void ej9();void ej11();
void ej12(); void ej13(); void ej14(); void ej14_como_lo_quiere_el_profe(); void ej15(); void ej16(); void ej17(); void ej18(); void ej19(); 
void ej20_hardcore(); void ej20_como_prof_manda(); void ej20(); void ej21(); void ej22(); void ej23_profe(); void ej23_flags(); void ej23();void ej23_pointers(); void ej24(); void ej25();void ej26();



int main () {
    //inserte la función a ver
    ej24();
 return 0;
}

void ej24(){
    float num, avg_sublote, sum_sublote,max_val_conjunto, max_val_conjunto_sub, max_val_conjunto_sub_position, min_sublote;
    int total_sublotes, contador;   
    avg_sublote=sum_sublote=total_sublotes=contador=max_val_conjunto=max_val_conjunto_sub= min_sublote=max_val_conjunto_sub_position= min_sublote= 0;  
    cin>>num;
    
    while(num>=0){
        if(num==0){
            total_sublotes++;
            if (contador!=0){
            avg_sublote=sum_sublote/contador;
            cout<<"El promedio del sublote "<< total_sublotes <<" es "<< avg_sublote << endl;
            cout<<"El valor minimo del sublote es "<< min_sublote<<endl;
            sum_sublote = contador = min_sublote= 0;
            }
        }else{
            contador++;
            if(max_val_conjunto==0) max_val_conjunto=num;
            if(min_sublote==0) min_sublote=num; 
            //  a) promedio de valores de sublote
            sum_sublote+=num;
            // Valor max conjunto, sublote y posicion dentro del sublote
            if(max_val_conjunto<=num) {
                max_val_conjunto=num;
                max_val_conjunto_sub = total_sublotes;
                max_val_conjunto_sub_position = contador-1;
                // Minimo valor del sublote
            }if (min_sublote>num) min_sublote=num;
            }
        cin>>num;
        
    }
    if(total_sublotes==0){
        cout<<"El promedio del lote "<< sum_sublote/contador << endl;
        cout<<"El valor minimo del lote "<< min_sublote <<endl;
    }
    cout<<"El total de sublotes procesados es "<< total_sublotes << endl;
    cout<<"El valor maximo del conjunto es " << max_val_conjunto <<" en el sublote "<< max_val_conjunto_sub  << " y en la posicion del sublote "<< max_val_conjunto_sub_position << endl;
    system("pause");
}

// void ej24(){
//     float num, avg_sublote, sum_sublote,max_val_conjunto, max_val_sub, max_val_sub_position, min_sublote, max_sublote;
//     int n_sublote, total_sublotes, contador;
//     bool first_val_sublote = true;
//     total_sublotes=0;
//     cin>>num;
//     max_val_conjunto=num;

//     while(num>=0){
//         sum_sublote=contador=0;
//         min_sublote=num;

//         while (num!=0){
//         // a) promedio de valores de sublote
//         sum_sublote+=num;
//         contador++;
//         // Valor max conjunto, sublote y posicion dentro del sublote
//         if(max_val_conjunto<num) {
//             max_val_conjunto=num;
//             max_val_sub = total_sublotes+1;
//             max_val_sub_position = contador;
//             // Minimo valor del sublote
//         }if (min_sublote>num) min_sublote=num;
//         cin>>num;
//         }

//         avg_sublote=sum_sublote/contador;
//         // b) total sublotes procesados
//         total_sublotes++;
//         cout<<"El promedio del sublote "<< total_sublotes<<" es "<< avg_sublote << endl;
//         cout<<"El valor minimo del sublote es "<< min_sublote<<endl;
//         cin>>num;
        
//     }
//     cout<<"El total de lotes procesados es "<< total_sublotes << endl;
// }

void ej23_flags(){
    float maxneg, minpos, minrang, sumval, num, c;
    bool first_maxneg, first_minpos, first_ramge;
    first_maxneg=first_minpos=first_ramge=true;
    c= 0;
    sumval=0;
    cout<<"Ingrese un valor"<< endl;
    cin>>num;
    while(num!=0){
        if (num<0){
            if (first_maxneg){
                maxneg=num;
                first_maxneg=false;
            }else if (maxneg>num) maxneg=num; 
        }
        if (num>0){
            if (first_minpos) {
                minpos=num;
                first_minpos=false;
            }else if (minpos>num) minpos=num; 
        } 
        if (num>-17.3 && num<26. ){
            if (first_ramge) {
                minrang=num;
                first_ramge=false;
            }else if (minrang>num) minrang=num; 
        } 
        sumval+=num;
        cout<<"/nIngrese otro valor"<<endl;
        c++;
        cin>>num;
    }
    if (first_maxneg) cout<<"No ingreso valores negativos"<<endl; else cout <<"negativo max: "<< maxneg <<endl;
    if (first_minpos) cout << "No ingreso valores positivos"<<endl; else cout <<"minimo positivo: "<< minpos <<endl;
    if (minrang==0) cout << "No ingreso valores dentro del rango"<<endl; else cout <<"minimo rango: "<< minrang<<endl;
    if (first_ramge) cout << "No ingreso valores"<<endl; else cout <<"promedio: "<<sumval/c <<endl;
}

void ej23(){
    float maxneg, minpos, minrang, sumval, num, c;
    maxneg= minpos= minrang= sumval= num= c= 0;
    cout<<"Ingrese un valor"<<endl;
    cin>>num;
    while(num!=0){
        if (num<0 && (num>maxneg ||maxneg==0)) maxneg=num; 
        if (num>0 && (num<minpos|| minpos==0)) minpos =num;
        if ( ((num>-17.3 && num<26.9) && minrang==0) || (num>-17.3 && num<26.9)) minrang = num;
        sumval+=num;
        cout<<"/nIngrese otro valor"<<endl;
        cin>>num;
        c++;
    }
    if (maxneg==0) cout<<"No ingreso valores negativos"<<endl; else cout <<"negativo max: "<< maxneg <<endl;
    if (minpos==-0) cout << "No ingreso valores positivos"<<endl; else cout <<"minimo positivo: "<< minpos <<endl;
    if (minrang==0) cout << "No ingreso valores dentro del rango"<<endl; else cout <<"minimo rango: "<< minrang<<endl;
    if (c==0) cout << "No ingreso valores"<<endl; else cout <<"promedio: "<<sumval/c <<endl;
}


void ej22(){ //Oye... y si lo matamos... ESTOY CASAOOOOOOOOO (https://www.youtube.com/watch?v=M_LI6y9OMNg)
    int fecha, maxnum, minnum;
    string namemax, namemin, name;
    for (int i=0; name!="FIN"; i++ ){  //esta mal usar un for asi pero soy muy pajero para cambiar a la estructura por un while :D
        cout<<"Introduce el nombre: "<<endl;
        cin>>name;
        if (name=="FIN") break; // ME hinche la pistola de estos ejercicios asi que la voy a manquear :D (SEPAN PERDONAR MI CODIGO FIERO FIERO)
        cout<<"Introduce las fecha AAAAMMDD: "<<endl;
        cin>>fecha; 
        if(i==0){  
            maxnum=minnum=fecha; 
            namemax=namemin=name; 
        }
        if (fecha>maxnum)  
        {
            maxnum=fecha; 
            namemax=name; 
        }else if (fecha<minnum)  
        {
            minnum=fecha; 
            namemin=name;
        }
    }
    cout<<"el mas VIEJARDO es: "<<namemax<<"\n y fue parido:  "<<maxnum<<endl;
    cout<<"el mas PENDEX es: "<<namemin<<"\n en la posicion:  "<<minnum<<endl;
}

void ej21(){
    int n, ninput, posmax, posmin, maxnum, minnum;
    cout<<"Introduce la cantidad de numeros a ingresar: ";
    cin>>n; 
    cout<<"Introduce los numeros."<<endl;
    for (int i=0; i<n; i++){  
        cin>>ninput; 
        if(i==0){  
            maxnum=minnum=ninput; 
            posmax=posmin=i; 
        }
        if (ninput>maxnum)  
        {
            maxnum=ninput; 
            posmax=i; 
        }else if (ninput<minnum)  
        {
            minnum=ninput; 
            posmin=i;
        }
    }
    cout<<"el numero mas grande es: "<<maxnum<<"\n en la posicion:  "<<posmax<<endl;
    cout<<"el numero mas chico es: "<<minnum<<"\n en la posicion:  "<<posmin<<endl;
}

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
    int n,m, res, min_val, max_val;
    res=0;
    cout<<"ingresar n y m: ";
    cin>>n>>m;
    if (n<m){
        min_val=n;
        max_val =m;
    } else{
        min_val=m;
        max_val = n;
    }
    for(int i=0; i<min_val;i++){
        res+=max_val;
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