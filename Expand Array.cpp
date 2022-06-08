#include<iostream>
using namespace std;
void grow(int *&arr, int &n)
{
	int *temp =new int [2*n];
	for (int i=0;i<n;i++)
		temp[i]=*(arr+i);
	delete[] arr;
	n=2*n;
	arr=temp;
	cout<<"array expanded";
}
int main()
{
	int size=5, *arr=new int[size], terminate=1,n;
	cout<<"Enter Integers & for stop input enter -1 "<<endl;
	for (int i=0; i<size&&terminate!=0; i++)
	{
		cin>>arr[i];
		if (arr[i]==-1)
			terminate=0;
		else if (i+1==size)
			grow(arr,size);
		n=i;
	}
	for (int j=n-1; j>-1; j--)
		cout<<arr[j]<<endl;




	system("pause");
	return 0;
}