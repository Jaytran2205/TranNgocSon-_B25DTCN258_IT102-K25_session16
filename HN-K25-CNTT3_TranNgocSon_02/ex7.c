#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int letters = 0, digits = 0, special = 0;
    int i;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } 
        else if (isdigit(str[i])) {
            digits++;
        } 
        else if (str[i] != ' ') {
            special++;
        }
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}

