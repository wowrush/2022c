#include <stdio.h>
int main()
{
    printf("�п�J��ӼƦr: ");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1; i<a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("���ans:%d",ans);
}
