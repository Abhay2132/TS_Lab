#include<iostream>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;
class A{
    public:
    void print(){
        cout<<"print function of class A."<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"display function of class B."<<endl;
    }
};
class C:public A, public B{
    public:
    void show(){
        cout<<"show function of class C."<<endl;
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