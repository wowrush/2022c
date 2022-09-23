#include <stdio.h>
int main()
{
    printf("輸入兩個數字");
    int a,b;
    scanf("%d",&a,&b);
    printf("%d加%d得到%d\n",a+b);
    printf("%d減%d得到%d\n",a-b);
    printf("%d乘%d得到%d\n",a*b);
    printf("%d除%d得到%d\n",a/b);
    printf("%d除於%d的餘數等於%d\n",a%b);
}
