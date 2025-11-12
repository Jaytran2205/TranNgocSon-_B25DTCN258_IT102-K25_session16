#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;
    int i;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}

