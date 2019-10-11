
#include <iostream>
using namespace std;  
  
void swap (int *a, int *b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  
 
void print (int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << "\n";  
}  

void shuffle(int arr[], int n)  
{  
   
     
    for (int i = n - 1; i > 0; i--)  
    {  
       
        int j = rand() % (i + 1);  
        swap(&arr[i], &arr[j]);  
    }  
}  
  
int main()  
{  
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    shuffle(arr, n);  
    print(arr, n);  
  
    return 0;  
}  
