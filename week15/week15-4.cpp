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
