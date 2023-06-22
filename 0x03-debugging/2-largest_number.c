#include "main.h"
/**
 * largest_number - returns largest of 3 numbers
 * first integer:@a
 * second integer:@b
 * third integer:@c
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
 int largest;
 if (a > b && a > c)
 {
 largest = a;
 }
 else if (a > b && c > a)
 {
 largest = c;
 }
 else if (b > c)
 {
 largest = b;
 }
 else
 {
 largest = c;
 }
return (largest);
}
