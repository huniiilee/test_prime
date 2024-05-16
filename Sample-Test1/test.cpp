#include "pch.h"
#include "../cra3-0516-prime/prime.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	Primefactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}