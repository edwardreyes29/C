#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main() {
    char name[] = "Edward Reyes";
    reverse(name);
    printf("%s\n", name);
}

/* reverse; reverse string s in place */
void reverse(char s[]) {
    int temp, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}