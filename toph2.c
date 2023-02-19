#include <stdio.h>

int main() {
    char num[10];
    scanf("%s", num);
    int n = 0;
    while (num[n] != '\0') {
        n++;
    }
    int num_commas = (n % 3 == 0) ? (n / 3 - 1) : (n / 3);
    for (int i = 1; i <= num_commas; i++) {
        int pos = n - 3 * i;
        for (int j = n - i; j >= pos; j--) {
            num[j + 1] = num[j];
        }
        num[pos] = ',';
        n++;
    }
    printf("%s\n", num);
    return 0;
}
