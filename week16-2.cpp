#include <stdio.h>
#include <string.h>
int main()
{
    char line[20]="Hello";
    int n = strlen(line);

    printf("Hrllo�r�ꪺ����:%d\n",n);

    char line2[20];
    strcpy(line2, line);
    printf("line2 �o�� : %s\n",line2);

    printf("����r�� strcmp(line2, line)�o�� %d\n",strcmp(line, line2));
}
