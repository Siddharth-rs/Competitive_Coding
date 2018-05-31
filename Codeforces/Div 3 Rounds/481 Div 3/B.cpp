#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
typedef pair <int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define fl(i,a,b) for(int i(a);i<(b);i++)
#define rep(i,n) fl(i,0,n)
#define rfl(i,a,b) for(int i(a);i>=(b);i--)
#define srt(v) sort((v).begin(),(v).end())
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define slen(s) s.length()
#define F first
#define S second
#define MAX 2005

int main(){

	#ifndef ONLINE_JUDGE
	freopen("/Users/sahilbansal/Desktop/input.txt","r",stdin);
	freopen("/Users/sahilbansal/Desktop/output.txt","w",stdout);
	#endif

    int n;

    cin >> n ;

	string s;

	cin >> s;

	int res = 0, count = 0;

	rep(i, n){
		if(s[i] == 'x'){
			count ++;
		}
		else{
			if(count > 2){
				res += count - 2;
			}
			count = 0;
		}
	}
	if(count > 2){
		res += count - 2;
	}
	cout << res; 
	return 0;
}