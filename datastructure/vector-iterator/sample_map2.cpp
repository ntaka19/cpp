#include<stdio.h>
#include<string>
#include<map>
int main()
{
	std::map<std::string,std::string> firstnameof;
	firstnameof["Takayasu"]="Misako";
	firstnameof["Kanazawa"]="Kiyoshi";
	firstnameof["Tamura"]="Koutarou";
	firstnameof["Ozaki"]="Jun'ichi";
	printf("%s\n",firstnameof["Takayasu"].c_str());
	printf("%s\n",firstnameof["Kanazawa"].c_str());
	printf("%s\n",firstnameof["Tamura"].c_str());
	printf("%s\n",firstnameof["Ozaki"].c_str());
	return 0;
}

