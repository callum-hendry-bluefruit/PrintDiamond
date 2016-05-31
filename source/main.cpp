#include "PrintDiamond.h"

#include <iostream>
#include <string>

using namespace ::std;

int main()
{
	char input_char;
	cin >> input_char;

	PrintDiamondClass PDMain(input_char);

	PDMain.PrintDiamond();

	char s;
	cin >> s;

	return 0;
}