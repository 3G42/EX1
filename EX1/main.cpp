#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float x;
    printf("Informe a largura do quadrado:\n");
    scanf("%f",&x);
    x = x*x;
    printf("A area eh %.1f \n",x);
    system("pause");
    return 0;
}
