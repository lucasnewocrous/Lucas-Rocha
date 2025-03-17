#include <stdio.h>

int main() {
    int y = 5;
    int z = 11;
    int w;

    w = y + z;
    if (y > z) {
        w = y * z;
    }

    printf("%d\n", w);
    return 0;
}

// O valor de W = 16