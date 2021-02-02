#include "max.h"
#include "knapsack.h"

int main()
{
max();
int val[] = {60,100,120};
int wt[] = {10,20,30};
int W = 50;
int n = sizeof(val) / sizeof(val[0]);
cout << knapsack(W,wt,val,n);
system("pause");
return 0;
}
