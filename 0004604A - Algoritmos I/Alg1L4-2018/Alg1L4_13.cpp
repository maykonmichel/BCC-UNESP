#include <stdio.h>
main()
{
    int i;
    scanf("%d", &i);
    if(i <= 7)
        printf("infantil A: 5 - 7 anos");
    else if(i<=10)
        printf("infantil B: 8 - 10 anos");
    else if(i<=13)
        printf("juvenil A: 11 - 13 anos");
    else if(i<=17)
        printf("juvenil B: 14 - 17 anos");
    else
        printf("senior: maiores de 18 anos");
}
