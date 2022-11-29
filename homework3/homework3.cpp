#include <iostream>

using namespace std;

int main()
{
	long long  int n=0,resaut=1;
	
	while(true)
	{
		cout << "Napishite programu vichesl faktoriala" << endl;
		cin >> n;

		if (n == 0)
			cout << "ERORR dead" << endl;
		else
			break;
	}
	if (n > 0) 
	{
		for (int i = n; i != 0; i--)
			resaut = resaut * i;
		
	}
	else
	{
		for (int i = n; i !=0; i++)
			resaut = resaut * i;
	}
	cout << "Your faktorial " << resaut << endl;

	return 0;
}