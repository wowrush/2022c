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
# week10
step 1
```cpp
#include <stdio.h>
int main()
{
    int a[4]{10, 20, 30, 40};

    printf("a[0]=%d\n",a[0]);
    printf("a[1]=%d\n",a[1]);
    printf("a[2]=%d\n",a[2]);
    printf("a[3]=%d\n",a[3]);
}
```
step 2
```cpp
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
```

# week11
step 1
```cpp
#include <stdio.h.>
int main()
{
    int a=90, b=80;
    int temp = a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
```
step 2
```cpp
#include <stdio.h.>
int main()
{
    int a=90, b=80, c=70;
    if(a>b){
        int temp = a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp = b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp = a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
step 3
```cpp
#include <stdio.h>
int a[10]{90,80,70,60,50,40,30,20,1,0};
int main()
{
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
step 4
```cpp
#include <stdio.h>
int a[10]{90,80,70,60,50,40,30,20,1,0};
int main()
{
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
step 5
```cpp
#include <stdio.h>
int a[10]{90,80,70,60,50,40,30,20,1,0};
int main()
{
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");

    for(int q=0; q<10-1; q++){

        for(int i=0; i<10-1; i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ",a[i]);
            printf("\n");
        }
}
```
# week12
step 1
```cpp
#include <stdio.h>
int a[5]{5,4,3,2,1};
int main()

{
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(a[i] > a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d",a[i]);
    }
}

```
step 2
```cpp
##include <stdio.h>
int main(){
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]={{10,20,30},{40,50,60}}
}
```
step 3
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]{{10,20,30},{40,50,60}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
step 4
```cpp
#include <stdio.h>
int main()
{	
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&b[i][j]);
		}
	}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
step 5
```cpp
#include <stdio.h>
int main()
{	
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&b[i][j]);
		}
	}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				c[i][j]=0;
				for(int k=0; k<n; k++){
					c[i][j] += a[i][k]*b[k][j];
				}
			}
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
# week13
step 1
```cpp
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
		printf("請按任意鍵繼續 . . . \n");
		printf("最大利潤=%d-%d=%d\n",right,left,ans);
}
```
step 2
```cpp
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
step 3
```cpp
#include <stdio.h>
int a[200][200];
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=m-1; i>=0; i--){
		for(int j=n-1; j>=0; j--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}

```

step 4
```cpp
#include <stdio.h>
int addnum( int a, int b )
{
    return a+b;
}

int main()
{
    int ans = addnum(2 ,3 );
    printf("addnum(2, 3)會得到 %d\n",ans);
}
```
