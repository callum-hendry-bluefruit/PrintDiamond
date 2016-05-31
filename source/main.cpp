#include "PrintDiamond.h"

#include <iostream>
#include <string>

using namespace ::std;

int main()
{
	PrintDiamondClass PDMain;

	cin >> PDMain.m_input_char;

	PDMain.InitArray();
	PDMain.LetterToNum();
	PDMain.PrintDiamond();
	PDMain.ReversePrintDiamond();
	PDMain.PrintGrid();

	char s;
	cin >> s;

	return 0;
}