#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,l,s=0;
    printf("1st matrics dimension:");
    scanf("%d x %d",&r1,&c1);
    printf("\n\n2nd matrics dimension:");
    scanf("%d x %d",&r2,&c2);
    int x[r1][c1],y[r2][c2],z[r1][c2];
    printf("\n\n\n");

    if(c1!=r2)
    {
        printf("Multiplication Not Possible");
    }
    else
    {
        printf("1st Matrix:\n\n");
        for(i=0; i<r1; i++)
        {
            for(k=0; k<c1; k++)
            {
                printf("x[%d][%d]=",i+1,k+1);
                scanf("%d",&x[i][k]);
            }
            printf("\n\n");
        }
        printf("2nd Matrix:\n\n");
        for(k=0; k<r2; k++)
        {
            for(j=0; j<c2; j++)
            {
                printf("y[%d][%d]=",k+1,j+1);
                scanf("%d",&y[k][j]);
            }
            printf("\n\n");
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    s=s+x[i][k]*y[k][j];
                }
                z[i][j]=s;
                s=0;
            }
        }
        printf("1st Matrix:\n\n");
        for(i=0; i<r1; i++)
        {
            printf("\t");
            for(k=0; k<c1; k++)
            {
                printf("%d ",x[i][k]);
            }
            printf("\n\n");
        }
        printf("2nd Matrix:\n\n");
        for(k=0; k<r2; k++)
        {
            printf("\t");
            for(j=0; j<c2; j++)
            {
                printf("%d ",y[k][j]);
            }
            printf("\n\n");
        }
        printf("multiplicated Matrix:\n\n");
        for(i=0; i<r1; i++)
        {
            printf("\t");
            for(j=0; j<c2; j++)
            {
                printf("%d ",z[i][j]);
            }
            printf("\n\n");
        }

    }
    return 0;
}
