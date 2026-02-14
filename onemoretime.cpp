#include<iostream>
using namespace std;

void swapEndsOnly(int arr[], int n){
    
    if(n<2){
        return; // exits
    }
    int start = 0;
    int end = n -1;

    int temp = arr[start];
    int arr[start] = arr[end];
    arr[end] = temp;
}

void reverseString(vector<char>& s){
    int start = 0;
    int end = s.size() - 1;

    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}