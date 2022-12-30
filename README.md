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
# week14
step 1
```cpp
#include <stdio.h>

int a=10;
void func()
{
    a=30;
    printf("func()中 改成%d\n",a);
}
int main()
{
    printf("main()中 a是%d\n",a);
    func();
    printf("main()中 a是%d\n",a);
}
```
step 2
```cpp
#include <stdio.h>

int a=10;
void func()
{
    int a=20;
    printf("func()中 a是%d\n",a);
    a=30;
    printf("func()中 a改成%d\n",a);
}
int main()
{
    printf("main()中 a是%d\n",a);
    func();
    printf("main()中 a是%d\n",a);
}
```

step 3
```cpp
#include <stdio.h>

int n=30;
int funcA(int a,int b)
{
    printf("funcA()的a,b是%d %d\n",a,b);
    return a+b;
}
int funcB(int n)
{
    printf("func() 的n是:%d\n",n);
    int ans =funcA(n, n);
    return ans;
}
int main()
{
    int a=10,b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a, b是%d %d\n",a,b);
}

```

step 4
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(1){
        c=a%b;
        if(c==0) break;
        b=a;
        b=c;
    }
    printf("%d",b);
}
```

step 5
```cpp
#include <stdio.h>
int gcd(int a, int b )
{
    if( a==0 ) return b;
    if( b==0 ) return a;

    return gcd(b, a%b );
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans= gcd(a, b );
    printf("%d",ans);
}

```
# week 15
step 1
```cpp
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    char line[]="Hello World";
    printf("整數 %d\n",100);
    printf("浮點數 %f\n",3.141592684579);
    printf("%s 字串\n",line);
}
```
step 2
```cpp
#include <stdio.h>
int main()
{
    printf("%c : %d\n",65,65);
    printf("%c : %d\n",66,66);
    printf("%c : %d\n",67,67);
    printf("%c : %d\n",'A','A');
    printf("%c : %d\n",'B','B');
    printf("%c : %d\n",'C','C');
    printf("上面用數字 64 及單引號 'a'的結果都一樣\n");
    printf("%c : %d\n",97,97);
    printf("%c : %d\n",'a','a');
}

```
step 3
```cpp
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[] = "Hello World AAA";

    for(int i=0; ;i++){
        char c=line[i];
        if(c==0) break;
        printf("=%c",c);
    }
}
```
step 4
```cpp
#include <stdio.h>
char line[3000];
int main()
{
    printf("請輸入一堆字母,不要有空格喔: ");

    scanf("%s", line);

    int a=0;
    for(int i=0; line[i]!=0; i++){
        a++;
    }
    for(int i=a-1; i>=0; i--){
        printf("%c",line[i]);
    }
}
```
# week16
step 1
```cpp
#include <stdio.h>
int main()
{
    char line[300];
    char * p = line;
    int n=10;
    int *p2 = &n;
    float f=3.1415926;
    float *p3 = &f;
    char c='A';
    char *p4 =&c;
}
```
step 2
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
    char line[20]="Hello";
    int n = strlen(line);

    printf("Hrllo字串的長度:%d\n",n);

    char line2[20];
    strcpy(line2, line);
    printf("line2 得到 : %s\n",line2);

    printf("比較字串 strcmp(line2, line)得到 %d\n",strcmp(line, line2));
}
```
step 3
```cpp
#include <stdio.h>
int main()
{
	printf("請按任意鍵繼續 . . . \n");
	int n,max,min;
	scanf("%d",&n);
	int m[20];
	for(int a=0; a<n; a++){
		scanf("%d",&m[a]);
	}
	int ans=-999999;
	for(int a=0; a<n; a++){
		for(int k=a+1; k<n; k++){
			if(m[k]-m[a]>ans){
				ans=m[k]-m[a];
				max=m[k];
				min=m[a];
			}	
		}
		
	}

		printf("最大利潤=%d-%d=%d\n",max,min,ans);
}
```
# week17
step 1
```cpp
size(400,400);
background(#839082);
rect(100,100,200,200);
```
step 2
```cpp
void setup()
{
  size(400,400);
  background(#19930F);
}
void draw()
{
  if(mousePressed)
  {
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed()
{
  if(key=='1') stroke(255,0,0);
  if(key=='2') stroke(0,255,0);
  if(key=='3') stroke(0,0,255);
}
```
step 3
```cpp
void setup(){
  size(400,400,P3D);
}

void draw(){
  background(##908282);
  translate(width/2,height/2);
  rotateY(radians(frameCount));
  rotateX(radians(frameCount));
  box(100);
}
```
step 4
```cpp
PImage img;
void setup(){
  size(400,400);
  img=loadImage("images.png");
}

void draw(){
  image(img, 0, 0, 400, 400);
}
```
step 5
```cpp
PImage img, img2, imgBG;
void setup(){
  size(400,400);
  imgBG = loadImage("BG.png");
  img = loadImage("astro.png");
  img2 = loadImage("image.png");
}

void draw(){
  imageMode(CENTER);
  image(imgBG, 200, 200, 400, 400);
  image(img2, 100, 100);
  image(img, mouseX, mouseY);
}
```
step 6
```cpp
import processing.sound.*;
SoundFile file;
void setup(){
  size(300,300);
  file = new SoundFile(this, "beat.aiff");
  file.loop();
}
void draw(){
  
}
```
