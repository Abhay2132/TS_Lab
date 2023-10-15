#include<iostream>
#include<string>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;

class MCA{
    public:
    string student_name;
    int roll_no,marks;
    void studentInfo(){
        cout<<"\nStudent Details \n";
        cout<<"Name     : "<<student_name<<endl;
        cout<<"Roll No. : "<<roll_no<<endl;
        cout<<"Marks    : "<<marks<<endl;
    }
};

int main(){
    _clrscr();
    MCA s1;
    cout<<"Student Entry :- \n";
    cout<<"Name     : ";
    cin>>s1.student_name;
    cout<<"roll no. : ";
    cin>>s1.roll_no;
    cout<<"marks    : ";
    cin>>s1.marks;
    s1.studentInfo();
    return 0;
}