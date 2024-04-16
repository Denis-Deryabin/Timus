#include<iostream>
#include<conio.h>
#include<Math.h>

using namespace std;

int  binarySearch(int  A[], int n, int x) {
    int low, high, mid;
    low = 0;
    high = n-1;

    while (low <= high) {
        mid = (low + high) / 2;
        if  (x == A[mid]) return(mid);
        else if (x < A[mid])  high = mid-1;
        else low = mid + 1;
    }
    return(-1);
}

int main()
{
    int n, a[ 15001 ];
    int m, counter = 0;
    int b;
    cin>>n;
    for(int i = 0; i < n; i ++ )
        cin>>a[ i ];
    cin>>m;
    for(int i = 0; i < m; i ++ )
    {
        cin>>b;
        if(binarySearch(a, n, b ) != -1 )
            counter ++;
    }
    cout<<counter<<endl;
    return 0;
}
