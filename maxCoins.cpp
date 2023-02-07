/*
Example 1:

Input: V = 70

Output: 2

Explaination: We need a 50 Rs note and a 20 Rs note.

Example 2:

Input: V = 121

Output: 3

Explaination: We need a 100 Rs note, a 20 Rs note and a 1 Rs coin.
*/
#include <iostream>
#include <vector>
using namespace std;

class Coins
{
    private:
    int V; // amount we want 
    vector<int> changes ={ 1, 2, 5, 10, 20, 50, 100, 500, 1000};
    public:
    Coins(){
    cin>>V; 
    }
    
    vector<int> getChanges()
    {
        vector<int> ans;
        int n = changes.size() - 1;
        while(V)
        {
            //find changes starting from the last element of the vector
            if(V == changes[n])
            {
                ans.push_back(changes[n]);
                return ans;
            }
            else if(V < changes[n])
            {
                // then add that change and decrease V
                ans.push_back(changes[n]);
                V -= changes[n];
            }
            else
            {
                // for V < changes[n]
                n--; //decrease n
            }

        }
        return ans;
    }
    void print_value(){ cout<<V<<endl; }
};

int main()
{
    // creating array for changes}
    Coins obj;
    vector<int> res = obj.getChanges();
    for(int i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
