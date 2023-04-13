#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		int star=i*2-1,space=a-i;
		for(int k=1; k<=space; k++) printf(" ");
		for(int k=1; k<=star; k++) printf("*");
		printf("\n");
	}
}
