#include<stdio.h>
int main()
{
    int i,j,x[10];
    float k;
    for(i=0,j=0;i<10;i++){
        scanf("%d",&x[i]);
        j=j+x[i];
        k=1.0*j/10;

    }

  printf("%f",k);
  return 0;
}
