#include <stdio.h>
#include <limits.h>
 
int max(int x, int y) {
    return (x > y) ? x : y;
}
 
int min(int x, int y) {
    return (x < y) ? x : y;
}
 
int trap(int bars[], int n)
{
    // base case
    if (n <= 2) {
        return 0;
    }
 
    int water = 0;

    int left[n-1];//make an array fron left 
    left[0] = 0;//declare first index val as 0
    //fill array left
    for (int i = 1; i < n - 1; i++) {
        left[i] = max(left[i-1], bars[i-1]);
    }
    int right = 0;
 
    // process bars from right to left
    for (int i = n - 2; i >= 1; i--)
    {
        right = max(right, bars[i+1]);
 
        // check if it is possible to store water in the current bar
        if (min(left[i], right) > bars[i]) {
            water += min(left[i], right) - bars[i];
        }
    }
 
    return water;
}
 
int main(void)
{
    int heights[] = { 7, 0, 4, 2, 5, 0, 6, 4, 0, 5 };
    int n = sizeof(heights) / sizeof(heights[0]);
 
    printf("The maximum amount of water that can be trapped is %d",
            trap(heights, n));
 
    return 0;
}