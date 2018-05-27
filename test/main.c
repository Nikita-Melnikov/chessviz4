#define CTEST_MAIN

#include <ctest.h>
#include <stdbool.h>
char a[9][9];
//1
CTEST(syntaxis, Correct_Syn0)
{
	bool result = moveboard(a, "e228-e1488");
	ASSERT_FALSE(result);
}
//2
CTEST(syntaxis, Correct_Syn1)
{
	bool result = moveboard(a, "z2-z3");
	ASSERT_FALSE(result);
}
//3
CTEST(syntaxis, Correct_Syn2)
{
	bool result = moveboard(a, "e1488-e228");
	ASSERT_FALSE(result);
}
//4
CTEST(syntaxis, Correct_Syn3)
{
	bool result = moveboard(a, "e2_e4");
	ASSERT_FALSE(result);
}
//5
CTEST(syntaxis, Correct_Syn4)
{
	bool result = moveboard(a, "e2-e4");
	ASSERT_TRUE(result);
}
