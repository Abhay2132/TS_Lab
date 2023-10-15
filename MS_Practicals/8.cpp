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


int main(){
    _clrscr();
    B obj;
    obj.print();
    obj.display();
    return 0;
}