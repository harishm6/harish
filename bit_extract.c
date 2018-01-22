//test changes

#include<stdio.h>
void main()
{
	int a,i,temp1,temp2,count=0;
	scanf("%d",&a);
	for(i=15;i>=0;i--)
	{
		printf("%d ",((a&(1<<i))==(1<<i)));
		count++;
		if(count==8)
		{
			printf("  ");
			count=0;
		}		
	}
	printf("\n");
	temp1=a&0x00ff;
	temp2=a&0xff00;
	printf("%d ",temp1);
	printf("%d ",temp2);
	a=temp1|temp2;
	printf("\n");
	printf("%d",a);
}
