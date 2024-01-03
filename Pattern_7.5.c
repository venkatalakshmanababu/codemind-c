#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%c ",n-i+1+64);
        }
        printf("
");
    }
}