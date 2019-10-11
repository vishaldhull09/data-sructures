#include <iostream>
using namespace std;  
  
void mergeArrays(int arr1[], int arr2[], int n1, 
                             int n2) 
{ 
    int i = 0, j = 0, k = 0; 
    int arr3[n1+n2];
  
    while (i<n1 && j <n2) 
    { 
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
 
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
    while (j < n2) 
        arr3[k++] = arr2[j++];
        
    for(int i=0;i<n1;i++){    
        arr1[i]=arr3[i];
    }
    int p=0;
        
    for(int i=n1;i<n1+n2;i++){    
        arr2[p]=arr3[i];
        p++;
    }
} 
  

int main() 
{ 
    int arr1[] = {1,4,7,8,10}; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    int arr2[] = {2,3,9}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
    
     cout << "Array before merging" <<endl; 
     for (int i=0; i < n1; i++) 
        cout << arr1[i] << " "; 
    cout<<endl;    
    for (int i=0; i < n2; i++) 
        cout << arr2[i] << " ";  
    cout<<endl;    
  
    mergeArrays(arr1, arr2, n1, n2); 
  
    cout << "Array after merging" <<endl; 
    for (int i=0; i < n1; i++) 
        cout << arr1[i] << " "; 
    cout<<endl;    
    for (int i=0; i < n2; i++) 
        cout << arr2[i] << " ";     
  
    return 0; 
} 
