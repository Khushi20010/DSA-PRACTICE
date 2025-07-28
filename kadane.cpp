#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[] ,int n){
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];


        if(currentSum>maxSum)
        maxSum = currentSum;

        if(currentSum<0)
        currentSum = 0;
    }
    return maxSum;

}
int main(){
    int arr[] = {12,23,34,-56};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Maximim subarray sum is: "<<kadane(arr , n);
    return 0;
}