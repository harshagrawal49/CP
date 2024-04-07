#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
int main(){
	std::string s;
	std::cin>>s;
	long maxi=0;
	long rep=1;
	for(long i=0;i<s.length();i++){
		if(s[i]==s[i+1]) rep++;
		else {
			maxi=std::max(rep,maxi);
			rep=1;
		}
	}
	std::cout<<maxi;

}