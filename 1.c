#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int *snumber;
    char *name[20];
    int *k;
    int *m;
    int *e;
}
void pp();

int main()
{
    int all,arg;
    printf("put snumber, name, k, m, e: ");

    scanf("%d",&student.snumber);
    scanf("%s",&student.name);
    scanf("%d",&student.k);
    scanf("%d",&student.m);
    scanf("%d",&student.e);

    printf("snumber: %d",studnet.snumber);
    printf("name: %s",student.name);
    printf("k: %d",student.k);
    printf("m: %d",student.m);
    printf("e: %d",student.e);
    
    all = k+m+e;
    arg = k+m+e/3;

    printf("all: %d",all);
    printf("average: %d:",arg);

    pp();

}

void pp()
{
    FILE *fp;
    int ch;

    fp=fopen("a.txt","r");
    while(1)
    {
        ch=fgets(fp);
        if(ch==EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
