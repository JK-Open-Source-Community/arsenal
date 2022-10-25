#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k,n;
	float a[10][10],x[10],p;
	
	printf("\nENTER NUMBER OF EQUATIONS:\n");
	scanf("%d",&n);
	
	printf("\nENTER ELEMENTS OF AUGMENTED MATRIX\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
			
	printf("\nTHE AUGMENTED MATRIX IS AS FOLLOWS:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		printf("%f\t",a[i][j]);
		
		printf("\n");
	}
	
	for(k=1;k<=n-1;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			p=a[i][k]/a[k][k];
			
			for(j=1;j<=n+1;j++)
			a[i][j]=a[i][j]-p*a[k][j];
		}
	}
	
	printf("\nTHE ROW REDUCED ECHELON MATRIX IS :\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			printf("%f\t",a[i][j]);
		printf("\n");
	}
	
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		p=0;
		for(j=i+1;j<=n;j++)
		{
			p+=a[i][j]*x[j];
			x[i]=(a[i][n+1]-p)/a[i][i];
		}
	}
	printf("\nTHE SOLUTION IS\n");
	for(i=n;i>=1;i--)
	printf("x[%d]=%f\t",i,x[i]);

	
}
			
