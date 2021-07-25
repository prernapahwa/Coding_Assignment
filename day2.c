/*
 * Bubble Sort
 *
 * @Prerna(1910990964)
 * 25/7/2021
 * Coding_Assignment->day2
 *
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>


void bubble_sort(int n , int arr[]) {

    //n-1 because we need to compare ith element with i+1 ...
    for(int i = 0; i < n-1; i++) {
	int flag = 0; 

        //elements from last will start getting in place
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j]; //swaping
                arr[j] = arr[j+1];
                arr[j+1] = temp;
		flag = 1;
            }
        }

	if(flag == 0) {
	    //means no swaps
	    break;
	    //this will optimise if the array is already sorted but the steps are remaining.
	}
    }
    //sorted
}

void mixed (int n , int arr[]) {
    
    for(int i = 0; i < n; i++) {
    	arr[i] = random(); // setting array elements to a random value;
    }
} 


void ascending (int n , int arr[]) {

    for(int i = 0; i < n; i++) {
    	arr[i] = i; //setting array elements in ascending order 
    }
}

void descending (int n , int arr[]) {
    int val = n;
    for(int i = 0; i < n; i++) {
    	arr[i] = val;//setting array elements in descending order
	val--;
    }
}


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    int arr2[n];
    int arr3[n];

    struct timeval current_time ;

    printf("Random\n");
    mixed (n , arr);
    gettimeofday(&current_time , NULL);
    printf("seconds : %ld \n",current_time.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}

    bubble_sort(n  , arr);
    gettimeofday(&current_time , NULL);
    printf("seconds : %ld \n",current_time.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}


    struct timeval current_time1 ;
    printf("Ascending\n");
    ascending (n , arr2);
    //gettimeofday(&current_time  , NULL); 
    //printf("seconds : %ld \n",current_time.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}

    bubble_sort(n  , arr2);
    gettimeofday(&current_time1  , NULL);
    printf("seconds : %ld \n",current_time1.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}



    struct timeval current_time2 ;
    printf("Descending\n");
    descending(n , arr3);
    //gettimeofday(&current_time  , NULL);
    //printf("seconds : %ld \n",current_time.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}

    bubble_sort(n  , arr3);
    gettimeofday(&current_time2  , NULL);
    printf("seconds : %ld \n",current_time2.tv_sec);
    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}



    //for(int i = 0; i < n; i++) {
    //   scanf("%d",&arr[i]);
    //}

    //bubble_sort(n,arr); // function that sorts the array using bubble sort

    //printf("Sorted array ");

    //for(int i = 0; i < n; i++) {
    //    printf("%d ",arr[i]);
    //}

    printf("\n");
    
    return 0;
}


