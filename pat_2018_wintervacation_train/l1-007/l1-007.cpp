#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
    cin>>input;
	for(int i=0;i<input.length();i++){
		switch(input[i])
		{
		case '0' :
		   cout << "ling"; 
		   break;
		case '1' :
		   cout << "yi"; 
		   break;
		case '2' :
		   cout << "er"; 
		   break;
		case '3' :
		   cout << "san"; 
		   break;
		case '4' :
		   cout << "si"; 
		   break;
		case '5' :
		   cout << "wu"; 
		   break;
		case '6' :
		   cout << "liu"; 
		   break;
		case '7' :
		   cout << "qi"; 
		   break;
		case '8' :
		   cout << "ba"; 
		   break;
		case '9' :
		   cout << "jiu"; 
		   break;
		default :
		   cout << "fu";
		}
		if(i!=(input.length()-1)) cout<<" ";
	}
    return 0;
}
