#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i,j,k;
	i=num;
	int cnt=0;
	for( i=num; i<=num+3;i++){
		for( j=num; j<=num+3;j++){
			for( k=num; k<=num+3;k++){
				if(i!=k&&i!=j&&j!=k){
				printf("%d",i*100+j*10+k);
				cnt++;
				if(cnt==3){
					printf("\n");
					cnt=0; 
				}
				else printf(" ");
				}
				
			}
		}
	} 
	return 0; 
}
