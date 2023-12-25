#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int low,int mid,int high)
{
    vector<int> ds;
    int left = low, right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            ds.push_back(arr[left]);
            left++;
        }
        else
        {
            ds.push_back(arr[right]);
            right++;
        }

        while(left <= mid)
        {
            ds.push_back(arr[left]);
            left++;
        }

        while(right <= high)
        {
            ds.push_back(arr[right]);
            right++;
        }
    }
}

void mergeSort(vector<int>& arr,int low,int high)
{
    if(low >= high)
        return;
    int mid = (low + high) / 2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid + 1,high);

    merge(arr,low,mid,high);
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

    mergeSort(arr,0,n - 1);

    cout<<"Sorted Array : ";
    for(auto& el : arr)
    {
        cout<<el<<" ";
    }



    return 0;
}