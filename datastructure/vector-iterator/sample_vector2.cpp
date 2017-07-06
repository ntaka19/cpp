#include<stdio.h>
#include<vector>

int main()
{
	std::vector<double> x;
	x.push_back(10);
	x.push_back(20);
	x.push_back(30);
	x.push_back(40);
	for(int i = 0;i < x.size();i++)printf("%d,%lf\n",i,x[i]);
	return 0;
}
