#include<iostream>
using namespace std;
int main(){

    // Largest and second largest in one traversal
    int arr[10];
    for(int i=0; i<10; i++){
        cin>> arr[i];
    }

    int max = arr[0];
    int max2 = arr[1];
    int count = 0;
    for(int i=0; i<10; i++){
        if(arr[i]>max || arr[i]>max2){
            if(arr[i] > max){
                int temp = max;
                max = arr[i];
                max2 = temp;
            }
            count++;
        }
        if(count==0 && max2<arr[i] && arr[i]!=max){
            max2 = arr[i];
        }
    }
    
    cout<< "Largest no: " <<max << "\n";
    cout<< "Second largest no: " <<max2;

    return 0;
}