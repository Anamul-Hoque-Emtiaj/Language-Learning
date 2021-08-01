#include <stdio.h>
#include <math.h>
int main()
{
	float x,Q,sum=0;
	int i,j,limit,l=1,k;

	printf("Enter the value of x of sinx series: ");
	scanf("%f",&x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);

	Q=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
	    for(k=1;k<=j;k++){
            l=l*k;
	    }
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/l;
		}
		else
			sum=sum-pow(x,j)/l;
	}

	printf("Sin(%0.1f): %f",Q,sum);
	return 0;
}


