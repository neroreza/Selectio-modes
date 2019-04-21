#include <iostream>
using namespace std;

int c (int n ,int k)
{
	int a[k+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=i ; j>=0  ; j--)
		{
			if ( (i==j)||(j==0) )
			{
				a[j]=1;
			}
			else
			{
				a[j]=a[j]+a[j-1];
			}
//			cout<<a[j]<<"    ";
		}
//		cout<<endl;
	}
	cout<<endl<<"A selection of "<<k<< " to "<<n<<" cases is possible in "<<a[k]<< " possible ways.";
	
}
int main() {
	c(10,7);// example : entekhab 7 ta az 10 ta
	return 0;
}
