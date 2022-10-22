#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n;
	cin >> n;
	cout << n << " ";
	while(true){
		if(n==1){
			break;
		}
		if(n%2 == 1){
			n = n*3 + 1;
		}
		else{
			n /= 2 ;
		}
 
		cout << n << " ";
	}
}
