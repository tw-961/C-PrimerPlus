#include "stdio.h"



void main()
{
	int a = 0;
	int i = 0,k=0;
	int ret = 1;
	double morenum = 1;
	int	num[2];
	num[0] = 0;
	num[1] = 0;


	for (i=0;i<5;i++) 
	{
		printf("PLease scanf a number: ");
		scanf_s("%d", &a);
		if (a==1||a==2) {
			ret = a - 1;
		}
		else{
			for (k = 2; k < a;k++)
			{	
				num[1] = morenum;
				morenum = morenum + num[0];
				num[0] = num[1];
			}
		}
		ret = (int)morenum;

		printf("the %d fibonacci number=%d\n", a, ret);

		num[0] = 0;
		num[1] = 0;
		ret = 1;
		morenum = 1;

		system("pause");

	}
}