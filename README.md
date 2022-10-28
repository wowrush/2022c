# 2022c
資傳一甲 程式設計 城市倉庫市倉庫
# week06
step 1
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
       int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}
```
step 2
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space= 5-i;
        int star= i*2-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n", i, space, star);
    }
}
```
step 3
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數字: ");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1; i<a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```
step 4
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a,b,c;
    scanf("%d %d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
step 5
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立，所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(999) printf("999成立\n");
    if(a==0) printf("不管什麼東西，幾乎都成立\n");
}
```
# week7
 step1
 ```cpp
 #include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);

    long long int i=1234567812345678;
    printf("%lld\n",i);
}
```
step2
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld",&a,&b);
    long long int ans;
    for(long long int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
step3
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld",&a,&b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
step4
```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0){
    printf("個位數是%d\n",n%10);
    n=n/10;
    }
}
```
# week 08
step 1
```cpp
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
```
step 2
```cpp
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
```
step 3
```cpp
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
```
step 4
```cpp
#include <stdio.h>
int main()

{
    int a;
    scanf("%d",&a);

    for(int i=2; i<=a; i++){
        int bad=0;
        for(int s=2; s<i; s++){
            if(i%s==0) bad=1;
        }
        if(bad==0) printf("%d",i);
    }
}
```


