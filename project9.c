#include <stdio.h>
#include <stdbool.h>

// Constants
#define MIN_OPTION 0
#define MAX_OPTION 4
#define MIN_SIZE 2
#define MAX_SIZE 9
#define PATTERN_ONE 1
#define PATTERN_TWO 2
#define PATTERN_THREE 3
#define PATTERN_FOUR 4
#define QUIT 0

// Function prototypes
int getOption (void);
int getSize (void);
void patternOne (int size);
void patternTwo (int size);
void patternThree (int size);
void patternFour (int size);

/*************************************************************
 * CLASS INFORMATION
 * -----------------
 *      Program Name: Program 9
 * Instructor/Course: Mr. Chappell for CS 214-1, C Programming
 *  Program Due Date: 4/15/2024
 *
 *  #  1st Programmer 
 *  #           Name: Jullian George 
 *  #     Student ID: 145105
 *  #  2nd Programmer
 *  #           Name: Jadon GIbson
 *  #     Student ID: 146828
 *
 * DOCUMENTATION
 * -------------
 *    This program solves Project 54 from page 311 of the textbook.
 *
 * PLEDGE
 * ------
 *    We pledge that all of the lines in this C program are
 *    our own first-time work for CS 214 this semester, that
 *    none of the lines in this C program have been copied
 *    from anyone or anywhere unless authorized to do so by
 *    our CS 214 instructor, that we came up with the uploaded
 *    solution, that any help writing code was solely from our
 *    instructor, that we did not attempt to help anyone not
 *    in our team on this assignment, and that any violation
 *    of this pledge will result in our earning a score of
 *    zero on this work as a team.
 *
 *    Signed: Jullian George 
 *          & Jadon Gibson
 ************************************************************/

int
main (void)
{
  int option, size;
  do
	{
	  option = getOption ();
	  if (option != QUIT)
		{
		  size = getSize ();
		  switch (option)
			{
			case PATTERN_ONE:
			  patternOne (size);
			  break;
			case PATTERN_TWO:
			  patternTwo (size);
			  break;
			case PATTERN_THREE:
			  patternThree (size);
			  break;
			case PATTERN_FOUR:
			  patternFour (size);
			  break;
			default:
			  printf ("Invalid option!\n");
			  break;
			}
		}
	}
  while (option != QUIT);

  return 0;
}

int
getOption (void)
{
  int option;
  do
	{
	  printf ("Enter pattern option (1-4, 0 to quit): ");
	  scanf ("%d", &option);
	  if (option < MIN_OPTION || option > MAX_OPTION)
		{
		  printf ("Invalid option! Please enter a number between 0 and 4.\n");
		}
	}
  while (option < MIN_OPTION || option > MAX_OPTION);
  return option;
}

int
getSize (void)
{
  int size;
  do
	{
	  printf ("Enter size of the pattern (2-9): ");
	  scanf ("%d", &size);
	  if (size < MIN_SIZE || size > MAX_SIZE)
		{
		  printf ("Invalid size! Please enter a number between 2 and 9.\n");
		}
	}
  while (size < MIN_SIZE || size > MAX_SIZE);
  return size;
}

void
patternOne (int size)
{
  int row, column;
  for (row = 1; row <= size; row++)
	{
	  for (column = 1; column <= size; column++)
		{
		  if (row == column)
			printf ("%d", size);
		  else
			printf ("$");
		}
	  printf ("\n");
	}
}

void
patternTwo (int size)
{
  int row, column;
  for (row = 1; row <= size; row++)
	{
	  for (column = 1; column <= size; column++)
		{
		  if (row == column)
			printf ("%d", size);
		  printf ("$");
		}
	  printf ("\n");
	}
}

void
patternThree (int size)
{
  int row, column;
  for (row = 1; row <= size; row++)
	{
	  for (column = 1; column <= size; column++)
		{
		  if (row == column)
			printf ("%d", size);
		  printf ("$");
		}
	  printf ("\n");
	}
}

void
patternFour (int size)
{
  int row, column;
  for (row = 1; row <= size; row++)
	{
	  for (column = 1; column <= size; column++)
		{
		  if (row == column)
			printf ("%d", size);
		  printf ("$");
		}
	  printf ("\n");
	}
}
