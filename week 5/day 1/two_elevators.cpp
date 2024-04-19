#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c,d,e;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a,&b,&c);
        d=a-1;
        e=abs(b-c)+(c-1);
        if(d<e)
            printf("1\n");
        else if(d>e)
            printf("2\n");
        else
            printf("3\n");
    }
}
