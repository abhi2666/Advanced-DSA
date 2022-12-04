#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n- 1] = {1, 2, 4, 5};

    int sum2 = 0;
    for(int i = 0; i < n -1; i++)
    {
        sum2 += a[i];
    }
    int sum = 0;
    sum = n * (n + 1)/2;
    cout<<sum - sum2<<endl;

    
    return 0;
}