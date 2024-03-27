#include <stdio.h>

int main() {
    int num[5];
    float sum = 0;

    printf("Введите 5 целых ненулевых чисел через пробел: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    float avr = sum / 5;
    printf("Среднее арифметическое: %.3f\n", avr);

    return 0;
}
