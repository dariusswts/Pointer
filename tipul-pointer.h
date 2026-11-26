#ifndef TIPUL-POINTER_H_INCLUDED
#define TIPUL-POINTER_H_INCLUDED
#include <iostream>

using namespace std;



void declarari(){
    int x=10;
    int* p=&x;
    cout<<"p= "<<p<<" &x = "<<&x<<endl;
    cout<<"p == &x: "<<(p==&x)<<endl;

///2
    double d=2.5;
    double* pd=&d;

    cout<<"sizeof(d)= "<<sizeof(d);
    cout<<"sizeof(pd)= "<<sizeof(pd)<<endl;
///3
    int* q=nullptr;
    cout<<"q==nullptr: "<<(q==nullptr)<<endl;

    int* a,b;
    a=&x;
    b=3;
    cout<<"sizeof(a)= "<<sizeof(a)<<endl;
    cout<<"sizeof(b)= "<<sizeof(b)<<endl;

}












#endif // TIPUL-POINTER_H_INCLUDED
