//Math problems
//Number theory
//1. Modular exponentient= when you multiply two numbers and they have value as greater than 10^18 then use should do it %(10^9+7), division of A/B will be needing  %(10^7) if A*B is greater than 10^18
//2. Modular mulplicativeInverse


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mkp make_pair
int main(){
	//3. sieve of eratosthenes
	bool sieve[1000000+2];
	memset(sieve,true,sizeof sieve);
	sieve[0]=false;
	sieve[1]=false;
	for(int p=2;p<=1000000;p++){
		if(sieve[p]==true){
			for(int i=p+p;i<=1000000;i=i+p){
				sieve[i]=false;
			}
		}
	}
	
	//4. fast factorization
	// fast factorization has two approaches that take O(root(n)) and O(logn) of time complexity but O(logn) approaches has some limitations.  
	int n;
	cin>>n;
	vector<int>vec;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			vec.pb(i);
			n=n/i;
		}
	}
	if(n>1)vec.pb(n);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	//ALL DIVISORS OF A NUMBER CAN BE FOUND IN O(ROOT(N)).
	//PRIMIALITY TEST IS DONE IN O(ROOT(N)) TIME.
	
	//5. Euler's totient function.
	int k;
	cin>>k;
	vector<int>v;
	for(int i=2;i<=k;i++){
		if(sieve[i]&&k%i==0){
			v.pb(i);
		}
	}
	float ans=k;
	for(int i=0;i<v.size();i++){
		ans=ans*(1-(float)1/v[i]);
	}
	cout<<ans;
}

