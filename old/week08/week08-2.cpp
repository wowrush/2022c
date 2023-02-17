#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a=1;
    while(a<=n){
        int b=1;
        while(b<=n){
            if(b<=n-a) printf(" ");
            else printf("*");
            b++;
        }
        a++;
        printf("\n");
    }
}
