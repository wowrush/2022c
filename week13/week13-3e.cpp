#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[10],c[10];
	for(int i=0; i<a; i++){
		scanf("%d",&b[i]);
	}
	for(int i=0; i<a; i++){
		scanf("%d",&c[i]);
	}
	for(int i=0; i<a; i++){
		printf("%d ",b[i]+c[i]);
	}
}
