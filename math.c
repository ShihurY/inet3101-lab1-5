#include <stdio.h>
#include "mathheader.h"

int main() {
    printf("Adding and Subtracting Program\n");

    int x = addTwoInts(4,5);
    int y = subtractTwoInts(5,4);

    printf("4 + 5 = %d\n", x);
    printf("5 - 4 = %d\n", y);

    return 0;
}