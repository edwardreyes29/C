#include <stdio.h>

int lower(int c);

int main() {
    char char1 = 'A';
    char char2 = '%';
    char char3 = 'Z';
    char char4 = 'd';

    printf("%c\n",lower(char1));
    printf("%c\n",lower(char2));
    printf("%c\n",lower(char3));
    printf("%c\n",lower(char4));
}

/* lower: convert c to lower case; ASCII only */
int lower(int c) {
    if (c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    }

    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;      
}