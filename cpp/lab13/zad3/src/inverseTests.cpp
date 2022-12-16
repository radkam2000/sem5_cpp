#include <gtest/gtest.h>
#include "inverse.h"

TEST(inverse, zeroThrowException){
    EXPECT_ANY_THROW(inverse(0));
}

TEST(inverse, checkInversion){
    EXPECT_FLOAT_EQ(inverse(10),0.1);
    EXPECT_FLOAT_EQ(inverse(2),0.5);
    EXPECT_FLOAT_EQ(inverse(1),1);
}

TEST(inverse, checkInversionForNegatvie){
    EXPECT_FLOAT_EQ(inverse(-2),-0.5);
    EXPECT_FLOAT_EQ(inverse(-1),-1);
    EXPECT_FLOAT_EQ(inverse(-10),-0.1);
}