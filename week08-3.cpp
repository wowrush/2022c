#include <stdio.h>
int main()

{
    printf("判斷你的數字是不是質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int a=2; a<n; a++){
        if(n%a==0) bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
