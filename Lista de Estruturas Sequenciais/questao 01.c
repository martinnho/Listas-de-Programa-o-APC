#include <stdio.h>

int main(void)
{
    char car;
    scanf("%c", &car);

    printf("%c\n", car);
    printf("%c%c\n", car, car);
    printf("%c %c\n", car, car);
    printf("2%c\n", car);
    printf("[%c]\n", car);

    return 0;
}