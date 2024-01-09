#include<iostream>
using namespace std;

int subArraysum(int arr[] , int n){
int sum;
// vector<int> v;
   for(int i = 0 ;i<n-1 ; i++){
    for(int j= i+1 ; j <n ;j++){
        if((arr[i]+ arr[j]) < (arr[i] + arr[j+1])){
        sum = arr[i] + arr[j];
        }
        //check the all sum of the subarray copare with previous one
        // then after another itreation execute same 
        //after all subarray sum 
        // final max sum will be return 
    }

   }
   return sum;
}
int main(){
    const int n=9;
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // for(int i = 0 ;i<n-1 ; i++){
    //     cin >> arr[i];
    // }
    subArraysum(arr,n);
}