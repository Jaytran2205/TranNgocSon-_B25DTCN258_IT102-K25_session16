#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Tran Ngoc Son";
    char ch;
    int count = 0;
    int i;

    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);

    return 0;
}

