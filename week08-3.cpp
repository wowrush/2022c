#include <stdio.h>
int main()

{
    printf("�P�_�A���Ʀr�O���O���:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int a=2; a<n; a++){
        if(n%a==0) bad=1;
    }
    if(bad==0) printf("%d �O���(�S���a��)",n);
    else printf("%d ���O���(���N�a���F)",n);
}
