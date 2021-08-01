#include<stdio.h>
int main()
{
    int r,c;
    printf("Dimension:");
    scanf("%d x %d",&r,&c);
    int i,j,x[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }printf("\n\n");
    }
    printf("\n\n");
    for(i=0;i<r;i++){
            printf("\t");
        for(j=0;j<c;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
