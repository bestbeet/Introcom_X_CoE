#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        if(i%2 == 0)
            printf("%d ",a[i]);
    }

    exit(EXIT_SUCCESS);
}