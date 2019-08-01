/**
 * arrarsum.h
 *
 * Created: ?
 * Modified: Jan. 20, 2019
 * Author: John Mortimore
 */

/**
 * dosum
 * takes an int array and returns the sum of its elements.
 *
 * param: array {int[]} - the array
 * param: arraysize {int} - the size of the array
 * return: {int} - the sum of the array elements
 */
int dosum(int array[], int arraysize) {
    int sum=0; 			   /*Intialize the sum to 0.*/
    int i;			   /*Declare i.*/
    for (i=0; i<arraysize; i++) {  /*For every element in the array,*/
        sum = sum + array[i];	   /*add its value to the sum.*/
    } 
    return sum; 		   /*Return the sum.*/
}

/**
 * domax
 * takes an int array and returns the max value of its elements.
 *
 * param: array {int[]} - the array
 * param: arraysize {int} - the size of the array
 * return: {int} - the max value of the array elements
 */
int domax(int array[], int arraysize) {
    int max;			  /*Declare max.*/
    int j;			  /*Declare j.*/
    if (arraysize >= 1) {	  /*If the array is not empty,*/
        max=array[0];		  /*initalize the max to the first element.*/
    }
    for (j=1; j<arraysize; j++) { /*Check every element in the array.*/
        if (array[j] > max) {	  /*If it is greater than max,*/
            max = array[j];	  /*set max to the new greatest value.*/
        }
    }
    return max;			  /*Return the max value.*/
}
