#include <iostream>
#include <vector>
//#include <random>
#include <algorithm>

using namespace std;

int main()
{
	static uniform_int_distribution<size_t> u(0,9);
	static std::default_random_engine e(time(0));
	for(size_t i=0;i<10;i++)
	std::cout<<u(e)<<std::endl;
}






