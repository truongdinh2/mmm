#include <iostream>;
using namespace std;

int chuyen(int n, char cot_1, char cot_2, char cot_3){
	if(n==1){
		cout << cot_1 << " chuyen sang " << cot_3 <<endl;		
	}
	else{
	chuyen(n-1, cot_1, cot_3, cot_2);
	chuyen(1,cot_1,cot_2,cot_3);
	chuyen(n-1, cot_2, cot_1, cot_3);
}	
}
int main(){
	int n;
	cin >> n;
	cout << chuyen(n,'a','b','c');
}
