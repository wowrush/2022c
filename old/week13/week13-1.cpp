#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int right,left;
	int ans=-99999999;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]-a[i] > ans){
				ans=a[j]-a[i];
				left=a[i];
				right=a[j];
			}
		}
	}
		printf("�Ы����N���~�� . . . \n");
		printf("�̤j�Q��=%d-%d=%d\n",right,left,ans);
}
