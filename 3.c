#include <stdio.h>
#include <string.h>

int main () {
    char password[101];
    int count = 0;
    int l = 0;
    int L = 0;
    int symbol = 0;
    scanf("%s", password);
    if ((strlen(password) < 8) || (strlen(password) > 14) ) { // Длина пароля должна быть больше 8 и меньше 14 символов
        printf("Invalid data");
        return 0;
    } else {
            int p = strlen(password);
            for (int i = 0; i < p; i++) {
                if ((password[i] < 33) || password[i] > 126) {  // Проверка на требуемый диапазон ASCII
                    continue;
                }
                if ((password[i] >= '0') && (password[i] <= '9')) { // Проверка на наличие цифр в пароле
                    count = 1;
                }
                if ((password[i] >= 33) && (password[i] <= 126)) { // Проверка на наличие любого другого символа в пароле
                    symbol = 1;
                }
                if((password[i] >= 'A') && (password[i] <= 'Z')) { // Проверка на наличие заглавных букв
                    L = 1;
                }
                if(password[i] >= 'a' && password[i] <= 'z') { // Проверка на наличие прописных букв
                    l = 1;
                }
            }
            if (count+symbol+l+L >= 3) { // Проверка на достаточность нужных требований
                printf("YES");
            } else {
                printf("NO");
            }
        }
    
    return 0;
}


// Пример того, как работает таблица ASCII

// int specialChars;

// for(specialChars = 33; specialChars < 126; specialChars++) {
    // printf("\n\tThe equivalent ASCII for %c special character is %d", specialChars,specialChars);    Вывод всех значений в диапазоне от 33 до 126
// }