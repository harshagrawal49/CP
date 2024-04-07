 #include <iostream>
#include <vector>
#include <string>

using namespace std;

 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        //using sliding window
        
        int maxi=0;
       
            int l=0;
            int sum=0;
            int r=l-1;
            while(l<N){


                if(r<N-1) {
                    r++;
                    sum+=A[r];
                }
                cout<<l<<" "<<r<<"\n";
                cout<<sum<<"\n";
                if(sum==K)
                maxi=max(maxi,r-l+1);
                if(sum>K) l++;
            
                else if(r==N-1) {
                    sum-=A[l];
                    l++;
                }
                cout<<l<<" "<<r<<"\n";
                cout<<sum<<"\n";
                if(sum==K)
                maxi=max(maxi,r-l+1);
                if(sum>K) l++;
            
    }
        return maxi;
    } 

int main(){
    int A[]={1,4,3,3};
    int n=sizeof(A)/sizeof(int);
    int k=7;
    cout<<lenOfLongSubarr(A,n,k);

}