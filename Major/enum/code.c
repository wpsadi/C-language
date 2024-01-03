#include <stdio.h>

int main(){
    enum BOOLIA {Fax = 'a',Trax='b'};

    char gagan = Fax;
    printf("%c",gagan); //a
    return 0;
}