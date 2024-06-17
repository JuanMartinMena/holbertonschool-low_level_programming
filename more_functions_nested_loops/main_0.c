#include <stdio.h>
#include "main.h"

int main(void) {
    char c;

    for (c = 'A'; c <= 'z'; c++) {
        printf("%c: %d\n", c, _isupper(c));
    }

    return 0;
}

