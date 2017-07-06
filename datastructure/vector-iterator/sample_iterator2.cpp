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
	for(auto p = firstnameof.begin();p != firstnameof.end();p++)printf("Firstname of %s is %s\n",p->first.c_str(),p->second.c_str());
	return 0;
}
