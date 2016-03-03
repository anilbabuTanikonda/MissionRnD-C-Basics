/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
#include<stdlib.h>
#include<stdio.h>
char s1[10], s2[10];

int conver_date(int i, int l, char *s)
{
	int m, k, j = 0;
	for (m = i; m<l; m++)
	{
		s1[j] = s[m];

		j++;
	}
	s1[j] = '\0';

	k = atoi(s1);
	if (k == 0 || k<0)
	{
		return -1;
	}
	else if (k>31)
	{
		return -1;
	}
	else
		return k;
}
int conver_mntht(int i, int l, char *s)
{
	int m, k, j = 0;
	for (m = i; m<l; m++)
	{
		s1[j] = s[m];

		j++;
	}
	s1[j] = '\0';

	k = atoi(s1);
	if (k == 0 || k<0)
	{
		return -1;
	}
	else if (k>12)
	{
		return -1;
	}
	else
		return k;
}
int conver_year(int i, int l, char *s)
{
	int m, k, j = 0;
	for (m = i; m<l; m++)
	{
		s1[j] = s[m];

		j++;
	}
	s1[j] = '\0';

	k = atoi(s1);
	if (k == 0 || k<0)
	{
		return -1;
	}
	else if (k>2016 || k<1)
	{
		return -1;
	}
	else
		return k;
}
int isOlder(char *dob1, char *dob2) {
	
	int i, j, k, l, m, n, len, len1;

	for (len = 0; dob1[len] != '\0'; len++);
	for (len1 = 0; dob2[len1] != '\0'; len1++);
	if (len != 10 || len1 != 10)
		return -1;
	
	i = conver_date(0, 2, dob1);
	l = conver_date(0, 2, dob2);
	j = conver_mntht(3, 5, dob1);
	m = conver_mntht(3, 5, dob2);
	k = conver_year(6, 10, dob1);
	n = conver_year(6, 10, dob2);
	
	if (j == 2)
	{
		if (k % 4 == 0)
		{
			if (i > 29)
				return -1;
		}
		else
		{
			if (i > 28)
				return -1;
		}
	}
	if (m == 2)
	{
		if (n % 4 == 0)
		{
			if (l > 29)
				return -1;
		}
		else
		{
			if (l > 28)
				return -1;
		}
	}
	if (i == 0 || l == 0 || j == 0 || m == 0 || k == 0 || n == 0)
		return -1;
	if (i == -1 || l == -1 || j == -1 || m == -1 || k ==  -1 || n == -1)
		return -1;
	if (k == n)
	{
		if (j == m)
		{
			if (i == l)
			{
				return 0;
			}
			else if (i>l)
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (j>m)
		{
			return 2;
		}
		else
		{
			return 1;
		}


	}
	else if (k>n)
	{
		return 2;
	}
	else
	{
		return 1;
	}

	
}
