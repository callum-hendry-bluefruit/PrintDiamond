#include "..\source\PrintDiamond.h"
#include "gtest/gtest.h"
#include <cassert>
#include <iostream>

TEST(testDiamond, test_print)
{
	PrintDiamondClass TestPrint('C');

	TestPrint.PrintDiamond();
	
	EXPECT_EQ('A', TestPrint.GetGridValue(0, 25));

	EXPECT_EQ('B', TestPrint.GetGridValue(1, 24));
	EXPECT_EQ(' ', TestPrint.GetGridValue(1, 25));
	EXPECT_EQ('B', TestPrint.GetGridValue(1, 26));

	EXPECT_EQ('C', TestPrint.GetGridValue(2, 23));
	EXPECT_EQ(' ', TestPrint.GetGridValue(2, 24));
	EXPECT_EQ(' ', TestPrint.GetGridValue(2, 25));
	EXPECT_EQ(' ', TestPrint.GetGridValue(2, 26));
	EXPECT_EQ('C', TestPrint.GetGridValue(2, 27));

	EXPECT_EQ('B', TestPrint.GetGridValue(3, 24));
	EXPECT_EQ(' ', TestPrint.GetGridValue(3, 25));
	EXPECT_EQ('B', TestPrint.GetGridValue(3, 26));

	EXPECT_EQ('A', TestPrint.GetGridValue(4, 25));
}