//判断数字为奇数个数 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count,k,flag,m,n;
	printf("enter m n :");
	scanf("%d%d",&m,&n);
	system("cls");
	count=0;
	if(m<1||n>500||m>n)
	printf("invalid\n");
	else{
		for(k=m;k<=n;k++)
		{
			if(k%2!=0){
			printf("%d ",k);
			count++;
			if(count%10==0)
			printf("\n");	
			}
		}
	}
	return 0; 
 } 
