#include "hlpr.hpp"
#include<cstdio>

using namespace std;
using namespace hlpr;

void n_len_test(){
    int n=133;
    printf("%d",n_len(n));
}

void n_space_test(){
    printf("'");
    n_space(1);
    printf("'");
}

int main(){
    n_len_test();
    n_space_test();
    return 0;
}