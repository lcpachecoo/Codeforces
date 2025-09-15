#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
 
using namespace std;
 
int main()
{_
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int vet[n];
        for(int i=0;i<n;i++){
            cin>>vet[i];
        }
        if(vet[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}