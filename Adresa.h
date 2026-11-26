#ifndef CERINTE_H_INCLUDED
#define CERINTE_H_INCLUDED
#include <iostream>

using namespace std;


/*
1 · Adresa unei variabile
Fișier: adresa.h · Concepte noi: operatorul & (adresa) · sizeof · adresă afișată ca (void*)
Faci:
1. void afiseazaAdrese() : declari int a = 7; , double d = 2.5; , char c = 'x'; . Pentru fiecare afișezi o linie:
valoarea, adresa cu & și sizeof , în forma de mai jos. La c adresa o scrii (void*)&c (fără (void*) , cout ar
afișa text, nu adresă). Exemplu de adaptat: EXEMPLE.pdf, 1.
2. void adreseVector(int v[], int n) : pentru fiecare i afișezi linia v[i] = valoarea &v[i] = adresa .
3. În main : afiseazaAdrese(); , apoi int v1[5] = {3, 1, 4, 1, 5}; și adreseVector(v1, 5); .
Gata când:
a = 7 &a = 0x16b6aa01c sizeof(a) = 4
d = 2.5 &d = 0x16b6aa010 sizeof(d) = 8
c = x &c = 0x16b6aa00f sizeof(c) = 1
v[0] = 3 &v[0] = 0x16b6aa370
v[1] = 1 &v[1] = 0x16b6aa374
... (v[4] = 5 &v[4] = 0x16b6aa380)
Adresele tale sunt altele. Se verifică: sizeof = 4, 8, 1; adresele celor 5 elemente cresc, fiecare cu 4 față de precedenta
(ultimele cifre hex ale lui v[1] sunt cu 4 mai mari decât ale lui v[0] etc.).

*/

void afiseazaAdrese(){
    int a=7;
    double d=2.5;
    char c='x';

    cout<<"a= "<<a<<" &a= "<<&a<<" sizeof(a)= "<<sizeof(a)<<endl;
    cout<<"d= "<<d<<" &d= "<<&d<<" sizeof(d)= "<<sizeof(d)<<endl;
    cout<<"c= "<<c<<" &c= "<<&c<<"(void*)&c= "<<(void*)&c<<" sizeof(c)= "<<sizeof(c);


}

void adreseVector(int v[],int n){
    cout<<v<<endl;
    cout<<&v[0]<<endl;
    cout<<sizeof(v)<<endl;
    for(int i=0;i<n;i++){
        cout<<"v["<<i<<"] = "<<v[i];
        cout<<" &v["<<i<<"] = "<<&v[i]<<endl;
    }

}

void valoareLaAdresa(int v[],int n){
    int a=7;
    cout<<"*&a= "<<*&a<<endl;
    *&a=20;
    cout<<"dupa *&a = 20: a = "<<a<<endl;
    cout<<"*&v[2]= "<<*&v[2]<<endl;

}


void urmarire1_1(){
    int a = 5;
    *&a = *&a + 3;
    cout << a;

    ///a=5
    ///*&a = *&a + 3  ==  *&a=5+3=8
    ///adiseaza 8;

}


void urmarire1_2(){

    int a = 4, b = 9;
    *&a = b;  ///*&a=b   a=4   b=9  => a=9
    *&b = 1;  ///*&b=1   b=9 => b=1;
    cout << a << " " << b; //afisaeaza 9 1 ;

}

void urmarire1_3(){
    int v[4] = {2, 4, 6, 8}; ///*&v[1]=4; *&v[3]=8;  *&v[0]=2;
    *&v[1] = *&v[3] - *&v[0];  ///*&v[1] = *&v[3] - *&v[0];  ==  v[1]=8-2 v[1]=6
    cout << v[1]; ///afiseaza 6;

}


void urmarire1_4(){

   int x = 3;  ///int=4 biti
   double y = 1.5;  ///double=8 biti
   char z = 'q'; /// char =1 bit
   cout << sizeof(x) + sizeof(y) + sizeof(z); /// afisare 4+8+1 = 13
}


void urmarire1_5(){
    int v[5] = {0}; /// vectorul are 5 elemente
    cout << sizeof(v) << " " << sizeof(v[0]);  /// afisare 5*4=20  si 4
}

void urmarire1_6(){
    int a = 2; /// a=2
    *&a = *&a * *&a; /// a= 2*2 a=4
    *&a = *&a + 1;  /// a=4+1 a=5
    cout << a; /// afisare 5
}


void urmarire1_7(){

}




#endif // CERINTE_H_INCLUDED
