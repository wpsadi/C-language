#include <stdio.h>

void ato() {
    auto int x = 10; 
    printf("Auto Variable: %d\n", x);
}

void stac() {
    static int y = 50;
    printf("Static Variable: %d\n", y);
    y++;
}

int main() {
    ato();
    stac();
    ato();
    stac();

    return 0;
}
