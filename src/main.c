#include <stdio.h>
#include "deposit.h"

int main()
{
  int day, sum, sum1, sum2;
  sum1 = 0;
  sum2 = 0;
  sum1 = sum2;
  sum2 = sum1;
  printf ("vvedite day and sum\n");
  scanf("%d", &day);
  scanf("%d", &sum);
  if (day<0 || sum<0)
    {
      printf("invalid input");
      return 1;
    }
    if (!validValue(day, sum))
      {
	printf("Invalid range\n");
	return 1;
      }
    sum = getsum(day, sum);
    printf ("sum=%d\n", sum);

    return 0;
    }
