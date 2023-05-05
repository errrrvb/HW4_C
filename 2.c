#include <stdio.h>

int main() {
    int n, k, i, j, day = 1;
    scanf("%d%d", &n, &k);

    for (i = 1; i <= 6; i++) { 
        for (j = 1; j <= 7; j++) { // 7 дней в неделе
            if (i == 1 && j < n) { // пустые позиции в первой строке
                printf("   ");
            } else if (day <= k) { // вывод чисел месяца
                printf("%2d ", day);
                day++;
            } else { // пустые позиции после окончания месяца
                printf("   ");
            }
        }
        printf("\n");
        if (day > k) { // выход из цикла после окончания месяца
            break;
        }
    }

    return 0;
}
