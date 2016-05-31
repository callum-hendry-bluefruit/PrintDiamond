#include "PrintDiamond.h"

PrintDiamondClass::PrintDiamondClass(char input_char)
	:m_input_char(input_char)
{
	m_alphabet = { { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' } };
	for (int i = 0; i <= 25; i++)
	{
		m_numbers[i] = i + 1;
	}

	for (int i = 0; i <= 51; i++)
	{
		for (int i2 = 0; i2 <= 51; i2++)
		{
			m_diamond_grid[i][i2] = ' ';
		}
	}
}

void PrintDiamondClass::LetterToNum()
{
	for (int i = 0; i <= 25; i++)
	{
		if (m_input_char == m_alphabet[i])
		{
			m_loop_control = m_numbers[i];
			break;
		}
	}
}

void PrintDiamondClass::PrintDiamond()
{
	LetterToNum();

	for (int i = 0; i < m_loop_control; i++)
	{
		if (i == 0)
		{
			m_diamond_grid[0][25] = 'A';
		}
		else
		{
			m_diamond_grid[i][(25 - i)] = m_alphabet[i];
			m_diamond_grid[i][(25 + i)] = m_alphabet[i];
		}
	}

	ReversePrintDiamond();
}

void PrintDiamondClass::ReversePrintDiamond()
{
	int column_positioning = m_loop_control;

	for (int i = 0; i < m_loop_control; i++)
	{
		column_positioning--;
		if (i == 0)
		{
			//Do nothing; prevents duplication
		}
		else
		{
			m_diamond_grid[(m_loop_control + (i - 1))][(25 - column_positioning)] = m_alphabet[column_positioning];
			m_diamond_grid[(m_loop_control + (i - 1))][(25 + column_positioning)] = m_alphabet[column_positioning];
		}
	}

	PrintGrid();
}

void PrintDiamondClass::PrintGrid()
{
	bool break_out = false;
	for (int i = 0; i <= 51; i++)
	{
		for (int i2 = 0; i2 <= 51; i2++)
		{
			std::cout << m_diamond_grid[i][i2] << " ";
			if (i == 0)
			{

			}
			else
			{
				if (m_diamond_grid[i][i2] == 'A')
				{
					break_out = true;
				}
			}

			if (break_out == true)
			{
				break;
			}
		}

		std::cout << "\n";

		if (break_out == true)
		{
			break;
		}
	}
}

char PrintDiamondClass::GetGridValue(int x_coord, int y_coord)
{
	return m_diamond_grid[x_coord][y_coord];
}