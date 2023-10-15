#include<iostream>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;

class A{
    public:
    void print(){
        cout<<"function of class A."<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"function of class B."<<endl;
    }
};
class C:public B{
    public:
    void show(){
        cout<<"function of class C."<<endl;
    }
};

int main(){
    _clrscr();
    C obj;
    obj.print();
    obj.display();
    obj.show();
    return 0;
}