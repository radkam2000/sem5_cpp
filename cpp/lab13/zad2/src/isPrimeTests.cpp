#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "isPrime.h"

using namespace testing;

TEST(isPrime, ZeroInput){
    EXPECT_FALSE(isPrime(0));
}

TEST(isPrime, primeInputs){
    EXPECT_TRUE(isPrime(5));
    EXPECT_TRUE(isPrime(7));
    EXPECT_TRUE(isPrime(11));
    EXPECT_TRUE(isPrime(29));
}

TEST(isPrime, notPrimeInputs){
    EXPECT_FALSE(isPrime(1));
    EXPECT_FALSE(isPrime(0));
    EXPECT_FALSE(isPrime(4));
    EXPECT_FALSE(isPrime(10));
}
