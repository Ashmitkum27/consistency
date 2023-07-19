#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        long long int c,d,sum=0,sum1=0;

        for (int i = 0; i<a ; ++i){
            cin>>c;
            sum = c+sum;
            
        }
        for (int i= 0; i<b; ++i){
            cin>>d;
            sum1 = d+sum1;
        }

        if(sum>sum1){
            cout<<"Tsondu"<<endl;
        }
        else if(sum1>sum){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }



    }
return 0;
}