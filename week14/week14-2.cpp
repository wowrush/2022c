#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	for(int n=a; n<=b ;n++){
		int d=0;
		for(int i=2; i<n; i++){
			if(n%i==0)d=1;
		}
		if(d==0)c++;
	}
	printf("%d\n",c);
}








