#include<cstdlib>
#include<cstdio>

namespace hlpr {

    #define _endl printf("\n")
    #ifdef _WIN32
        void _clrscr(){
            std::system("cls");
        }
        void _getch(){
            std::system("pause");
        }
        #else
        void _clrscr(){
            std::system("clear");
        }
        void _getch(){
            std::system("read");
        }
    #endif

    int n_len(int n){
        int len=0;
        while(n > 0){
            n /= 10;
            len ++;
        }
        return len;
    }

    void n_space(int n){
        while(n--){
            printf(" ");
        }
    }
}