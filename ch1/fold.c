/* Edward Reyes <edwardtreyes.com> */

/*
    Exercise 1-22 
    
*/
#include <stdio.h>

# define MAXLINE 1000       /* maximum input line size */
# define CHARLIMIT 70      /* maximum character per line */

int getLine(char to[], char from[], int lim);

int main() {
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char nline[MAXLINE];  /* line saved her */
    while ((len = getLine(nline, line, MAXLINE)) > 0 ) {
        printf("\n%s", line);
        putchar('\n');
    }
        

}

/* getLine: folds lines longer that CHARLIMIT */
int getLine(char to[], char from[],int lim) {
    int c, i, j, k, l, newlineCount;
    char temp[MAXLINE];
    i = j = k = l = newlineCount = 0;
    
    while(l < lim-1 && (c = getchar()) != EOF) {
        if (c == '\n') {
            ++newlineCount;
            if (newlineCount == 1 && c == '\n') {
                putchar('\n');
                newlineCount = 0;
            } else {
                c = ' ';
            }
        }
        if (k < CHARLIMIT) {
            from[i] = c;
            ++i;
            ++k;
            ++l;
        } 
        else if (k >= CHARLIMIT)    {
            --i;
            k = 0;
            /* Go backwards in the current array until you find a blank or tab */
            if (from[i] != ' ' && from[i] != '\t') {
                while((from[i] != ' ') && (from[i] != '\t')) {

                    temp[i] = from[i];
                    --i;
                    k++;
                }        
            }
            from[i] = '\n';
            // Place characters back from temp t from
            ++i;
            for (j = 0; j < k; ++j) {
                from[i] = temp[i];
                ++i;
            }
            k = 0;
            // add character to the new line.
            from[i] = c;
            ++i;
            ++l;
        }   
    }
    from[i] = '\0';   
    return l;
}