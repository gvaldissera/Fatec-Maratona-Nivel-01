#include <stdio.h>

int main() {
    int i, X, Y, temporaria, soma_impares = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
  		temporaria = X;
        X = Y;
        Y = temporaria;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma_impares += i;
        }
    }

    printf("%d\n", soma_impares);

    return 0;
}
