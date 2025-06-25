#include<iostream>
using namespace std;

void ins(int arr[ ],int a,int b,int &n);

int main() {
	int arr[10]={1,2,3,4,5};
	int n = 5,a,b;

	cout << "enter the number to be inserted: " << endl;
	cin >> a;
	cout << "enter the position to be inserted in: " << endl;
	cin >> b;
	if(b > n) 	{
    	cout << "invalid position" << endl;
	}
	else	{
        	ins(arr,a,b-1,n);
	}
}
void ins(int arr[],int a,int b,int &n) {
	int i;
	for(i=n;i>=b;i--)	{
    	arr[i+1] = arr[i];
	}
	arr[b] = a;
	n++;
 	cout << "new array is" << endl;
	for(int i=0;i<n;i++) 	{
    	cout << arr[i] << " ";
	}
}
