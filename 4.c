#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("-"); // Если число отрицательное, выводим на экран знак "-"
        n = -n; // делаем число положительным, чтобы можно было вывести его двоичное представление
    }

    int binary[32], i = 0; // Объявляем массив для хранения двоичного представления числа и переменную для хранения индекса в массиве

    while (n > 0) { 
        binary[i] = n % 2; // Остаток от деления на 2 добавляем в массив
        n /= 2; // Делаем число меньше на разряд
        i++;
    }

    if (i == 0) { 
        printf("0\n"); // Выводим на экран только 0
    } else { 
        for (int j = i - 1; j >= 0; j--) { // Выводим двоичное представление числа в обратном порядке
            printf("%d", binary[j]);
        }
        printf("\n"); 
    }

    return 0; 
}
