//23/09/2021 comentario exemplo
#include <stdio.h>

int resto_divisao(int n1, int n2){
    int resto = 0;
    if(n1>n2)
        resto = n1%n2;
    else
        resto = n2%n1;
    return resto;
}

int main()
{
    int num1, num2, resto;
    printf("Digite os números :");
    scanf("%d,%d", &num1, &num2);
    resto = resto_divisao(num1, num2);
    while (resto != 0){
        num1 = num2;
        num2 = resto;
        resto = resto_divisao(num1, num2);
    }
    printf("O divisor da divisão exata é %d", num2);
    printf("\nO resto %d", resto);
    return 0;
}
