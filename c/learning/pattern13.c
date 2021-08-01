#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if(c==r||r+c==n+1){
                printf("* ");
            }
            else printf("  ");
        }printf("\n\n");
    }
    return 0;
}
