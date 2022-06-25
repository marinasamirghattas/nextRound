#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int counter=0;
    cin>>n>>k;
    int arr[101] {};

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    for(int j=1;j<=n;j++)
    {
        if(arr[j]>=arr[k] && arr[j]!=0)
        {
            counter++;
        }
    }
    cout<<counter;

        return 0;

}
