#include <stdio.h>
int main()
{
    int x,y,tot;
    scanf("%d%d",&x,&y);
    tot=(1*x)+(2*y);
    if(x==0&&y%2==0)
    {
        printf("YES");
    }
    else if(x==0 && y%2!=0)
    {
        printf("NO");
    }
     else if(tot%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}