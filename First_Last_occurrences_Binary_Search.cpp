#include<bits/stdc++.h>
using namespace std;

int first_occurrences (int arr[], int n, int key){

    int start = 0;
    int ended = n - 1;
    int mid = start + (ended - start)/2;
    int ans = -1;
    while(start <= ended){

        if(arr[mid] == key){
            ans = mid;
            ended = mid - 1;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            ended = mid - 1;
        }
        mid = start + (ended - start)/2;
    }

    return ans;
}

int last_occurrences (int arr[], int n, int key){

    int start = 0;
    int ended = n - 1;
    int mid = start + (ended - start)/2;
    int ans = -1;
    while(start <= ended){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            ended = mid - 1;
        }
        mid = start + (ended - start)/2;
    }

    return ans;
}

int main()
{
    int say_my_name[11] = {1,2,2,2,2,2,4,6,3,3};

    cout<<"First occurrence of 2 index in : "<<first_occurrences(say_my_name,11,2)<<endl;
    cout<<"Last occurrence of 2 index in : "<<last_occurrences(say_my_name,11,2)<<endl;

    return 0;
}
