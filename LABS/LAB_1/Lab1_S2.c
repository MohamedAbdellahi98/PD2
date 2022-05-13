#include <stdio.h>

int x;

void auto_depolama_sinifi(){
    printf("\nauto sinifi calistiriliyor\n\n");

    auto int a = 32;

    printf("auto olarak tanimlanan 'a' degiskeninin degeri: %d\n", a);

    printf("-------------------------------");
}

void register_depolama_sinifi(){
    printf("\nregister sinifi calistiriliyor\n\n");

    register char b= 'G';

    printf("register olarak tanimlanan 'b' degiskeninin degeri: %d\n", b);

    printf("----------------------");
}

void extern_depolama_sinifi(){

    printf("\nextern sinifi calistiriliyor\n\n");

    extern int x;

    printf("extern olarak tanimlanan 'x' değişkeninin değeri: %d\n", x);

    x = 2;

    printf("extern olarak tanimlanan ve modifiye edilen 'x' degeri: %d\n", x);

    printf("-------------------");
}

void static_siniflandirma_sinifi() {

    int i = 0;

    printf("\nstatic sinifi calistiriliyor\n");

    printf("\nDongu Basladi: \n");

    for (i = 1; i < 5; i++) {

        static int y = 5;

        int p = 10;

        y++;

        p++;

        printf("\nstatic tanimlanan 'y' nin %d. iterasyondaki degeri: %d\n", i, y);

        printf("\nstatic olmayan 'p' nin %d. iterasyondaki degeri: %d\n", i, p);
    }

    printf("\nDongu Sona Erdi: \n");

    printf("--------------------------");
}

int main() {
    auto_depolama_sinifi();
    register_depolama_sinifi();
    extern_depolama_sinifi();
    static_siniflandirma_sinifi();
    return;
}
