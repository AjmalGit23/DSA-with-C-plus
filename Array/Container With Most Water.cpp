#include <iostream>
using namespace std;

/* Container With Most Water */

int maxArea (int height[], int n) {
    int left = 0, right = n - 1;
    int area = 0;
    
    while (left < right) {
        int h = min (height[left], height[right]);
        int w = right - left;
        area = max (area, h * w);
        
        if (height[left] < height[right]) 
            left++;
        else
            right--;
    }
    
    return area;
}

int main () {
    int height[] = {1,8,6,2,5,4,8,3,7};
    
    int size = sizeof (height) / sizeof (height[0]);
    
    int res = maxArea (height, size);
    
    cout << "Max area = " << res << endl;

    return 0;
}

/*

Area depends on:    min (height[left], height[right]) * (right-left)

So, 
    h = min (height[left], height[right])
    w = right - left

*/