#include <stdio.h>
#include <string.h>

void shellsort(int v[], int n);

int main() {
    int numbers[] = {5,6,7,3,2,4,6,8,9,6,4,3,212,3,4,5};

    shellsort(numbers, 16);
    int i;
    printf("{");
    for (i = 0; i < 16; i++) {
        if (16 - i == 1) {
            printf("%d", numbers[i]);
        }
        else {
            printf("%d, ", numbers[i]);
        }
    }    
    printf("}\n");

}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}