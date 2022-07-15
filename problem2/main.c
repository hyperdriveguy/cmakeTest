#include "harp/harp.h"

#include <stdio.h>

int main(){

    harp_t myHarp = newHarp();

    playHarp(myHarp);

    printf("Problem solved!\n"); 

    return 0;
}