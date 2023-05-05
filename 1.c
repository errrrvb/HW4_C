#include <stdio.h>

int main () {
    int m,y;
    int ans;
    scanf("%d%d", &m, &y);
    if (m == 11 || m == 9 || m == 6 || m == 4) { // месяца с 30 днями 
        ans = 30;
    }
    else if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) { // формула вычисления високосного года
            ans = 29;
        } else {
            ans = 28;
        }
    
    } else { // для всех остальных месяцев
        ans = 31;
    }
    printf("%d", ans);
    return 0;
}