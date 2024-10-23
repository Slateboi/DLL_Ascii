#include <stdio.h>
#include <stdlib.h>
#include "Ascii.h"

void init(head *h){
    *h = NULL;
    return;
}

void add_ascii(head *h, int key){
    node *nn = (node*)malloc(sizeof(node));
    if(nn){
        nn->key = key;
        nn->next = NULL;
        nn->prev = NULL;
    }
    else{
        return;
    }
    if(*h == NULL){
        *h = nn;
        return;
    }
    nn->next = *h;
    (*h)->prev = nn;
    *h = nn;
    return;
}

void display(head h){
    node *p = h;
    int ascii = 0;
    while(p != NULL){
        ascii = ascii * 10 + p->key;
    }
    printf("\n%d", ascii);
    return;
}
