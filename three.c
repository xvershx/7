#include <stdio.h>

void right(int arr[], int n, int k) {
    for (int i = 0; i < k; ++i) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int arr[12];

    printf("Введите 12 целых чисел через пробел: ");
    for (int i = 0; i < 12; ++i) {
        scanf("%d", &arr[i]);
    }

    right(arr, 12, 4);

    printf("Результат циклического сдвига вправо на 4 элемента: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
