#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        for(k=i;k<n;k++){
            printf("*");
        }
        printf("
");
    }
}