#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

string_t* chromStrings(int numStrings){
    string_t* outStrings = malloc (sizeof (string_t) * numStrings);

    char firstNote = 'A';
    char currNote = 'A';
    char lastNote = 'G';
    int octstart = 1;

    for (int i = 0; i < numStrings; i++){
        string_t tempString = {.note=currNote, .octave=octstart};
        currNote++;
        if (currNote > lastNote){
            currNote = firstNote;
            octstart++;
        }
        outStrings[i] = tempString;
    }

    return outStrings;
}

void playString(string_t someString){
    printf("%c%d\n", someString.note, someString.octave);
}