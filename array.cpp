#include<iostream>
#include<climits>
using namespace std;


// Function to calculate the sum of all elements
int calculateSum(int arr[], int size) {
    int totalSum = 0; // Identity for addition
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }
    return totalSum;
}

// Function to calculate the product of all elements
long long calculateProduct(int arr[], int size) {
    long long totalProduct = 1; // Identity for multiplication
    for (int i = 0; i < size; i++) {
        totalProduct *= arr[i];
    }
    return totalProduct;
}


void swapMinMax(int arr[], int size) {
    int minIdx = 0;
    int maxIdx = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }
}

void printUniques(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            // If same value found at a DIFFERENT index, it's not unique
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // Found it, move to the next element in arr1
            }
        }
    }
    cout << endl;
}

// void changeArr(int arr[], int size){
//     cout<<"in function\n";
//     for(int i = 0; i<size; i++){
//         arr[i] = 2 * arr[i];
//     }
// }

int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // Not Found
}

void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int Sum(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i < sz; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    // int marks[5] = {99, 100 ,54, 36, 88};

    // double price[] = {98, 99, 105.67, 30.00}; //3
    // marks[0]= 101;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // int sz = sizeof(marks)
    // cout<<sizeof(marks)<<endl;
    // cout<<sizeof(marks) / sizeof(int)<<endl;
    // loops: 0 to size-1
    // int size = 5;
    // int marks[size];
    // for (int i=0; i<size;i++){
    //     cin>>marks[i];
    // }

    // for (int i=0; i< size; i++){
    //     cout<<marks[i]<<endl;
    // }

    int nums[] = {5, 15, 22, 1 , -15, -24};
    int size = 6;

    int smallest = INT_MAX;
    int smallestIndex = -1;
    int largestIndex = -1;
    int largest = INT_MIN;


    for (int i = 0; i < size; i++){ // min, max
        if (nums[i]< smallest){
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest){
            largest = nums[i];
            largestIndex = i;

        }
    } // FIXED: Added missing closing brace for the for loop


//         smallest =min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
// cout<<"The smallest value is: "<<smallest<<"also the index value is"<<smallestIndex<<endl;
//     cout<<"The largest value is: "<<largest<<"also the index value is"<<largestIndex<<endl;

    // int arr[] = {1,2,3};
    // changeArr(arr, 3);

    // cout<<"in main\n";
    // for(int i = 0; i<3; i++){ // 2 4 6
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int arr[]= {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 8;

    // cout<<linearSearch(arr, sz, target)<<endl;

    reverseArray(arr, sz);

    for(int i = 0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Swapping logic - FIXED: Used smallestIndex and largestIndex from main scope
    int temp = arr[smallestIndex];
    arr[smallestIndex] = arr[largestIndex];
    arr[largestIndex] = temp;

    int sum = 0;
    long long product = 1;

    for (int i = 0; i < sz; i++) { // FIXED: Use sz (size of arr), not size (size of nums)
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;


    return 0;
}