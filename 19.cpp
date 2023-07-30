#include<iostream>
using namespace std;
class Temperature
{
    public:
    float I;
    int celcius()
    {
        return (float)(I*1.8)+32;
    }
};
int main()
{
    Temperature t1;
    t1.I=32;
    cout<<t1.celcius();
    return 0;
}