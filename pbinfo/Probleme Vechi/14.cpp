#include <iostream>
using namespace std;

int prim (int n)
{
	if(n==0 || n==1)
		return 0;
  else if (n%2==0)
   return 0;
	for (int d=3;d*d<=n;d+=2)
	{
		if(n%d==0)
			return 0;
	}
	return 1;
}
void suma_div (int n,int &sum)
{
	int d=1;
	int s=0;
	while (d*d<n)
	{
		if(n%d==0)
			if(prim(d)==1)
			{
				s=s+d+n/d;
			}
		d++;
	}
	if(d*d==n && prim(d*d)==1)
		s=s+d;
	sum =s;
}
int main()
{
	int n, sum;
	cin >> n;
	suma_div(n, sum);
	cout << sum;

}
