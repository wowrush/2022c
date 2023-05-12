#include <stdio.h>

#include <math.h>
int main()
{
	int a,c=0,i=0,sum=0;
	scanf("%d",&a);
	while(a!=0){
		c=a%10;
		a/=10;
		sum+=c*pow(2,i);
		++i;
	}
	printf("%d\n",sum);
}
