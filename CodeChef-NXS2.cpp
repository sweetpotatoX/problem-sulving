//
// Created by abdob on 10/29/2022.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<double,double>, null_type,less<pair<double,double>>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define ld long double
#define fn(x) for (int i = 1; i <= (x); i++)
#define we int t=1;cin>>t;while(t--)
#define all(x) (x).begin(),(x).end()
#define pp priority_queue<int,vector<int>,greater<int>>pq;
#define hema ios_base::sync_with_stdio(0) , cin.tie(0) ,cout.tie(0);
using namespace std;
int mexel=100;
int arr[10000];
signed main(){
    hema
    // int a,target,counter=0;cin>>a>>target;
    // vector<int>nums(a);
    // fn(a)cin>>nums[i];
    // for(int mask=0; mask < (1<<a); mask++){
    //     int sum=0;
    //         for(int i=0; i<a; i++)
    //             if((mask>>i)&1)
    //                 sum+=nums[i];
    //         if(sum==target)
    //             counter++;
    // }
    // cout<<counter;
    we{
        //   int x,y;cin>>x>>y;
        //   int a,b;cin>>a>>b;
        //   if(x==0||y==0)cout<<0<<"\n";
        //   else{

        //   }
        int a,i,b,f;cin>>a;
        if(a&1)cout<<1<<" "<<a-1<<"\n";
        else {
            for( i = 1 ; i <= a ; i++)
            {
                b = a^i;
                if((b^i)== a && (b <= a && b >=1))
                {f= 1 ; break ; }
            }
            if(f ==1 ) cout<<i<<" "<<b<<"\n";
            else cout<<-1<<"\n";
        }
    }

}

