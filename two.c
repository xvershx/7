#include <stdio.h>

int main() {
    int num[5];

    printf("Введите 5 целых чисел через пробел: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &num[i]);
    }

    int min = num[0];
    for (int i = 1; i < 5; ++i) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Минимальное число: %d\n", min);

    return 0;
}
