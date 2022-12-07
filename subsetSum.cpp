#include <iostream>
#include <vector>
using namespace std;

void subsetSum(int index, vector<int> a, int sum, int n, vector<int> &res)
{
    // if you reaches last index
    if(index == n) {
        // add whatever sum you got into the result array
        res.push_back(sum);
        return;
    }

    // don't pick a element
    subsetSum(index+1, a, sum, n, res);
    //pick a element 
    subsetSum(index+1, a, sum+a[index], n, res);
    
}
int main()
{
    int n;cin>>n;
    vector<int> array(n);
    vector<int> res;
    for(int i = 0; i < n; i++) cin>>array[i];

    // send (start_index, array, sum, result array)
    subsetSum(0, array, 0, n, res);

    for(int i : res)
    {
        cout<<i<<" ";
    }

    return 0;
}