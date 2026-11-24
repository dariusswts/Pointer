#ifndef TIPUL-POINTER_H_INCLUDED
#define TIPUL-POINTER_H_INCLUDED
#include <iostream>

using namespace std;



void declarari(){
    int x=10;
    int* p=&x;
    cout<<"p= "<<p<<" &x = "<<&x<<endl;
    cout<<"p == &x: "<<(p==&x)<<endl;

}










#endif // TIPUL-POINTER_H_INCLUDED
