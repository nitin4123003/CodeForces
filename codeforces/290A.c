#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[][40]={"Washington","Adams","Jefferson","Madison","Monroe","Adams","Jackson","Van Buren","Harrison","Tyler","Polk","Taylor","Fillmore",
                "Pierce","Buchanan","Lincoln","Johnson","Grant","Hayes",
                "Garfield","Arthur","Cleveland","Harrison","Cleveland","McKinley","Roosevelt","Taft","Wilson","Harding","Coolidge","Hoover",
                "Roosevelt","Truman","Eisenhower","Kennedy","Johnson","Nixon","Ford","Carter","Reagan","Bush"};
    printf("%s",a[n-1]);
    getch();
}
