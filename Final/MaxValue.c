#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value[12];
    int i,j,max;

    for (i = 0 ; i < 12 ; i++)
        scanf("%d", &value[i]);

    max = MaxValue(value);
    print(max);
    
    exit(EXIT_SUCCESS);
}

int MaxValue (int value[])
{
    int max = value[0];
    int i;
    for (i = 1 ; i < 12 ; i++)
        if (max < value[i])
            max = value[i];

  return max;
}

void print(int max)
{
    printf("%d",max);
}
