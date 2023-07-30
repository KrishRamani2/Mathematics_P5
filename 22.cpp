#include<iostream>
using namespace std;
 class Solution{
    public:
    long long factorial(int N) 
    {
       double fact = 1;
        for(int i = N; i>=1; i--){
            fact = fact*i;
        }
        return fact;
    }
};
int main()
{}
