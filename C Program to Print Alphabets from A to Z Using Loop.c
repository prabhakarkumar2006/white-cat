#include <stdio.h>
int main() {
    char alphabet;

    printf("1:-Alphabets from A to Z:\n\n");

    for (alphabet = 'A'; alphabet <= 'Z'; ++alphabet) {
        
        printf("%c  ", alphabet);
    }
    printf("\n2:-Small Alphabets from a to z:\n\n");
    for (alphabet= 'a'; alphabet <= 'z' ; ++alphabet) {
        printf("%c  ", alphabet);
    }
    return 0;
}
