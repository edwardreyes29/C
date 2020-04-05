#include <math.h>

unsigned long int next = 1;

int main() {
    
}

/* rand: return pseudo-random intger on 0...32767 */
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}
/* srand: sey seed for rand() */
int srand(unsigned int seed) {
    next = seed;
}