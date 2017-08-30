#include<stdio.h>
#include<vector>

int main()
{
	std::vector<double> x;
	x.resize(4); //随時更新可能
	x[0] = 10;
	x[1] = 20;
	x[2] = 30;
	x[3] = 40;
	for(int i = 0;i < x.size();i++)printf("%d,%lf\n",i,x[i]);
	return 0;
}
