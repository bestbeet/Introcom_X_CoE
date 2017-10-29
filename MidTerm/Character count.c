#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
    int c = 0,l = 0,d = 0;

    do
    {
        scanf(" %c",&a);
        c++;

        if(isalpha(a))
            l++;
        
        if(isdigit(a))
            d++;
    } while (a != '#'); 

    printf("Count: %d\n",c);
    printf("Letter: %d\n",l);
    printf("Digit: %d",d);

    exit(EXIT_SUCCESS);
}
