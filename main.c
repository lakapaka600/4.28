#include <stdio.h>

int main(void) {
    int num;
    int massimoNumero=1;
    for(int i = 1;i<=10;i++) {
        printf("inserisci il numero");
        scanf("%d",&num);
        if(num>massimoNumero) {
            massimoNumero = num;
    }
    }



        printf("il numero massimo è:%d\n",massimoNumero);

    return 0;
}
