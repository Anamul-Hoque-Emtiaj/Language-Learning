#include<stdio.h>
int main()
{
    int row,col,i,n;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n\n");
    }printf("\n\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",col%2);
        }
        printf("\n\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",col%2);
        }
        printf("\n\n");
    }printf("\n\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%c ",col+64);
        }
        printf("\n\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%c ",col+64);
        }
        printf("\n\n");
    }
    return 0;
}
