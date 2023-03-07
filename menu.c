#include <stdio.h>
#include "menu.h"
#include "encrypter.h"
#include "decrypter.h"

__attribute__((unused)) void menu(void){
    int o;

    printf("Press (1+ENTER) for Encrypter\nPress (2+ENTER) for Decrypter\n");

    scanf("%d", &o);
    while (o != 1 && o != 2){
        printf("INVALID!\nPress (1+ENTER) for Encrypter\nPress (2+ENTER) for Decrypter\n");

        scanf("%d", &o);
    }

    if (o == 1){
        enc();
    }
    if (o == 2){
        dec();
    }
}