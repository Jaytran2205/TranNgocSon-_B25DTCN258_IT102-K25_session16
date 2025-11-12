#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;
    int i;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (strlen(str) > 0) {
        count = 1;
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
                count++;
            }
        }
    }

    printf("So tu trong chuoi la: %d\n", count);
    return 0;
}

