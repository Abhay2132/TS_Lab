// reverse a number
#include<cstdlib>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;
int main(){
    _clrscr();
    int n, rn=0;
    printf("num     : ");
    scanf("%d", &n);
    while(n > 0){
        int rem = n%10;
        n /= 10;
        rn = rn * 10 + rem;
    }
    printf("Reverse : %d", rn);
    return 0;
}