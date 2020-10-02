#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,m,p=0;
    char a[100],b[1000];

    scanf("%s",&a);
    scanf("%d",&k);

    m = strlen(a);

    for(i=0;i<k;i++)
    {
        for(j=0;j<m;j++)
        {    if((m*i + j)<k)
            {
              b[m*i + j] = a[j];
            }
        }
    }

    for(i=0;i<k;i++)
    {
        if(b[i] == 'a')
        {
            p++;
        }
    }

    printf("%d",p);

    return 0;
}
