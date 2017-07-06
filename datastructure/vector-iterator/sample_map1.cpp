#include<stdio.h>
#include<map>
int main()
{
	std::map<double,int> x;
	x[0.0] = 1;
	x[0.1] = 2;
	x[0.2] = 3;
	x[0.3] = 4;
	printf("%d\n",x[0.0]);
	printf("%d\n",x[0.1]);
	printf("%d\n",x[0.2]);
	printf("%d\n",x[0.3]);
	return 0;
}

