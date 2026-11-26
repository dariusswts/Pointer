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

void urmarire2_1(){
    int x = 10;  ///x=10
    int* p = &x; ///  p=adresa lui x
    cout << (p == &x);  /// adevarat afiseqaza 1
}

void urmarire2_2(){
    int x = 10, y = 10; ///x=10 y=10
    int* p = &x; /// p= adresa lui x
    cout << (p == &y); /// fals adresele lui x si y sunt diferite  afiseqaza 0
}

void urmarire2_3(){
    int x = 1, y = 2; ///x=1 y=2
    int* p = &x; ///p = adresa lui x
    int* q = &y; ///q = adresa lui y
    p = q; ///p=&y
    cout << (p == &x) << (p == &y); /// prima afirmatie este false a doua este adev afisare 01
}

void urmarire2_4(){
    int* p = nullptr; /// p=nullptr
    int x = 5; ///x=5
    cout << (p == nullptr); /// afisare 1 adevarat
    p = &x; ///p= adresa lui x
    cout << (p == nullptr);/// afisare 0 fals p este adresa lui x nu mai e null;

}

void urmarire2_5(){
    int* a, b;  /// a-pointer b-int
    b = 7;
    cout << sizeof(a) << " " << sizeof(b) << " " << b;/// afisare 8 " " 4 " " 7 == 8 4 7
}

void urmarire2_6(){
    int *a, *b; /// a-pointer=8biti b-pointer=8biti
    cout << sizeof(a) + sizeof(b);///afisare 8+8=16 afisare 16
}












#endif // TIPUL-POINTER_H_INCLUDED
