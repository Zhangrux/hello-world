#include<stdio.h>  //算输入的数字的和 
int main()
{
	int n,sum=0;
	 
	printf("Enter integers (0 to terminate):");
	
	scanf("%d",&n);
	while (n!=0){
		sum += n;
		scanf("%d",&n);
	}
	printf("The sum is:%d\n",sum);
	return 0;
}
