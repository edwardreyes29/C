/* Edward Reyes <www.edwardtreyes.com> */
/*
    Exercise 2-5
*/
#include <stdio.h>
#include <ctype.h>

int any(char s1[], char s2[]);

int main() {
    int location;
    char name1[] = "Edward Tuazon Reyes";
    char name2[] = "Lian Grospe Ferreras";

    location = any(name1, name2);
    printf("Location: %d\n", location);
}

/* squeeze: returns locations of first character in string s1 that is also in string s2 */
int any(char s1[], char s2[]) {
    int i, j;
    char lower1, lower2;
    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] !='\0'; ++j) {
            if (tolower(s1[i]) == tolower(s2[j]) && s1[i] != ' ') {
                    return j;
            }
        }
    }
    return -1; // if no character is found in s2
}