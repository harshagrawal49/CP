#include<iostream>
#include <vector>
int main(){
	long n;
	std::cin>>n;
	std::vector<int>input;
	long sum=0;
	for(long i=0;i<n-1;i++){
		int ele;
		std::cin>>ele;
		input.push_back(ele);
		sum+=ele;
	}
	long acsum=(n*(n+1))/2;
	std::cout<<acsum-sum;

}