#include<iostream>
#include<vector>
using namespace std;

int printS(vector<int>& arr,vector<int>& ds,int idx,int n,int sum,int s)
{
    if(idx == n)
    {
        if(s == sum)
        {
            return 1;
        }

        return 0;
    }

    s += arr[idx];
    ds.emplace_back(arr[idx]);
    int l = printS(arr,ds,idx + 1,n,sum,s); 

    s -= arr[idx];
    ds.pop_back();
    int r = printS(arr,ds,idx + 1,n,sum,s);

    return l + r;
}

int main()
{
    vector<int> arr;
    vector<int> ds;
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i = 0;i < n;i++)
    {
        int value;
        cin >> value;
        arr.emplace_back(value);
    }

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    cout<<printS(arr,ds,0,(int)arr.size(),target,0);

    return 0;
}