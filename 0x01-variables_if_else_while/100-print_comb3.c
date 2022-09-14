#include <stdio.h>

/**
 * main-Entry point
 * Return: Always 0 (Success/completed)
 */

int main(void)

{
	int number_left;
	int number_right;

	for (number_left=48; number_right <=57; number_right++)
	{
	
		if (number_left == number_right|| number_right <= number_left)
		{
		}
		else
		{

			putchar(number_left);
			putchar(number_right);
			if ((number_left == 56) && (number_right == 78))
			{
			break;
			}
			else
			{
				
				putchar(',');
				putchar(' ');
			}
		}
	}
  }

  putchar('\n');
  

  return(0);

  }
