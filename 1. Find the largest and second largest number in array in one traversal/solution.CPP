#include<iostream>
using namespace std;
int main(){

    // Largest and second largest in one traversal
    int arr[10];
    for(int i=0; i<10; i++){
        cin>> arr[i];
    }

    int max = arr[0];
    int max2;
    int a;
    for(int i=0; i<10; i++){
        if(arr[i]>max){
            int temp = max;
            max = arr[i];
            max2 = temp;
            a = i;
        }
    }
    
    cout<< max << " ";
    cout<< max2;

    return 0;
}