#ifndef PRINTDIAMOND_INCLUDED
#define PRINTDIAMOND_INCLUDED

#include<array>
#include<vector>
#include<iostream>

int answer();

class PrintDiamondClass
{
	public:
		std::array<char, 26> m_alphabet;
		std::array<int, 26> m_numbers;
		void InitArray();

		std::array<std::array<char, 52>, 52> m_diamond_grid;

		char m_input_char;
		int m_loop_control = 0;

		void LetterToNum();
		void PrintDiamond();
		void ReversePrintDiamond();

		void PrintGrid();
};

#endif