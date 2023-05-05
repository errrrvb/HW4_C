#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int num;

    scanf("%d", &num);

    while (num != 0) { 
        sum += num;  // добавляем считанное число к сумме
        count++;  // увеличиваем счётчик чисел на 1
        scanf("%d", &num);
    }

    if (count == 0) {  // если не было введено ни одного числа кроме 0
        printf("0\n");
    } else { 
        printf("%lf", (double)sum / count); // "%lf" - форматная строка для вывода чисел с плавающей точкой

    }

    return 0;  // завершаем программу
}
