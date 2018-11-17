#include <iostream>
using namespace std;

int  jumpit(int a[],int n)
{

	if (n<=0)
	{
		return 0;
	}	
	else
	return a[n-1]+jumpit(a,n-2);


	
}

int main()
{
	int a[]={0,2,32,4,5,7,5,1};
	int n=sizeof(a)/sizeof(a[0]);
	int sum1,sum2;
	 //cout <<jumpit(a,n);
	 cout<<endl;
	 
	 sum1=a[n-1]+jumpit(a,n-2);
	 cout<<sum1;
	 
	 cout<<endl;
	 
	 sum2=a[n-1]+jumpit(a,n-1)+a[n+1];
	 cout<<sum2;
	 
	 if (sum1<sum2)
	 {
	 	cout << "sum1 is low cost : "<<sum1<<endl;
	 }
	 else 
	   	cout << "sum2 is low cost : "<<sum2<<endl;

	return 0;
}
