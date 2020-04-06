/* Edward Reyes <www.edwardtreyes.com> */
/*
    Exercise 2-4
    This program removes all characters in the first string that 
    are also present in the second string.
*/
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
    char name1[] = "Edward Tuazon Reyes";
    char name2[] = "Lian Grospe Ferreras";

    squeeze(name1, name2);
    printf("%s\n", name1);
}

/* squeeze: deletes each character in string s1 that matches any character in string s2 */
void squeeze(char s1[], char s2[]) {
    int i, j, k;

    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] !='\0'; ++j) {
            if (s1[i] == s2[j]) {
                // move all characters to 1 position
                if (s1[i] != ' ') {
                    k = i+1;
                    for (; s1[k] != '\0'; ++k){
                        s1[k-1] = s1[k];
                    }
                    s1[k-1] = '\0';
                }
            }
        }
    }
}