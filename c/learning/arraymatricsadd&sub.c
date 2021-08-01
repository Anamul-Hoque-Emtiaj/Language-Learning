#include<stdio.h>
int main()
{
    int r,c;
    printf("Dimension:");
    scanf("%d x %d",&r,&c);
    int i,j,x[r][c],y[r][c],z[r][c];
    printf("\n\n\n");
    printf("Matrix X:\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("x[%d][%d]=",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\nMatrix Y:\n\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("y[%d][%d]=",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
        printf("\n\n");
    }

    printf("\n\nMatrix Y:\n\n\n");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\nMatrix Y:\n\n");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",y[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\n\nX+Y=\n\n");
    /*for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            z[i][j]=x[i][j]+y[i][j];
        }*/
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",x[i][j]+y[i][j]);
        }
        printf("\n\n");
    }
    /*printf("\n\n\n\nX-Y=\n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            z[i][j]=x[i][j]-y[i][j];
        }
        for(i=0;i<r;i++){
                printf("\t");
            for(j=0;j<c;j++){
                printf("%d ",z[i][j]);
            }
        printf("\n\n");
        }
    }*/
    return 0;
}

