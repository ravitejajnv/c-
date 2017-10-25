#include<bits/stdc++.h>
using namespace std;

// Initialize values of last non-zero digit of // numbers from 0 to 9
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastNon0Digit(int n)
{
	if (n < 10)
		return dig[n];
	else{
	    int a=n/5;
	    int b=n%5;
	    b=dig[b];
	    int c;
	    if (a%4==0) c=6;
	    else if (a%4==1) c=2;
	    else if (a%4==2) c=4;
	    else if (a%4==3) c=8;
	    return (c*lastNon0Digit(a)*b)%10;
	}
}

int main()
{
	int n;
	cin>>n;
	cout << lastNon0Digit(n);
	return 0;
}
