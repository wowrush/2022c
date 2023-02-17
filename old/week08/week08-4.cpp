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
