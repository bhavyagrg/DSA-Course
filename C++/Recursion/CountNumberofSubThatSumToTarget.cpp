#include<iostream>
#include<vector>
using namespace std;

void printS(vector<int>& arr,vector<int>& ds,int idx,int n,int sum,int s)
{
    if(idx == n)
    {
        if(s == sum)
        {
            for(auto& el : ds)
            {
                cout<<el<<" ";
            }
            cout<<endl;
        }

        return;
    }

    s += arr[idx];
    ds.emplace_back(arr[idx]);
    printS(arr,ds,idx + 1,n,sum,s);

    s -= arr[idx];
    ds.pop_back();
    printS(arr,ds,idx + 1,n,sum,s);

    return;
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

    printS(arr,ds,0,(int)arr.size(),target,0);

    return 0;
}