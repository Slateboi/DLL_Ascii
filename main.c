#include <stdio.h>
#include <stdlib.h>
#include "Ascii.h"

int main(){
    char c;
    head h;
    scanf("%c", &c);
    printf("hgh");
    int ascii = c;
    printf("%d", ascii);
    init(&h);
    while(ascii > 0){
        int num = ascii % 10;
        add_ascii(&h, num);
        ascii  = ascii / 10;
    }
    display(h);
}
