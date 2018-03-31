#include <iostream>
using namespace std;

int main(){
	int countOfschool = 0;
	int numberOfDui[10]={0};
	int site[100][100];
	int xueshengshengyu=0,xuexiaoshengyuren[10]={0},xuexiaoshengyu=0,zuoweizhizhen[100]={0};
	int sitenumber=1;
	cin>>countOfschool;
	xuexiaoshengyu = countOfschool;
	//输入 
	for(int i=0;i<countOfschool;i++){
		cin>>numberOfDui[i];
		xueshengshengyu += numberOfDui[i]*10;
		xuexiaoshengyuren[i] = numberOfDui[i]*10;
	}
	//生成座位号
	while(xueshengshengyu>0){
		for(int i=0;i<countOfschool;i++){
			if(xuexiaoshengyuren[i]>0&&xuexiaoshengyu>1){
				site[i][zuoweizhizhen[i]] = sitenumber;
				sitenumber++;
				xuexiaoshengyuren[i]--;
				xueshengshengyu--;
				zuoweizhizhen[i]++;
				if(xuexiaoshengyuren[i]==0) xuexiaoshengyu--;
			}else if(xuexiaoshengyuren[i]>0&&xuexiaoshengyu==1){
				site[i][zuoweizhizhen[i]] = sitenumber;
				sitenumber++;
				sitenumber++;
				xuexiaoshengyuren[i]--;
				xueshengshengyu--;
				zuoweizhizhen[i]++;
				if(xuexiaoshengyuren[i]==0) xuexiaoshengyu--;
			}
		}
	}
	//输出 
	int shushu=0;
	for(int i=0;i<countOfschool;i++){
		cout<<"#"<<i+1<<endl;
		for(int j=0;j<numberOfDui[i]*10;j++){
			//判断所在行 			
			if(shushu!=0)cout<<" ";
			cout<<site[i][j];
			if(shushu==9&&(numberOfDui[i]*10-j>10)) cout<<endl;
			shushu++;
			if(shushu==10) shushu=0;
		}
		cout<<endl;
	}
	return 0;
}
