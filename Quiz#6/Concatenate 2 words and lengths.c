#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10],b[10],c='_';
    int an,bn,sum;

    scanf("%s %s",&a,&b);

    an = strlen(a);
    bn = strlen(b);
    sum = an+bn;
    printf("%s%c%s",a,c,b);
    printf("\n%d",sum+1);

    exit(EXIT_SUCCESS);
}