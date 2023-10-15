// Create C++ program to print right angled pramid of number.

#include<cstdio>
#include "hlpr.hpp"

int main(){
    hlpr::_clrscr();
    int num;
    std::printf("\t\t Pyramid Generator");
    std::printf("\n Enter a Number :-");
    std::printf("\n >> ");
    std::scanf("%d", &num);
    for(int i=1; i<=num; i++){
        for(int j=0; j<i; j++){
            std::printf("%d", num);
        }
        std::printf("\n");
    }
    return 0;
}