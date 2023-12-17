#include<iostream>
#include<vector>
using namespace std;

void printS(vector<int>& arr,vector<int>& ds,int idx,int n)
{
    if(idx == n)
    {
        for(auto& el : ds)
        {
            cout<<el<<" ";
        }
        cout<<endl;

        return;
    }

    if(idx == 0)
    {
        cout<<"{}"<<endl;
    }

    ds.emplace_back(arr[idx]);
    printS(arr,ds,idx + 1,n);

    ds.pop_back();
    printS(arr,ds,idx + 1,n);

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

    printS(arr,ds,0,(int)arr.size());

    return 0;
}