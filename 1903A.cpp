#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
 
using namespace std;
 
int main()
{_
    int t;
    cin>>t;
    while(t--){
        bool flag=true;
        int n, k;
        cin>>n>>k;   
        int vet[n];
        for(int i= 0; i<n; i++){
            cin>>vet[i];
        }/*
        for(int i= 0; i<n; i+=k){ 
            sort(vet+i, vet+(i+k));
        }*/
        if(k>1) sort(vet,vet+n );
        for(int i = 1; i < n; i++){
            if(vet[i] < vet[i-1]){
                flag = false;
                break;
            }
        }
        /*
        for(int i= 0; i<n; i++){
            cout<<vet[i]<<" ";
        }
        cout<<endl;
        */
 
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }     
    }
    return 0;
}