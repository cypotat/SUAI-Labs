// Ввести три целых числа. Вычислить и вывести произведение первого и второго числа

#include <stdio.h>

void main() {
    float a, b, c;
    printf("Input a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("c * b / a = %f\n", c * b / a);
}