#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int a =10;
//     // cout<<&a<<endl;
//     int* ptr = &a;

//     cout<<ptr<<endl;
//     cout<<&a<<endl;
//     cout<<&ptr<<endl;
//     return 0;
// }

// int main(){
//     float price = 100.25f;
//     float* ptr = &price;

//     cout<<ptr<<endl;
//     cout<<&price<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr = &a;

//     int** parPtr = &ptr;

//     cout<<&ptr<<endl;
//     cout<<parPtr<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr = &a;

//     cout<<(&a)<<endl;
//     cout<<*(ptr)<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr = &a;

//     int** parPtr = &ptr;

//     cout<<*(parPtr)<<endl;
//     cout<<(ptr)<<endl;
//     return 0;
// }

// int main(){
//     int a = 10;
//     int* ptr = &a;

//     int** parPtr = &ptr;

//     cout<<**(parPtr)<<endl;
//     return 0;
// }

// int main(){
//     int** ptr = NULL;

//     cout<<*ptr<<endl;
//     return 0;
// }

// int main(){
//     int a = 5;
//     int* p = &a;
//     int** q = &p;

//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
//     return 0;
// }


// will not work as we are passing value of a and not address of a
// void changeA(int a){
//     a = 20;
// }

// int main(){
//     int a = 10;
//     // changeA(&a); 
//     changeA(a);

//     cout<<"inside main fnx: "<< a <<endl;
//     return 0;
// }

// void changeA(int* ptr){ // pass by refrence using pointers
//     *ptr = 20;
// }

// int main(){
//     int a = 10;
//     changeA(&a);

//     cout<<"inside main fnx: "<< a <<endl;
//     return 0;
// }

// void changeA(int &b){ // pass by refrence using alias
//     b = 20;
// }

// int main(){
//     int a = 10;
//     changeA(a);

//     cout<<"inside main fnx: "<< a <<endl;
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
    
//     cout<<arr<<endl; //pointer
//     cout<<*arr<<endl; //pointer => 1
//     int a = 15, b=10;
//     int* ptr = &a;
//     ptr = &b;
//     // arr = &a; //constant pointer => error
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     int a = 10;
//     int* ptr = &a;

//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl; //+4
//     ptr--;
//     cout<<ptr<<endl; //-4
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;
//     ptr = ptr + 2; // 2int => 8B
//     cout << ptr << endl; //+8
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     cout<<*arr<<endl; //1
//     cout<<*(arr+1)<<endl; //2
//     cout<<*(arr+2)<<endl; //3
//     cout<<*(arr+3)<<endl; //4
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     int* ptr2; //100
//     int* ptr1 = ptr2 + 2; //108

//     cout<<ptr1 - ptr2<<endl; //2
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     int* ptr1;
//     int* ptr2;

//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;

//     cout<<(ptr1 < ptr2)<<endl;
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     int* ptr1;
//     int* ptr2 = ptr1;

//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;

//     cout<<(ptr1 == ptr2)<<endl;
//     return 0;
// }

int main(){
    int arr[] = {10,20,30,40};
    int* ptr = arr;

    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    ptr++;
    cout<<*(ptr)<<endl;
    return 0;
}