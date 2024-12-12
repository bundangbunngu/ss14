#include <stdio.h>

int main() {
    char chuoi_ky_tu[] = "Xin chao, the gioi!";
    int chi_so = 0;

    while (chuoi_ky_tu[chi_so] != '\0') {
        printf("%c ", chuoi_ky_tu[chi_so]);
        chi_so++;
    }
    printf("\n");

    return 0;
}

