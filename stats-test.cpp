#include "pch.h"

//#include "gtest/gtest.h"
#include "stats.h"
#include <cmath>
using namespace Statistics;
//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

TEST(Statistics, ReportsAverageMinMax) {
    Stats s = ComputeStatistics({ 1.5, 8.9, 3.2, 4.5 });
    double epsilon = 0.001;
    EXPECT_LT(std::abs(s.average - 4.525), epsilon);
    EXPECT_LT(std::abs(s.max - 8.9), epsilon);
    EXPECT_LT(std::abs(s.min - 1.5), epsilon);
}

TEST(Statistics, AverageNaNForEmpty) {
    Stats s = ComputeStatistics({ NAN,(INFINITY - INFINITY),HUGE_VAL * 0.0F,NAN });

    EXPECT_TRUE(std::isnan(s.average));
    EXPECT_TRUE(std::isnan(s.min));
    EXPECT_TRUE(isnan(s.max));

}


