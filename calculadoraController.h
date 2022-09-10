#ifndef CALCULADORA_CALCULADORACONTROLLER_H
#define CALCULADORA_CALCULADORACONTROLLER_H

#include <math.h>
#include <stdlib.h>

// Função para converter graus para radianos
//M_PI é uma constante da biblioteca Math.h, que retorna o valor de PI.
float toRad(double degree){
    return degree * M_PI / 180;
}

// Função para converter radianos para graus
float toDeg(double rad){
    return rad * 180 / M_PI;
}

void getPow() {
    double base, expoent;

    printf("\n========== POTENCIACAO ==========\n");
    printf("\n\t y");
    printf("\n\tX");
    printf("\nDigite o valor de X: ");
    scanf("%lf", &base);

    printf("\n\t y");
    printf("\n\t%.4lf", base);
    printf("\nDigite o valor de y: ");
    scanf("%lf", &expoent);

    printf("\n\t (y)%.4lf", expoent);
    printf("\n\t(X)%.4lf = %.4lf\n", base, pow(base, expoent));
}

void getSen(){
    double angle;

    printf("\n========== SENO ==========\n");
    printf("\nDigite o valor do angulo em RADIANOS: ");
    scanf("%lf", &angle);
    printf("\n%.4lf Radianos = %.4lf Graus", angle, toDeg(angle));
    printf("\nSENO(%.4lf Radianos / %.4lf Graus) = %.4lf\n", angle, toDeg(angle), sin(angle));
}

#endif //CALCULADORA_CALCULADORACONTROLLER_H
