#include<iostream>
#include<cassert>
using namespace std;

bool test_prim(int n)
{	//The function checks if a given number is prime.

	if (n <= 1)
	return false;

	for (int i = 2;i <= float(n / 2);i++)
		if (n % i ==0)
			return false;
	return true;
}


void längste_Sequenz(int v[],int st,int dr)
{	//This function prints the first longest sequence of numbers with increasing value.
	if (dr == 0)
		std::cout << "Es gibt keine ansteigende zusammenhangende Teilfolge.";
	else
	{
		std::cout << "Die langste ansteigende zusammenhangende Teilfolge: ";
		for (int i = st;i <= dr;i++)
			std::cout << v[i] << " ";
	}
	
}
int main() 
{	//Choose an option from the menu in order to run the solutions.
	assert(test_prim(2) == false);

	int choice;
	do
	{
		system("CLS");
		std::cout << "MENIU" << endl;
		std::cout << "Option1:1a." << endl;
		std::cout << "Option2:1b." << endl;
		std::cout << "Enter your choice." << endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			int n;
			std::cout << "n=:";
			std::cin >> n;
			cout << "Die Primzahlen kleiner als " << n << " sind:" << endl;
			for (int i = 2; i <= n; i++)
				if (test_prim(i) == true)
					std::cout << " " << i;
			std::cout << endl;
			system("PAUSE");
			break;

		case 2:
			int v[] = { 9,8,7,-2 };
			int secv_max = 0, nr = 1, st = 1, dr = 0;

			for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++)
			{
				if (v[i + 1] > v[i])
					nr++;
				else
				{
					if (nr > secv_max)
					{
						secv_max = nr;
						st = i - nr + 1;
						dr = i;
					}
					nr = 1;
				}
			}
			längste_Sequenz(v, st, dr);
			std::cout << endl;
			system("PAUSE");

		
		}
	} while (choice != 3);
	return 0;
	
}
