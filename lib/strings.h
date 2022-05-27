typedef struct strings {
    char note;
    int octave;
} string_t;

string_t* chromStrings(int numStrings);
void playString(string_t someString);