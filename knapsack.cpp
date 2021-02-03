#include <iostream>
#include "knapsack.h"
using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{

  if (n==0 || W == 0)
return 0;

if(wt[n-1] > W)

return knapsack(W, wt, val, n-1);

else 

return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n-1), knapsack(W, wt, val, n-1)); 
}


