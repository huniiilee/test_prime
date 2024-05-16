#include "pch.h"
#include "../cra3-0516-prime/prime.cpp"

#include <vector>
using namespace std;

class PrimeFixture : public testing::Test {
public:
	Primefactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}