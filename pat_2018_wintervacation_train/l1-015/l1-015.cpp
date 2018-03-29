#include <iostream>
#include <string>
using namespace std;

int main(){
	string ch;
	int length=0;
	int halfOflength=0;
	cin>>length;
	cin>>ch;
	halfOflength = (length+1)/2;
	for(int i=0;i<halfOflength;i++){
		for(int i=0;i<length;i++){
			cout<<ch;
		}
		if(i!=(halfOflength-1)) cout<<endl;
	}
	return 0;
}
