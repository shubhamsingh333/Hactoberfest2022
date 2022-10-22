#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
	ll x,n,pt,left,right;
	cin >> x >> n;
	set<int> y;
	y.insert(0),y.insert(x);
	multiset<int> ms;
    ms.insert(x);
	while(n--){
		cin >> pt;
 
		auto it=y.upper_bound(pt);
		left=*prev(it);
		right=*it;
 
		ms.erase(ms.find(right-left));
 
		ms.insert(pt-left);
		ms.insert(right-pt);
 
		y.insert(it,pt);
 
		cout << *ms.rbegin() << endl;
	}
	return 0;
}
