#include <stdio.h>

int main() {
    int i = 0;

    loop_start:

    if (i < 5) {
        printf("%d ", i);
        i++;
        goto loop_start;  // Jump back to the 'loop_start' label
    }

    return 0;
}