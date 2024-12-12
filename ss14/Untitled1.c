#include <stdio.h>

int tinh_do_dai_chuoi(char *chuoi) {
    int do_dai = 0;
    while (chuoi[do_dai] != '\0') {
        do_dai++;
    }
    return do_dai;
}

int main() {
    char chuoi_nhap_vao[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi_nhap_vao, sizeof(chuoi_nhap_vao), stdin);

    int do_dai_chuoi = tinh_do_dai_chuoi(chuoi_nhap_vao);

    printf("Chuoi vua nhap la: %s", chuoi_nhap_vao);
    printf("Do dai cua chuoi la: %d\n", do_dai_chuoi - 1);
    return 0;
}

