#include<stdio.h>
int main()
{
    int r,c,n,i;
    scanf("%d",&n);
    printf("\n\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%d",c);
            }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%d",r);
            }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%d",c%2);
            }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%d",r%2);
            }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%c",c+64);
            }
        printf("\n\n");
    }printf("\n\n\n\n");
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
               printf("%c",r+64);
            }
        printf("\n\n");
    }

    return 0;

}

