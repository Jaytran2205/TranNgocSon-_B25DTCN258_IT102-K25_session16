#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char str[] = "nguyen cao nguyen";
    int len = strlen(str);

    printf("Chuoi ban dau: %s\n", str);
    printf("Chuoi dao nguoc: ");

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

