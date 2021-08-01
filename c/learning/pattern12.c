#include<stdio.h>
int main()
{
    int row,col,i,n;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
                if(row==n||col==1||row==col)
            printf("* ");
        else printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}
