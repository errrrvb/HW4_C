#include <stdio.h>

int main() {
    int n, num, zero = 0, plus = 0, min = 0;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &num); 
        if (num == 0) { // если число равно 0, увеличиваем счетчик нулей
            zero++;
        } else if (num > 0) { // если число больше 0, увеличиваем счетчик положительных чисел
            plus++;
        } else { // если число меньше 0, увеличиваем счетчик отрицательных чисел
            min++;
        }
    }
    printf("%d %d %d", zero, plus, min);
    return 0;
}
