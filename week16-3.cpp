#include <stdio.h>
int a[200];
int main()
{
	int n,max,buy,sell;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[j]-a[i]>max){
				max = a[j]-a[i];
				buy = i;
				sell = j;
			}
		}
	}
	printf("�Ы����N���~�� . . . \n");
	printf("�̤j�Q��=%d-%d=%d\n",a[sell], a[buy], max);
}
