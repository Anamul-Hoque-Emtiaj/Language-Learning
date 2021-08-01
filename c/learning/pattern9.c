#include<stdio.h>
int main()
{
    int r,c,n,i;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++)printf(" ");
        for(c=1;c<=2*r-1;c++)printf("*");

        printf("\n");
    }
        for(r=n-1;r>=1;r--){
        for(c=1;c<=n-r;c++)printf(" ");
        for(c=1;c<=2*r-1;c++)printf("*");

        printf("\n");
    }
    return 0;
}

