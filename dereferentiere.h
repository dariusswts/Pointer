#ifndef DEREFERENTIERE_H_INCLUDED
#define DEREFERENTIERE_H_INCLUDED
#include <iostream>
using namespace std;

void prinPointer(){
    int x=5;  /// x=5
    int* p=&x;  /// p=adresa lui x

    *p=*p+10;  ///  x devine
    cout<<"x= "<<x<<endl;  ///afisare 15

    int *q=p;  ///declaram inca un pointer *q=p
    *q=100; ///*q=100
    cout<<"x = "<<x<<" *p= "<<*p<<endl;  ///afisare x=15 si p=15

    int y=3;
    p=&y;  ///p= adresa lui y;
    *p=0;  ///
    cout<<"x = "<<x<<" y= "<<y<<endl;
}

void afiseazaSigur(int* p){
    if(p==nullptr){
        cout<<"pointer nul "<<endl;
    }
    else{
        cout<<*p<<endl;
    }
}


#endif // DEREFERENTIERE_H_INCLUDED
