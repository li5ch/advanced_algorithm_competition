#include<bits/stdc++.h>
using namespace std;

#define P pair<int,int>
#define m_p(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define fi first
#define se second
#define ll long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define sz(a) ((int) (a).size())
#define me(f, x) memset(f, x, sizeof(f))

int main(){
	
	freopen("in.txt", "r", stdin);
    freopen("out.txt","w", stdout);
	int C,L;
    cin>>C>>L;
    vii a(C);vii b(L);
    for(int i=0;i<C;i++){
        cin>>a[i].fi>>a[i].se;
    }
    for(int j=0;j<L;j++){
        cin>>b[j].fi>>b[j].se;
    }
    sort(a.begin(),a.end(),[](P i,P j){
        return i.fi>j.fi;
    });
    int ans=0;
    sort(b.begin(),b.end(),[](P i,P j){
        return i.fi>j.fi;
    });
    for(int i=0;i<C;i++){
       for(int j=0;j<L;j++){
           if(b[j].se&&a[i].fi<=b[j].fi&&a[i].se>=b[j].fi){
               b[j].se--;ans++;break;
           }
       } 
    }
    cout<<ans<<endl;

	return 0;	
} 