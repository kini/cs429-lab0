/*
 * A simple factorial program in C.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int num;
   sscanf(argv[1], "%d", &num);

   if (argc < 2 || num < 0) {
      //TODO: Figure out how to verify argument passed is an integer.
      printf("Please supply one positive integer argument.\n");
      exit(EXIT_FAILURE);
   }

   printf("%d", factorial(num));

   exit(EXIT_SUCCESS);
}

int factorial(int number)
{
   //base case: number = 0
   if (number == 0) {
      return 1;
   } else {
      //recursive case: multiply the number times (itself - 1)
      number *= factorial(number-1);
   }
}
