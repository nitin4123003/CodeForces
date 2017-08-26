#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool cn1=false,cn2=false;
    char a[100][100];
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i][0]==a[i+1][0])
        {
            cn1=true;
            break;
        }
    }
    if(!cn1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m-1;j++)
            {
                if(a[i][j]!=a[i][j+1])
                {
                    cn2=true;
                    break;
                }
            }
            if(cn2)
            break;
        }
    }
    if(cn1||cn2)
    printf("NO");
    else
    printf("YES");
    getch();
}
            
