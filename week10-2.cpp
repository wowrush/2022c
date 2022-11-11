#include <stdio.h>
int main()
{
    int i[4]={10,20,30,40};
    for(int a=0; a<4; a++){
        printf("a[%d]: %d\n",a , i[a]);
    }
        for(int b=3; b>=0; b--){
            printf("%d ",i[b]);
        }
}
