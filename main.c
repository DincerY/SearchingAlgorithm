#include <stdio.h>

int linearSearch(int list[],int listLength, int key){
    for (int i = 0; i < listLength; i++) {
        if(list[i] == key){
            return i;
        }
        return -1;
    }
}

int binarySearch(int list[],int listLength, int key){
   int first = 0;
   int last = listLength -1;
   int mid;
   while(first <= last){
        mid = (first + last) / 2;

        if(list[mid] == key){
            return list[mid];
        }
        else{
            if(list[mid] > key){
                last = mid - 1 ;
            }
            else{
                first = mid + 1;
            }
        }
   }

}


void main() {
    int arr[] = {10,11,12,13,14,15,16};
    int findValue = binarySearch(arr,7,11);
    printf("%d",findValue);

}
