#include <stdio.h>
int main()
{
	int a,c=0;
	scanf("%d",&a);
	while(a){
		int b=a%10;

		a/=10;
		c=c*10+b;

	}
	printf("%d\n",c);
}
