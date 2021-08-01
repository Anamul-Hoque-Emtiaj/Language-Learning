#include<stdio.h>
int main()
{
    int r,c;
    printf("Dimension:");
    scanf("%d x %d",&r,&c);
    int i,j,x[r][c],y[c][r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }printf("\n\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            y[j][i]=x[i][j];
        }
    }
    printf("\n\n");
    for(j=0;j<c;j++){
            printf("\t");
        for(i=0;i<r;i++){
            printf("%d ",y[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}

