#include <stdio.h>

int main(void)
{
    int d1, d2, d3;
    int anos, meses, dias;
    scanf("%d %d %d", &d1, &d2, &d3);
    
    anos = d1 / 360;
    meses = (d1 % 360) / 30;
    dias = (d1 % 360) % 30;
    printf("%d %d %d\n", anos, meses, dias);
    
    anos = d2 / 360;
    meses = (d2 % 360) / 30;
    dias = (d2 % 360) % 30;
    printf("%d %d %d\n", anos, meses, dias);
    
    anos = d3 / 360;
    meses = (d3 % 360) / 30;
    dias = (d3 % 360) % 30;
    printf("%d %d %d\n", anos, meses, dias);

    return 0;
}