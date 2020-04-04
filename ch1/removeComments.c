/* Edward Reyes <edwardtreyes.com> */

/*/
    Exercise 1-19: Remove C comments

    This program reads a .c file and removes all comments
    before outputting it's contents. I've used two states
    IN and OUT to determine if the current character is
    within a comment.

    It works for most single line and multi-line 
    commnets. However when comments contain multiple
    asterisks (*) or forward slashes (/) it has
    unexpected results, such as the next line not appearing
    or left over characters from the removed comment being
    present.
*/
#include <stdio.h>

#define MAXLINE 1000
#define SINGLECOMMENT 2
#define MULTICOMMENT 4
#define IN 1    /* in a comment */
#define OUT 0   /* out of a comment */

void removeComments(char str[], int lim);


int main(void)
{
    int len;
    char line[MAXLINE];
    removeComments(line, MAXLINE);
    putchar('\n');

    return 0;
}

void removeComments(char str[], int lim)
{
    int c, i, j, singleCount, multiCount, state;
    i = j = singleCount = multiCount = 0;
    
    state = OUT;
    while ((c = getchar()) != EOF && c != '\0')
    {
        if (c == '/') {
            state = IN;
            ++singleCount;
            ++multiCount;

            if (singleCount % SINGLECOMMENT == 0){
                singleCount = 0;
                multiCount = 0;
                
            } else if (multiCount % MULTICOMMENT == 0) {
                multiCount = 0;
                singleCount = 0;
            }

            
        } else if (c == '*' && state == IN) {
            ++multiCount;
            singleCount = 0;
        }
        else if (c == '\n' && multiCount < 1 && singleCount < 1) {
            putchar(c);
                state = OUT;
        }
        else {
            if ((multiCount < 1) && (singleCount < 1) && (state == OUT)) {
                putchar(c);
            }
                
        }
    }
}

