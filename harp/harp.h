#include "strings.h"

typedef struct harps
{
    string_t *allStrings;
    char *player;
} harp_t;

harp_t newHarp();
void playHarp(harp_t someHarp);