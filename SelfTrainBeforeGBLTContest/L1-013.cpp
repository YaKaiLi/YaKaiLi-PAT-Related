#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int n=0;
	int sum=0;
	int mid=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		mid=1;
		for(int j=i;j>0;j--){
			mid = mid*j;
		}
		sum = sum+mid;
	}
	cout<<sum;
	return 0;
}
