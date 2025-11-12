#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("Chuoi sau khi viet hoa: %s\n", str);

    return 0;
}

