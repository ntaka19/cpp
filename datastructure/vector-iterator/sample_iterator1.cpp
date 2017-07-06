#include<stdio.h>
#include<map>

int main()
{

	//compile with g++ -std=c++11
	std::map<double,int> x;
	x[0.0] = 1;
	x[0.1] = 2;
	x[0.2] = 3;
	x[0.3] = 4;
	for(auto p = x.begin();p != x.end();p++)printf("%lf,%d\n",p->first,p->second);
	return 0;
}
