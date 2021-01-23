#include<stdio.h>
#include<conio.h>
main ()
{
	int a[100][100],b[100][100],i,j,m,n,p,k,sum=0,c[100][100];
	printf("Enter rows and column for matrix A\n");
	scanf("%d%d",&m,&n);
	
	printf("Enter %d numbers for matrix A:\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Enter columns for matrix B\n");
	scanf("%d",&p);
	printf("Enter %d numbers for matrix B:\n",n*p);
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(k=0;k<m;k++)
	{
		for(i=0;i<p;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				sum = sum + a[k][j]*b[j][i];
			}
			c[k][i] = sum ;
		}
	}
	printf("Display matrix 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Display matrix 2\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Multiplication\n");
	for(k=0;k<m;k++)
	{
		for(i=0;i<p;i++)
		{
			printf("%d\t",c[k][i]);
		}
		printf("\n");
	}
}
