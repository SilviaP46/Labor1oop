#include<iostream>
using namespace std;

bool test_prim(int n)
{	

	if (n <= 1)
	return false;

	for (int i = 2;i <= float(n / 2);i++)
		if (n % i == 2)
			return false;
	return true;
}
int main() {
	int n;
	if (test_prim(5))
	std::cout << "ok bitch";
		return 0;

}