#include <iostream> 
using namespace std; 

int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }  
	return -1; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
	int x = 7; 
	int n = sizeof(arr) / sizeof(int); 
	cout <<  "phan tu nam o vi tri so " << binarySearch(arr, 0, n - 1, x);
	return 0; 
} 
// ahihi
