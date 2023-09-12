#include "main.h"

/**
 * calculate_sqrt - helper function to calculate the square root recursively
 * @n: the number to calculate the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * Return: the resulting square root
 */
int calculate_sqrt(int n, int low, int high)
{
    int mid = (low + high) / 2;
    if (mid * mid == n)
    {
        return mid;
    }
    else if (mid * mid < n)
    {
        return calculate_sqrt(n, mid + 1, high);
    }
    else
    {
        return calculate_sqrt(n, low, mid - 1);
    }
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the resulting square root, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0 || n == 1)
    {
        return n;
    }
    return calculate_sqrt(n, 0, n);
}

