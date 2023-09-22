#include<stdio.h>
#include<stdlib.h>
 
int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }
 
int main(void)
{
    int n,maxx,gondola=0;
    scanf("%d %d",&n,&maxx);
 
    int *A= (int*) malloc(n*sizeof(int));
 
    for(int i=0;i<n;i++)
        scanf("%d",(A+i));
 
    qsort(A,n,sizeof(int),sort);
 
    int i=0,j=n-1;
 
    while(i<=j)
    {
        if(A[i]+A[j]<=maxx)
        {
            gondola++;
            i++;
            j--;
        }
        else
        {
            gondola++;
            j--;
        }
    }
    printf("%d\n",gondola);
    return 0;
}