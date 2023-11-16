
#include <iostream>
using namespace std;

int main()
{
	int sayi;
	cout << "bir sayi giriniz" << endl;
	cin >> sayi;
	int bolenler = 0;

	for (int i = 1; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			bolenler += i;
		}
	}if (sayi == bolenler)
	{
		cout << "girilen sayi mukemmeldir" << endl;
	}
	else
	{
		cout << "girilen sayi mukemmel degildir" << endl;
	}
	return 0;
}