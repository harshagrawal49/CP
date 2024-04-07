
#include <bits/stdc++.h>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	// map<int,int>pricetoindex;
	while(cases--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<int>prices;
		for(int i=0;i<n;i++){
			int ele;
			cin>>ele;
			prices.push_back(ele);
			// pricetoindex[ele]=i;
		}

		sort(prices.begin(),prices.end());
		int total=0;
		// int ticketstobuythatday[n];
		
		// for(i=0;i<k/m;i++){
		// 	ticketstobuythatday[i]=m;
		// }
		
		int dayofstartbuyingtickets = k/m;
		// ticketstobuythatday[dayofstartbuyingtickets]=k%m;
		// for(i=dayofstartbuyingtickets+1;i<n;i++){
		// 	ticketstobuythatday[i]=0;
		// }
		// int minpriceday = pricetoindex[prices[0]];
		int i=dayofstartbuyingtickets;
		total=prices[i]*(k%m);
		int count=k%m;
		for(i=dayofstartbuyingtickets-1;i>=0;i--){
			total+= (prices[i]+count)*m;
			count+=m;
		}

		cout<<total<<"\n";



	}
}