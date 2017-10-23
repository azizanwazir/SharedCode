/* Insertion sort as a function
*  To retrieve the values of
*
*
*/

#include <stdio.h>

long int * insertionsort(long int arr[])
  {
    long int n, i, j, previousValue;
    n = arr.length;
    static long int arrNum[];

    for(i = 0; i < n; i++) //copy array
      {
        arrNum[i] = arr[i];
      }

    for(i = 1; i < n; i++) //outer loop
      {
        j = n
        previousValue = arrNum[j - 1];

        while(j > 0 && previousValue > arrNum[j]) //inner loop
          {
            arrNum[j - 1] = arrNum[j];
            arrNum[j] = previousValue;
          };
        j--;
      };

      return arrNum;
  }
