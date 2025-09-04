#include <stdio.h>

int main(void)
{
    char a, b, c;
    scanf(" %c", &a);
    scanf(" %c", &b);
    scanf(" %c", &c);
    
    printf("%c%c%c\n", a, b, c);
    printf("%c\n", a);
    printf("%c%c\n", b, b);
    printf("%c %c %c\n", c, c, c);
    printf("X == %c, Y == %C, Z == %C\n", a, b, c);
    printf("X != %c, Y != %C, Z == %C\n", b, a, c);
    
    return 0;
}