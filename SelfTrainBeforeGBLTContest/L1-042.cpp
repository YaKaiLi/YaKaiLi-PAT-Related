#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int yyy,mm,dd;
	scanf("%d-%d-%d",&mm,&dd,&yyy);
	printf("%04d-%02d-%02d",yyy,mm,dd);
	return 0;
}
