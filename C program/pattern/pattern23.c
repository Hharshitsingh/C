#include<stdio.h>
int main()
{
	int a,i,j;
	printf("Enter Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for (j=1;j<=i;j++)
		{
			if(i%2==0)
			printf("# ");
		   else
		   	printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}