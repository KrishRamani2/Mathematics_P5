#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int s;
    double termOfGP(int A,int B,int N)
    {
        if(N==1){
          return A; 
       } 
       if(N==2){
          return B;   
       } 
       
       //nth term ar^n-1 
        double r=(double)B/A;   
       int n=N-1; 
       double res=1;
       while(n>0){ 
           
           if(n%2==1){
              res=res*r; 
           } 
          r=r*r;
          n=n/2;
       } 
       
       res=A*res; 
       
       return res;
       
    }
};
int main()
{
    int T;
    cin>>T;
    for(int i =0;i<T;i++)
    {
        int A,B;
        cin>>A>>B;
        int N;
        cin>>N;
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }
    return 0;
}