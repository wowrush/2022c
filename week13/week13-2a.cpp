#include <stdio.h>
int f(int n)
{

	int c=0;
	if(n>0){
		c=n;
	}
	if(n<0){
		c=n*-1;
	}
	if(n==0){
		c=0;
	}
	return c;

}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
