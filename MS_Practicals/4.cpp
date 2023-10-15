#include<cstdlib>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;
int main(){
    _clrscr();
    char str[20];
    int isNumeric = 1;
    int pointCount = 0;
    printf("num : ");
    scanf("%[^\n]%*c", str);
    
    for(int i=0; str[i] != '\0'; i++){
        // printf("%c : %d\n", str[i], (int) str[i]);
        int code = (int) str[i];

        if(code == 46) {// checking for decimal point
            if(pointCount == 1) { // for twice decimal point e.g. 1.2.3
                isNumeric = 0;
                break;
            }
            pointCount = 1;
            continue;
        };
        if(code < 48 || code > 57){
            isNumeric = 0;
            break;
        }
    }

    printf("The input string is %snumeric ", (isNumeric ? "" : "not "));

    return 0;
}