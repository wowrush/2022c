#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[10];
	for(int i=0; i<a; i++){
		scanf("%d",&b[i]);
		int c=b[i]*b[i];
		printf("%d,",c);
	}
	printf("\n");
}
