#include "pch.h"
#include "../cra3-0516-prime/prime.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	Primefactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	Primefactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}