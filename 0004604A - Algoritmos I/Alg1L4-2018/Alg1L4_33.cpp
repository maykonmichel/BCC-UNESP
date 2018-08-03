#include <stdio.h>
#include <math.h>

main() {
    int a, b, c, d;
    
    scanf("%d %d %d", &a, &b, &c);

    if(!a)
        printf("%.2f", (float)-c/b);
    else if(!b && -c > 0)
    	if(-c > 0) printf("%f", sqrt((float)-c/a));
    	else printf("Não existe raiz real");
    else if(!c)
        printf("0 ou %.2f",(float)-b/a);
    else {
        d = pow(b, 2) - 4*a*c;

        if(d < 0)
            printf("Nao existe raiz real");
        else if(!d)
            printf("%.2f", -b/2.0*a);
        else
            printf("%.2f e %.2f", -b+sqrt(d)/2.0*a, -b-sqrt(d)/2.0*a);
    }
}
