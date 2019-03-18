#include <iostream>
#include <utility>

std::pair<int, int> getFrac(const int& X) {
	int n = 1, diff;
	while((diff = X-n*(n+1)/2) > 0)
		++n;
	if(n%2)
		return std::pair<int, int>(-diff+1, n+diff);
	else
		return std::pair<int, int>(n+diff, -diff+1);
}

int main(void)
{
	int X;
	std::cin >> X;

	std::pair<int, int> p = getFrac(X);

	std::cout << p.first << '/' << p.second;
}
