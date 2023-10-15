// Keep calculating the sum of digits until the input digit is single digit

#include<cstdlib>
#include "hlpr.hpp"

using namespace std;
using namespace hlpr;
int main(){
    hlpr::_clrscr();
    int num=0, sum = 0;
    while(1){
        hlpr::_clrscr();
        printf("\t Sum Calculator\n");
        printf("sum : %d\n>> ", sum);
        scanf("%d", &num);
        if(num < 10) break;
        sum += num;
    }
    hlpr::_clrscr();
    printf("SUM : %d", sum);
    return 0;
}