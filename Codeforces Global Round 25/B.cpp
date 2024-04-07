#include<bits/stdc++.h>
using namespace std;

int noofwins(vector<int>rating,int rate){
	int matches=0;
	int started=0;
	int value=rate;
	while(rating.size()>1){
		// for(int i:rating) cout<<i<<" ";
		if(started==0 || rating[0]==value || rating[1]==value){
			if(rating[0]==value || rating[1]==value) started==1;
			if(rating[0]>rating[1]) {
			if(rating[0]==value) matches++;
			rating.erase(rating.begin()+1);
		}
		else{
			if(rating[1]==value) matches++;
		 rating.erase(rating.begin());

		}
		// cout<<"  matches:"<<matches;
		// cout<<"\n";
		}

		else break;
	}
	// cout<<"\n final match"<<matches<<"\n";
	return matches;
}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,k;
		cin>>n>>k;
		vector<int>rating;
		vector<int>arr(n,0);
		for(int i=0;i<n;i++){
			int ele;
			cin>>ele;
			rating.push_back(ele);
		}
		int rate=rating[k-1];

		for(int i=0;i<n;i++){
			if(i!=k-1){
				swap(rating[i],rating[k-1]);
				arr[i]=noofwins(rating,rate);
				swap(rating[i],rating[k-1]);

			}
			arr[k-1]=noofwins(rating,rate);

		}

		cout<<*max_element(arr.begin(),arr.end())<<"\n";
	}

}