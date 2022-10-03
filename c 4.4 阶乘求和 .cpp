#include<stdio.h>
int fact (int n)
{
	int i;
	int result;
	if(n<0)
	return 0;
	result=1;
	for (i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
 }
int main()
 
 {
 	int n,c=0,i;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		
 	c=c+fact(i); 	
	 }
 	
 	printf("%d",c);
 	return 0;
 }
