/* Edward Reyes
    Exercise 3-1
*/
#include <stdio.h>

/* find x in v[] */
int binsearch(int x, int v[], int n);

int main() {
    int var[] = {0,1,2,3,4,5,6,7,8,9};
	printf("%d\n", binsearch(8,var,10));
	return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n-1;

    while (low < high) {
        mid = (low+high)/2;
        if (x <= v[mid])
            high = mid;
        else 
            low = mid+1;
    }
    if (x == v[low])
        return low;
    else 
        return -1;
}