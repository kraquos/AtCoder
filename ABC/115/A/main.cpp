#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int main(void){
	int D;
	cin>>D;
	
	if(D==25)cout<<"Christmas"<<endl;
	else if(D==24)cout<<"Christmas Eve"<<endl;
	else if(D==23)cout<<"Christmas Eve Eve"<<endl;
	else if(D==22)cout<<"Christmas Eve Eve Eve"<<endl;
	
	return 0;
}
