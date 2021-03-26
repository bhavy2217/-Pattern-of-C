#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r;
	clrscr();
	printf("\nEnter rows to get pattern : ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{  	for(j=0;j<=i;j++)
		{
			printf(" %c",'A'+i);
		}
		printf("\n");
	}
	getch();

}