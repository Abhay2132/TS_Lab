// Right Oriented Traingle
#include<cstdlib>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;
int main(){
    _clrscr();
    int size;
    printf("\n Size : ");
    scanf("%d", &size);
    for(int i=1; i<=size; i++){
        int gap = size - i;
        for(int j=1; j<=size; j++){
            if(j <= gap)
                n_space(n_len(size));
            else
                printf("%d", size);
        } 
        printf("\n");
    }
    return 0;
}