#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int a=1; a<=n; a++)
    {
        for(int b=1; b<=n; b++)
        {
            if(b<=n-a)
                printf(" ");
            else
                printf("*");
        }
     printf("\n");
    }
}
