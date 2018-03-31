#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main(){
	string email[10000];
	int score[10000][2]={0};
	int scoreBak[10000]={0};
	int countOfall;
	int numberOfming = 0;
	int g=0;
	int sumOfquan=0;
	int mingci=1;
	cin>>countOfall;
	cin>>g;
	cin>>numberOfming;
	for(int i=0;i<countOfall;i++){
		cin>>email[i];
		cin>>score[i][0];
		scoreBak[i] = score[i][0];
		if(score[i][0]>=g){
			sumOfquan += 50;
		}else if(score[i][0]>60){
			sumOfquan += 20;
		}
	}
	sort(scoreBak,scoreBak+countOfall);
	while(scoreBak[countOfall-numberOfming-1]>=scoreBak[countOfall-numberOfming]){
		numberOfming++;
	}
	for(int i=1;i<=numberOfming;i++){
		if(i>1&&(scoreBak[countOfall-i]==scoreBak[countOfall-i+1])){
			mingci = mingci;
		}else{
			mingci=i;
		}
		cout<<mingci<<" ";
		cout<<scoreBak[countOfall-i]<<endl;
	}
	return 0;
}
