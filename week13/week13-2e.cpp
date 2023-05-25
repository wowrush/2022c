#include <stdio.h>
int main()
{
	int a[20],c=0;
	for(int i=0; i<20; i++){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	int d;
	scanf("%d",&d);
		for(int i=0; i<20; i++){
			scanf("%d",&a[i]);
			if(d==a[i])c++;

		}
		printf("%d\n",c);


}
