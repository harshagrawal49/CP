#include<iostream>
#include <vector>
int main(){
	long n;
	std::cin>>n;
	std::vector<int>input;
	long count=0;
	for(long i=0;i<n;i++){
		long ele;
		std::cin>>ele;
		input.push_back(ele);
		if(i!=0){
			if(ele<input[i-1]){ 
				count+=input[i-1]-ele;
				input[i]=input[i-1];
			}

		}
	}

	std::cout<<count;
	

}