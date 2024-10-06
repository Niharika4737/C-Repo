#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int maxRuns = 36*M;
    if(maxRuns >= N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}