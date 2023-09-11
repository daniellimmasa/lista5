#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("digite os coeficientes da equacao de segundo grau (a, b e c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("nao é uma equacao de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("nao existe raiz real.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("raiz unica: x = %.2lf\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("duas raizes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
        }
    }

    return 0;
}
