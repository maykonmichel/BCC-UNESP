#include <stdio.h>
main()
{
    int i, g;
    scanf("%d %d", &i, &g);
    if(i<25)
        if(g == 1)
            printf("7");
        else if(g == 2)
            printf("8");
        else
            printf("9");
    else if(i < 41)
        if(g == 1)
            printf("4");
        else if(g == 2)
            printf("5");
        else
            printf("6");
    else
    if(g == 1)
        printf("1");
    else if(g == 2)
        printf("2");
    else
        printf("3");
}
