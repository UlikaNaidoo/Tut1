#include <iostream>

using namespace std;

int main()
{
int x = 1;
while (x <= 20)
{
	cout << x << " ";

	if (x % 3 == 0)
	{
		cout << "buzz" ;
	}


	if (x % 5 == 0)
	{
		cout << "fizz" ;
	}
	
	cout << endl;
	x++;


}
system("pause");
return 0;
}
