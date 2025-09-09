#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
 
using namespace std;
 
int main()
{_
    int t;
    cin>>t;
    while(t--){
        int n, x,i,pos;
        cin>>n>>x;   
        int vet[x+1]={};
        vet[x]=2;
        
        for(i= 0; i<n; i++){
            cin>>pos;
            vet[pos]=1;
        }
        int soma=0,maior=0,ini=0;
        for(i=0;i<=x;i++){
            
                if(vet[i]==1){
                    soma = i-ini;
                    ini = i;
                    maior = max(maior,soma);
                    soma=0;
                }
                if(vet[i]==2){
                    soma= i-ini;
                    soma*=2;
                    maior = max(maior,soma);
                    soma=0;
                }
            
        }/*
        for(i=x; i>=0;i--){
            
                if(vet[i]==1){
                    soma= 
                    maior = max(maior,soma);
                    soma=0;
                }
            
        }*/
        cout<<maior<<endl;

        
    }
    return 0;
}