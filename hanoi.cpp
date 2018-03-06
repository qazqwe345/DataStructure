#include <iostream>
using namespace std;
void hanoi(int n, char A, char B, char C);

int main(){
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
    
}

void hanoi(int n,char A, char B, char C){
	for (int i=0; i<n-1; i++){
		cout<<i+1<<endl;
	}
	for (int i=0; i<n-2; i++)
		cout<<n-i-2<<endl;
	cout<<n<<endl;
	for (int i=0; i<n-2; i++)
		cout<<i+1<<endl;
	for (int i=0; i<n-1; i++)
	{
		cout<<n-i-1<<endl;
	}
}
    
