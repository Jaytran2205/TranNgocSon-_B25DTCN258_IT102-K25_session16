#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char chars[100];   
    int count[100];   
    int n = 0; 
	int i, j;     

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    for (i = 0; i < strlen(str); i++) {
        int found = 0;
        for (j = 0; j < n; j++) {
            if (chars[j] == str[i]) {
                count[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            chars[n] = str[i];
            count[n] = 1;
            n++;
        }
    }

    printf("\nKet qua:\n");
    for (i = 0; i < n; i++) {
        printf("%c: %d\n", chars[i], count[i]);
    }

    return 0;
}

