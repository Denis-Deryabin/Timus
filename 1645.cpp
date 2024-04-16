#include <iostream>
using namespace std;
int main(){
    int n,cf,cd;
    cin>>n;
    int* a;
    int* f;
    int* d;
    a=new int [n];
    f=new int [n+1];
    d=new int [n+1];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++){
        cf=1;
        cd=n;
        for (int j=i;j<n;j++) if (a[i]>a[j]) cd--;
        for (int j=0;j<i;j++) if (a[i]<a[j]) cf++;
        //cf cd
        f[a[i]]=cf;
        d[a[i]]=cd;
    }
    for (int i=1;i<n+1;i++) cout<<f[i]<<" "<<d[i]<<endl;
    return 0;
}
