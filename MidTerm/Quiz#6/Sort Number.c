#include <stdio.h>
#include <stdlib.h>

int ascending(const void *l, const void *r);

int main()
{   
    int n, i;
    int *a;

    scanf("%d",&n);

    a = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    qsort(a, n, sizeof(int), ascending);
 
    for (i = 0 ; i < n ; i++)
        printf("%d ", a[i]);

    free(a);

    exit(EXIT_SUCCESS);
}

int ascending(const void *l, const void *r)
{
  return (*((int *) l) - *((int *) r));
}

