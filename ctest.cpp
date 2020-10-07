#include <iostream>;
using namespace std;

int sum(int x){
	
	if(x<= 2) {
	return 1;
	}
	else{
		return sum(x-1) + sum(x-2);
	}
	
	
}

int main(){
	int x;
	cin >> x;
	cout << sum(x) ;
	
}
