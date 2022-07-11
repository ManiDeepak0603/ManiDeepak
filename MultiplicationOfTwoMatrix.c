#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N];
    int i,j,sum,k,m,n,p,q;
    printf("Enter the no.of rows for first matrix:");
    scanf("%d",&m);
    printf("enter the no.of columns for first:");
    scanf("%d",&n);
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no.of rows for second matrix:");
    scanf("%d",&p);
    printf("enter the no.of columns for second matrix:");
    scanf("%d",&q);
    for(i=0;i<p;++i)
    {
        for(j=0;j<q;++j)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the first matrix:\n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix:\n");
    for(i=0;i<p;++i)
    {
        for(j=0;j<q;++j)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
        printf("can`t multiply");
    }
    else
    {
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                sum = 0;
                for(k=0;k<m;++k)
                {
                    sum = sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        printf("the last matrix is:\n");
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}