#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
 
using namespace std;
 
int main()
{_
    int t;
    cin>>t;
    while(t--){
        int n,cont=0,answer=0;
        bool flag=true;
        cin>>n;
        string line;
        cin>>line;
        for(int i=0;i<n && flag;i++){
            if(i<n && line[i]=='.' && line[i+1]=='.' && line[i+2]=='.'){
                cont=2;
                flag=false;
            }else{
                if(line[i]=='.'){
                    cont++;
                }
            }
        }
        answer=cont;
        cout<<answer<<endl;
    }
    return 0;
}