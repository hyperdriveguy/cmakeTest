#include "harp.h"

harp_t newHarp(){
    harp_t someHarp = {.allStrings=chromStrings(12), .player="Handel"};
    return someHarp;
}

void playHarp(harp_t someHarp){
    for (int i = 0; i < 12; i++){
        playString(someHarp.allStrings[i]);
    }
}