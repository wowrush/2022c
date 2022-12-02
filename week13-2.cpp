#include <stdio.h>
int main()
{

	int f[45];
	f[0]=0;
	f[1]=1;
	for(int a=2; a<45; a++){
        f[a]=f[a-1]+f[a-2];
    }
    for(int a=0; a<45; a++){
        printf("%d ",f[a]);
    }
}

