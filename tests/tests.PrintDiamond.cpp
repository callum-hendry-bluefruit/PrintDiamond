#include "..\source\PrintDiamond.h"
#include "gtest/gtest.h"
#include <cassert>
#include <iostream>

TEST(testDiamond, initalize_alphabet_array)
{
	std::array<char, 26> expected_result = { { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' } };

	PrintDiamondClass InitAlphabet;

	InitAlphabet.InitArray();

	EXPECT_EQ(expected_result, InitAlphabet.m_alphabet);
}

TEST(testDiamond, letter_to_number_converter)
{
	PrintDiamondClass LetterToNumConvert;

	LetterToNumConvert.m_input_char = 'F';

	LetterToNumConvert.InitArray();
	LetterToNumConvert.LetterToNum();

	int expected_result = 6;

	EXPECT_EQ(expected_result, LetterToNumConvert.m_loop_control);
}

TEST(testDiamond, test_print)
{
	PrintDiamondClass TestPrint;

	TestPrint.m_input_char = 'C';

	TestPrint.InitArray();
	TestPrint.LetterToNum();
	TestPrint.PrintDiamond();
	TestPrint.ReversePrintDiamond();
	
	EXPECT_EQ('A', TestPrint.m_diamond_grid[0][25]);

	EXPECT_EQ('B', TestPrint.m_diamond_grid[1][24]);
	EXPECT_EQ('B', TestPrint.m_diamond_grid[1][26]);

	EXPECT_EQ('C', TestPrint.m_diamond_grid[2][23]);
	EXPECT_EQ('C', TestPrint.m_diamond_grid[2][27]);

	EXPECT_EQ('B', TestPrint.m_diamond_grid[3][24]);
	EXPECT_EQ('B', TestPrint.m_diamond_grid[3][26]);

	EXPECT_EQ('A', TestPrint.m_diamond_grid[4][25]);
}