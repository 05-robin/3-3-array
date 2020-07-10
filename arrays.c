#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum=0;
    printf("The input elements are: \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("element[%d][%d]: ",i,j);
    		scanf("%d",&arr[i][j]);
		}
	}
printf("\nThe matrix is: \n");
	for(i=0;i<3;i++,printf("\n"))
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
		}
	}
	printf("\nThe sum of all diagonal elements is %d",sum);
	
}
