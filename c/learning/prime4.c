#include<stdio.h>
int main()
{
    int i,j,c=0;
    printf("2\n");
    for(i=3;1;){
        for(j=2;j<i;j++){
            if(i%j==0){
                c++;
                break;
            }
        }if(c==0){
        printf("%d",i);
        }
        i++;
    }
    return 0;
}
