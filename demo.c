#include <stdio.h>
#include <string.h>

void inputString(char str[], int size) {
    printf("Hay nhap chuoi ky tu: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int countCharacters(char str[]) {
    return strlen(str);
}

int countOccurrences(char str[], char character) {
    int count = 0;
    for (int i = 0; str[i] != '\0' ; i++) {
        if (str[i] == character) {
            count++;
        }
    }
    return count;
}

void everseString(char str[]) {
    printf("Chuoi da dao nguoc \n");
    for(int i = strlen(str)-1 ; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}

void printString(char str[]) {
    printf("%s",str);
    // fputs(str, stdout);
}
int main() {

    char str[100];
    char character;
    inputString(str, sizeof(str));
    countCharacters(str);
    printf("%d", countCharacters(str));
    printf("Hay nhap ky tu can tim: ");
    scanf("%c", &character);
    printf("So lan xuat hien cua ki tu %c la : %d \n", character, countOccurrences(str, character));

    everseString(str);
    printString(str);
    return 0;
}







