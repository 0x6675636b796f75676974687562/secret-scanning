#include <stdio.h>

static const char * const password0 = "Password1234";

static const char password1[] = {
    'P',
    'a',
    's',
    's',
    'w',
    'o',
    'r',
    'd',
    '1',
    '2',
    '3',
    '4',
    '\0',
};

static const char password2[] = {
    [12] = '\0',

    [8] = '1',
    [9] = '2',
    [10] = '3',
    [11] = '4',

    [0] = 'P',
    [1] = 'a',
    [2] = 's',
    [3] = 's',
    [4] = 'w',
    [5] = 'o',
    [6] = 'r',
    [7] = 'd',
};

int main() {
    printf("(A) %s\n", password0);
    printf("(B) %s\n", password1);
    printf("(C) %s\n", password2);
    return 0;
}
