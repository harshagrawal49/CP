#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cases;
	cin>>cases;
	while(cases--){
		int a,b,c;
		int flag=1;
		cin>>a>>b>>c;
		while(b%3!=0){
			b++;
			c--;
			if(c<0) flag=0;
		}
		if(flag)
		cout<< a+(b/3)+(c/3)+(c%3)/2+((c%3)%2)<<"\n";
		else
		cout<<-1<<"\n";

	}

}