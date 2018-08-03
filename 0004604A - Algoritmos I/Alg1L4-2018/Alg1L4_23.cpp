#include <stdio.h>
main()
{
    float s;
    scanf("%f", &s);
    if(s<840)
        printf("%.2f", s+(13*s)/100);
    else
        printf("Não tem direito ao aumento");
}

