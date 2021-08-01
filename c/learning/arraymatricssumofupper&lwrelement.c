#include<stdio.h>
int main()
{
    int r,c,s1=0,s2=0;
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
    }printf("\n\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(j>i){
                s1=s1+x[i][j];
            }
        }
    }printf("Sum of Upper Element:%d\n\n",s1);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        if(i>j){
            s2=s2+x[i][j];
        }
        }
    }printf("Sum of Lower Element:%d\n\n",s2);
    return 0;
}

