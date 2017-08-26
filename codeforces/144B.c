#include<stdio.h>
#include<math.h>

float distance(int x1,int y1,int x2,int y2)
{
    return(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
}

int main()
{
    int xa,ya,xb,yb,count=0,flag=0,n,k;
    int i,j;
    int x[1000],y[1000],r[1000];
    /*printf("distance=%f\n\n",distance(2,2,4,4));*/
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d%d%d",&x[i],&y[i],&r[i]);
    for(i=xa;i<=xb;i++)
    {
        for(j=yb;j<=ya;j++)
        {
            if(i==xa||i==xb||j==ya||j==yb)
            {
                flag=0;
                /*printf("%d\t%d\n",i,j);*/
                for(k=0;k<n;k++)
                {
                    if(distance(i,j,x[k],y[k])<=((float)r[k]))
                    {
                        /*printf("\n%d\t%d",i,j);*/
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                count++;
            }
        }
    }
    printf("%d",count);
    getch();
}
    
