#include<stdio.h>
int main()
{
    int a=0,c,i=3,j,n;
    scanf("%d",&n);
    printf("2\n");
    for(c=2;c<=n;){
        for(i=3;;){
            for(j=2;j<i;j++){
                if(i%j==0){a++;break;}
            }if(a==0){printf("%d",i);
            c++;
            }
        i++;}
    }
    return 0;
}

