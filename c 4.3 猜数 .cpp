#include<stdio.h>
#include<stdlib.h>
int main()
{
	int answer,num,put,count;
	count=0;
	printf("answer & maxinputnumber(bigger than 3):\n");
	scanf("%d%d",&answer,&num);
	system("cls");
	while(count<num)
	{
		printf("input your answer");
		scanf("%d",&put);
		if (put==answer){
			if(count==0)
			printf("bingo");
			if(count>=1&&count<=2)
			printf("lukey you");
			if(count>2&&count<=num)
			printf("good guess");
		break;
		}
		else if(put>answer)
		printf("Too Big\n");
		else printf("Too Small\n");
		count++;
		if(count==num)
		printf("Game Over\n");
	}
	
	return 0;

 } 
