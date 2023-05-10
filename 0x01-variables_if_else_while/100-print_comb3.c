#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar('0' + i);
            putchar('0' + j);
            if (i < 8 || j < 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}
