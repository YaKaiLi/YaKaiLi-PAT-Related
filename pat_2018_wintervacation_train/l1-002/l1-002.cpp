#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int input=0;//输入的数字 
	string ch;
	int sn=0;//一边符号数的求和 
	int loss=0;//没用掉的符号数 
	int n=0;//一边的行数 
	int loop=0;
	cin>>input;
	cin>>ch;
	if(input == 1){
		cout<<ch<<endl<<0;
        return 0;
    }
	loss = (input-1)%4;
	//input-loss为沙漏使用的符号数，接下来就该求行数了 
	//(input-loss-1)/2为一边所用的符号数，可根据等差数列求和公式求出行数(Sn = n*a1+((n*(n-1)*d)/2))。a1=3,d=2 
	sn =  (input-loss-1)/2;
	n = sqrt(sn+1)-1; //得出一边的行数 
	for(int i=n;i>0;i--){
		loop=2*i+1;
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=loop;j++){
			cout<<ch;
		}
		cout<<endl;
	}
	for(int j=1;j<=n;j++){
		cout<<" ";
	}
	cout<<ch<<endl;
	for(int i=1;i<=n;i++){
		loop=2*i+1;
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=loop;j++){
			cout<<ch;
		}
		cout<<endl;
	}
	cout<<loss;
	return 0;
}
