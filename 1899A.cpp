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
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}