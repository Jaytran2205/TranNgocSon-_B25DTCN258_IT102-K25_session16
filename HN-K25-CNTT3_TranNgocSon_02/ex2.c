#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Nguyen Cao Nguyen";
    int i;

    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi la:\n");

    for (i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }

    printf("\n");
    return 0;
}

