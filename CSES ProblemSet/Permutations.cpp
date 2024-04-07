#include<iostream>
#include <vector>
#include <algorithm>
int main(){
	long n;
	std::cin>>n;
	std::vector<int>v;
	long count=0;
	// for(long i=0;i<n;i++){
	// 	long ele;
	// 	std::cin>>ele;
	// 	input.push_back(i+1);
	// }

	long i=0;
	long prev=0;

	while(count<n){
		
		v.push_back(i+1);

		count++;
		i+=2; 
		if(count>1){
			prev=v[count-1];
			if(abs(i-prev)==1) {
				std::cout<<"NO SOLUTION\n";
				return 0;
			}
		}
		if(i>=n) i=i-n;
	}

	for(long i:v) std::cout<<i<<" ";
	return 0;
	

}