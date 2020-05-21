#include <stdio.h>


double main() {
	double ret;
	double inch;

	printf("A simple unit-converter application\n");
	printf("------------------------------------------MacroMuscle\n");
	printf("Please input inch:");
	scanf_s("%lf",&inch);

	ret = inch * 2.54;

	printf("%lf inch is %.8lf cm\n",inch,ret);

	//getchar();
	system("pause");

	return ret;
}