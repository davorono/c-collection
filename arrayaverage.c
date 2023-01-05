#include <stdio.h>
float arrAvg(float arr[], int length);

int main()
{
    float arr[6] = {5.2, 9.8, 3.5, 6.7, 1.2, 14.4};
    int size = sizeof(arr)/sizeof(float);
    printf("average: %f\n", arrAvg(arr, size));
}

float arrAvg(float arr[], int length) 
{
    float max = 0;
    float min = 100;
    float average;

    // check if array is empty
    if(length == 0) 
    {
        return 0;
    }

    // get maximum value
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[i+1] && arr[i] > max) 
        {
            max = arr[i];
        }
    }

    // get minimum value
    for (int i = 0; i < length; i++) 
    {
        if (arr[i] < arr[i+1] && arr[i] < min) 
        {
            min = arr[i];
        }
    }

    // calculate average of 2 values
    average = (max+min)/2;
    return average;
}