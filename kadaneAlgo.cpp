#include<iostream>
using namespace std;

int subArraysum(int arr[] , int n){
int sum;
int min =INT_MIN ; int max =0;
   for(int i = 0 ;i<n-1 ; i++){
       max = max + arr[i]; //sum of the element (subarray sum)
       if(min< max){
        min = max; // compare with previous
        // add maximum answer to min 
       }
        //check the all sum of the subarray copare with previous one
        // then after another itreation execute same 
        //after all subarray sum 
        // final max sum will be return 
    if(max< 0){
        max =0;
    }
   }
   return min;
}
int main(){
    const int n=9;
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // for(int i = 0 ;i<n-1 ; i++){
    //     cin >> arr[i];
    // }
    cout << subArraysum(arr,n);
    return 0;
}
