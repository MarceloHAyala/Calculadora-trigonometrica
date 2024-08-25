#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    int opcao;
    double angulo, resultado, grau;

    do {
        printf("\n\33[33mEscolha a operacao desejada:\33[0m\n");
        printf("\33[36m1 - Seno\n");
        printf("2 - Cosseno\n");
        printf("3 - Tangente\n");
        printf("4 - Secante\n");
        printf("5 - Cossecante\n");
        printf("6 - Cotangente\n");
        printf("7 - Arco Seno\n");
        printf("8 - Arco Cosseno\n");
        printf("9 - Arco Tangente\n");
        printf("0 - Sair\n");

        printf("Opcao: \33[0m");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = sin(angulo);
                    printf("\33[36mSeno: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = sin(angulo);
                    printf("\33[36mSeno: %.4lf\33[0m\n", resultado);
                }
                break;

            case 2:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = cos(angulo);
                    printf("\33[36mCosseno: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = cos(angulo);
                    printf("\33[36mCosseno: %.4lf\33[0m\n", resultado);
                }
                break;

            case 3:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = tan(angulo);
                    printf("\33[36mTangente: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = tan(angulo);
                    printf("\33[36mTangente: %.4lf\33[0m\n", resultado);
                }
                break;

            case 4:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\n\33[0m");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = 1 / cos(angulo);
                    printf("\33[36mSecante: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = 1 / cos(angulo);
                    printf("\33[36mSecante: %.4lf\33[0m\n", resultado);
                }
                break;

            case 5:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = 1 / sin(angulo);
                    printf("\33[36mCossecante: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = 1 / sin(angulo);
                    printf("\33[36mCossecante: %.4lf\33[0m\n", resultado);
                }
                break;

            case 6:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = 1 / tan(angulo);
                    printf("\33[36mCotangente: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = 1 / tan(angulo);
                    printf("\33[36mCotangente: %.4lf\33[0m\n", resultado);
                }
                break;

            case 7:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = asin(angulo);
                    printf("\33[36mArco Seno: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = asin(angulo);
                    printf("\33[36mArco Seno: %.4lf\33[0m\n", resultado);
                }
                break;

            case 8:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = acos(angulo);
                    printf("\33[36mArco Cosseno: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = acos(angulo);
                    printf("\33[36mArco Cosseno: %.4lf\33[0m\n", resultado);
                }
                break;

            case 9:
                printf("\33[36mO dado sera dado em:\n");
                printf("10 - radianos\n");
                printf("11 - graus\33[0m\n");
                scanf("%lf", &grau);
                while (grau != 10 && grau != 11) {
                    printf("\33[31mValor invalido, tente novamente:\33[0m\n");
                    scanf("%lf", &grau);
                }
                if (grau == 10) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    resultado = atan(angulo);
                    printf("\33[36mArco Tangente: %.4lf\33[0m\n", resultado);
                }
                if (grau == 11) {
                    printf("\33[36mDigite o valor: \33[0m");
                    scanf("%lf", &angulo);
                    angulo = angulo * (M_PI / 180);
                    resultado = atan(angulo);
                    printf("\33[36mArco Tangente: %.4lf\33[0m\n", resultado);
                }
                break;

            case 0:
                printf("\33[31mSaindo...\33[0m\n");
                break;
            default:
                printf("\33[31mOpcao invalida!\33[0m\n");
        }
    } while (opcao != 0);

    return 0;
}
