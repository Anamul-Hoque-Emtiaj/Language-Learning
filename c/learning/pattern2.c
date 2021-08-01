#include<stdio.h>
int main()
{
    int row,col,i,n;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",col%2);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",row%2);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%c ",col+64);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%c ",row+64);
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n\n");
    }printf("\n\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("# ");
        }
        printf("\n\n");
    }
        return 0;
}

