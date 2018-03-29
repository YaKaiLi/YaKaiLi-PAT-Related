#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	getchar();
	string s;
	getline(cin,s);
	int l = s.size();
	int L=l;
	for(int i=L-1;i>=0;i--){
		if(s[i]==' '){
			l--;
		}else {
			break;
		}
	}
	L=1;
	while(l%n){
		l++;
	}
	for(int	i=L;i<=l;i++){
		s.push_back(' ');
	}
	for(int	j=0;j<=n;j++){
		if (j!=0)cout<<endl;
		for(int	i=l-1;i>=0;i--){
			if(i%n==j) cout<<s[i];
		}
	}
	getchar();
	getchar();
	return 0;
}