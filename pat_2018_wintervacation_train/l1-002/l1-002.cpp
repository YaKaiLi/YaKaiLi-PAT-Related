#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int input=0;//��������� 
	string ch;
	int sn=0;//һ�߷���������� 
	int loss=0;//û�õ��ķ����� 
	int n=0;//һ�ߵ����� 
	int loop=0;
	cin>>input;
	cin>>ch;
	if(input == 1){
		cout<<ch<<endl<<0;
        return 0;
    }
	loss = (input-1)%4;
	//input-lossΪɳ©ʹ�õķ��������������͸��������� 
	//(input-loss-1)/2Ϊһ�����õķ��������ɸ��ݵȲ�������͹�ʽ�������(Sn = n*a1+((n*(n-1)*d)/2))��a1=3,d=2 
	sn =  (input-loss-1)/2;
	n = sqrt(sn+1)-1; //�ó�һ�ߵ����� 
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
