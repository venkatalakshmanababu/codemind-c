#include<stdio.h>
int main()
{
	int n,i,t,sum=0;
	scanf("%d",&n);
	int nums[n];
	for(i=0;i<n;i++){
	    scanf("%d",&t);
	    nums[i]=t;
	    sum=sum+t;
	}
	printf("%d",sum);
}