//testing_asn.h
//Assignment 2
//Name: Anshal Chopra
//Student No.: 301384760
//Source : Class notes.


#include<stdlib.h> // since we nesed to use rand() in the functions
#include <assert.h>

//
// IMPORTANT: All the implementations of "ok" functions are dummy
// implementations. Change them to properly test the corresponding function.
// 

////////////////////////////////////////////////////////////////////////////
//
// Declarations of sum_arr functions.
//
// Each of the following functions has this specification:
//
//    Pre-condition:
//       0 <= n, n is the length of arr
//    Post-condition:
//       Returns the sum of the integers in arr,
//       i.e. arr[0] + arr[1] + arr[2] + ... + arr[n]. 
//       The sum of an array of length 0 is 0.
//
// The implementations for these functions are in the file
// secret_asn_functions.h. Do NOT implement them here!
//
// The corresponding "ok" function should return true (1) if all tests for
// that function pass, and false (0) if 1, or more, fail.
//
////////////////////////////////////////////////////////////////////////////

int sum_arr1_ok() //Test function for sum_arr1
{

    // Function starts here.

    int arr1[5] = {1, 2, 3, 4, 5}; // Case 1 -> All positive integers.
    //sum = 15
    int arr2[6] = {-2, -4, -6, -8, -10, -12}; // Case 2 -> All negative integers.
    //sum = -42
    int arr3[5] = {-2147483648, 2147483647, 100000, -2000, 2 }; // Case 3 -> Extreme values of integers.
    //sum = 98001
    int arr4[0] = {}; // Case 4 -> An array of size 0.
    //sum = 0
    int arr5[10] = {0}; // Case 5 -> An array with the number 0 at all indexes.
    //sum = 0
    int arr6[4] = {4, -10, -20, 11}; // Case 6 -> A mix of positive and negative integers.
    //sum = -15
    int arr7[8]; // Case 7 -> An array of random integers.
    int sum_rnd =0 ;
    for(int i = 0; i < 8; i++)
    {
        arr7[i] = rand();
        sum_rnd = sum_rnd + arr7[i];
    }
    // sum = whatever value we get from the sum_rnd from the above for loop.

    int count = 0; // To count the number of test cases which are true.

    // evaluating whether the function holds true for all the test cases.
    if(sum_arr1(arr1, 5) == 15)
        count++;
    if(sum_arr1(arr2, 6) == -42)
        count++;
    if(sum_arr1(arr3, 5) == 98001)
        count++;
    if(sum_arr1(arr4, 0) == 0)
        count++;
    if(sum_arr1(arr5, 10) == 0)
        count++;
    if(sum_arr1(arr6, 4) == -15)
        count++;
    if(sum_arr1(arr7, 8) == sum_rnd)
        count++;

    if(count == 7) // another way to say all the test cases were successful.
        return 1;
    return 0;

    //Function ends here.

}

int sum_arr2_ok() //Test function for sum_arr2.
{

    // Function starts here.

    int arr1[5] = {1, 2, 3, 4, 5}; // Case 1 -> All positive integers.
    //sum = 15
    int arr2[6] = {-2, -4, -6, -8, -10, -12}; // Case 2 -> All negative integers.
    //sum = -42
    int arr3[5] = {-2147483648, 2147483647, 100000, -2000, 2 }; // Case 3 -> Extreme values of integers.
    //sum = 98001
    int arr4[0] = {}; // Case 4 -> An array of size 0.
    //sum = 0
    int arr5[10] = {0}; // Case 5 -> An array with the number 0 at all indexes.
    //sum = 0
    int arr6[4] = {4, -10, -20, 11}; // Case 6 -> A mix of positive and negative integers.
    //sum = -15
    int arr7[8]; // Case 7 -> An array of random integers.
    int sum_rnd =0 ;
    for(int i = 0; i < 8; i++)
    {
        arr7[i] = rand();
        sum_rnd = sum_rnd + arr7[i];
    }
    // sum = whatever value we get from the sum_rnd from the above for loop.

    int count = 0; // To count the number of test cases which are true.

    // evaluating whether the function holds true for all the test cases.
    if(sum_arr2(arr1, 5) == 15)
        count++;
    if(sum_arr2(arr2, 6) == -42)
        count++;
    if(sum_arr2(arr3, 5) == 98001)
        count++;
    if(sum_arr2(arr4, 0) == 0)
        count++;
    if(sum_arr2(arr5, 10) == 0)
        count++;
    if(sum_arr2(arr6, 4) == -15)
        count++;
    if(sum_arr2(arr7, 8) == sum_rnd)
        count++;

    if(count == 7) // another way to say all the test cases were successful.
        return 1;
    return 0;

    //Function ends here.

}

int sum_arr3_ok() //Test function for sum_arr3.
{

    // Function starts here.

    int arr1[5] = {1, 2, 3, 4, 5}; // Case 1 -> All positive integers.
    //sum = 15
    int arr2[6] = {-2, -4, -6, -8, -10, -12}; // Case 2 -> All negative integers.
    //sum = -42
    int arr3[5] = {-2147483648, 2147483647, 100000, -2000, 2 }; // Case 3 -> Extreme values of integers.
    //sum = 98001
    int arr4[0] = {}; // Case 4 -> An array of size 0.
    //sum = 0
    int arr5[10] = {0}; // Case 5 -> An array with the number 0 at all indexes.
    //sum = 0
    int arr6[4] = {4, -10, -20, 11}; // Case 6 -> A mix of positive and negative integers.
    //sum = -15
    int arr7[8]; // Case 7 -> An array of random integers.
    int sum_rnd =0 ;
    for(int i = 0; i < 8; i++)
    {
        arr7[i] = rand();
        sum_rnd = sum_rnd + arr7[i];
    }
    // sum = whatever value we get from the sum_rnd from the above for loop.

    int count = 0; // To count the number of test cases which are true.

    // evaluating whether the function holds true for all the test cases.
    if(sum_arr3(arr1, 5) == 15)
        count++;
    if(sum_arr3(arr2, 6) == -42)
        count++;
    if(sum_arr3(arr3, 5) == 98001)
        count++;
    if(sum_arr3(arr4, 0) == 0)
        count++;
    if(sum_arr3(arr5, 10) == 0)
        count++;
    if(sum_arr3(arr6, 4) == -15)
        count++;
    if(sum_arr3(arr7, 8) == sum_rnd)
        count++;

    if(count == 7) // another way to say all the test cases were successful.
        return 1;
    return 0;

    //Function ends here.

}

int sum_arr4_ok() //Test function for sum_arr4.
{

    // Function starts here.

    int arr1[5] = {1, 2, 3, 4, 5}; // Case 1 -> All positive integers.
    //sum = 15
    int arr2[6] = {-2, -4, -6, -8, -10, -12}; // Case 2 -> All negative integers.
    //sum = -42
    int arr3[5] = {-2147483648, 2147483647, 100000, -2000, 2 }; // Case 3 -> Extreme values of integers.
    //sum = 98001
    int arr4[0] = {}; // Case 4 -> An array of size 0.
    //sum = 0
    int arr5[10] = {0}; // Case 5 -> An array with the number 0 at all indexes.
    //sum = 0
    int arr6[4] = {4, -10, -20, 11}; // Case 6 -> A mix of positive and negative integers.
    //sum = -15
    int arr7[8]; // Case 7 -> An array of random integers.
    int sum_rnd =0 ;
    for(int i = 0; i < 8; i++)
    {
        arr7[i] = rand();
        sum_rnd = sum_rnd + arr7[i];
    }
    // sum = whatever value we get from the sum_rnd from the above for loop.

    int count = 0; // To count the number of test cases which are true.

    // evaluating whether the function holds true for all the test cases.
    if(sum_arr4(arr1, 5) == 15)
        count++;
    if(sum_arr4(arr2, 6) == -42)
        count++;
    if(sum_arr4(arr3, 5) == 98001)
        count++;
    if(sum_arr4(arr4, 0) == 0)
        count++;
    if(sum_arr4(arr5, 10) == 0)
        count++;
    if(sum_arr4(arr6, 4) == -15)
        count++;
    if(sum_arr4(arr7, 8) == sum_rnd)
        count++;

    if(count == 7) // another way to say all the test cases were successful.
        return 1;
    return 0;

    //Function ends here.

}

////////////////////////////////////////////////////////////////////////////
//
// Declarations of binary search functions.
//
// Each of the following functions has this specification:
//
//    Pre-condition:
//       v has n elements and is in ascending sorted order, i.e.
//       v[0] <= v[1] <= ... <= v[n-1]
//    Post-condition:
//       returns an index i such that v[i] == x; if x is not in
//       v, -1 is returned
//
// The implementations for these functions are in the file
// secret_asn_functions.h.
//
// The corresponding "ok" function should return true (1) if all tests for
// that function pass, and false (0) if 1, or more, fail.
//
////////////////////////////////////////////////////////////////////////////

int binary_search1_ok() //Test function for binary_search1
{

    // Function starts here.

    int arr1[5] = {36, 37, 38, 39, 40}; // Case 1 -> element not found in array.
    // find = 0
    int arr2[6] = {1, 1, 3, 4, 5}; // Case 2 -> more than one element found in the array.
    // find = 1, index = 1
    int arr3[10000]={0}; // Case 3 -> using an array of a large size having same numbers on n-1 indexes.
    arr3[9999] = 1;
    // find =1, index =9999
    int arr4[0] = {}; // Case 4 -> an array of size 0
    // find = 72; 
    int arr5[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // Case 5 -> best case scenario.
    // find = 4, index = 4
    int arr6[3] = {32767, 100099, -2356712}; // Case 6 -> to see whether it can read large values.
    // find = 2147483647, index = 0
    int arr7[5] = {-4, -3, -2, -1, -1}; // Case 7 -> all negative integers.
    // find = -3, index = 1


    int count =0; // to count the number of test cases which are true;
    if(binary_search1(arr1, 5, 0) == -1)
        count++;
    if(binary_search1(arr2, 6, 1) == 0 || binary_search1(arr2, 6, 1) == 1)
        count++;
    if(binary_search1(arr3, 10000, 1) == 9999)
        count++;
    if(binary_search1(arr4, 0, 72) == -1)
        count++;
    if(binary_search1(arr5, 9, 4) == 4)
        count++;
    if(binary_search1(arr6, 3, 32767) == 0)
        count++;
    if(binary_search1(arr7, 5, -3) == 1)
        count++;

    if(count == 7) // another way to say all the test cases were succesful.
        return 1;
    return 0;

    //Function ends here.

}

int binary_search2_ok() //Test function for binary_search2
{

    // Function starts here.

    int arr1[5] = {36, 37, 38, 39, 40}; // Case 1 -> element not found in array.
    // find = 0
    int arr2[6] = {1, 1, 3, 4, 5}; // Case 2 -> more than one element found in the array.
    // find = 1, index = 1
    int arr3[10000]={0}; // Case 3 -> using an array of a large size having same numbers on n-1 indexes.
    arr3[9999] = 1;
    // find =1, index =9999
    int arr4[0] = {}; // Case 4 -> an array of size 0
    // find = 72; 
    int arr5[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // Case 5 -> best case scenario.
    // find = 4, index = 4
    int arr6[3] = {32767, 100099, -2356712}; // Case 6 -> to see whether it can read large values.
    // find = 214748, index = 0
    int arr7[5] = {-4, -3, -2, -1, -1}; // Case 7 -> all negative integers.
    // find = -3, index = 1


    int count =0; // to count the number of test cases which are true;
    if(binary_search2(arr1, 5, 0) == -1)
        count++;
    if(binary_search2(arr2, 6, 1) == 0 || binary_search2(arr2, 6, 1) == 1)
        count++;
    if(binary_search2(arr3, 10000, 1) == 9999)
        count++;
    if(binary_search2(arr4, 0, 72) == -1)
        count++;
    if(binary_search2(arr5, 9, 4) == 4)
        count++;
    if(binary_search2(arr6, 3, 32767) == 0)
        count++;
    if(binary_search2(arr7, 5, -3) == 1)
        count++;

    if(count == 7) // another way to say all the test cases were succesful.
        return 1;
    return 0;

    //Function ends here.

}

////////////////////////////////////////////////////////////////////////////
//
// Declarations of sorting functions.
//
// Each of the following functions has this specification:
//
//    Pre-condition:
//       none
//    Post-condition:
//       modifies v so it is in ascending sorted order, i.e.
//       v[0] <= v[1] <= ... <= v[n-1]
//
// The implementations for these functions are in the file
// secret_asn_functions.h.
//
// The corresponding "ok" function should return true (1) if all tests for
// that function pass, and false (0) if 1, or more, fail.
//
////////////////////////////////////////////////////////////////////////////


// This function is useful for testing the sort function.
int isArranged(int* arr, int n)
{

   //Function starts here.

   int count=0;
   for(int i = 1 ; i < n ; i++)
   {
      if(arr[i-1] < arr[i]) // figuring out whether each element is greater than the previous element or not.
         count++;
   }
   if(count == n-1 || n <=1)
      return 1;
   return 0;

   //Function ends here.
}

int sort1_ok() //Test function for sort1.
{

   //Function starts here
   //using different test cases with diffrent lengths of arrays

   int arr1[] = {23, 32, 45, 78, 99, 121, 22}; //Case 1 -> All positive integers.
   sort1(arr1, 7);

   int arr2[] = {-24, -32, -121, -215, -99, -72, -128, -256}; //Case 2 -> All negative integers.
   sort1(arr2, 8);    

   int arr3[] = {5, 2, -2, -4, 100}; //Case 3 -> Mix of posiitve and negative integers.
   sort1(arr3, 4);    
   
   int arr4[] = {99999, -2345678, 1098234}; //Case 4 -> large integers.
   sort1(arr4, 3);    

   int arr5[] = {2147483647, -2147483648, 3, 4, 20, -11}; // Case 5 -> extreme values.
   sort1(arr5, 6);    

   int arr6[] = {}; // Case 6 -> empty array.
   sort1(arr6, 0);

   int arr7[] = {1}; // Case 7 -> an array with just one element
   sort1(arr7, 1);

   
   int count = 0;
   if(isArranged(arr1, 7))
        count++;
   if(isArranged(arr2, 8))
        count++;
   if(isArranged(arr3, 4))
        count++;
   if(isArranged(arr4, 3))
        count++;
   if(isArranged(arr5, 6))
        count++;
   if(isArranged(arr6, 0))
        count++;
   if(isArranged(arr7, 1))
        count++;

   if(count == 7)
        return 1;
    return 0;

   //Function ends here.

}


int sort2_ok() //Test function for sort2.
{

   //Function starts here.
   //using different test cases with diffrent lengths of arrays

   int arr1[] = {23, 32, 45, 78, 99, 121, 22}; //Case 1 -> All positive integers.
   sort2(arr1, 7);

   int arr2[] = {-24, -32, -121, -215, -99, -72, -128, -256}; //Case 2 -> All negative integers.
   sort2(arr2, 8);    

   int arr3[] = {5, 2, -2, -4, 100}; //Case 3 -> Mix of posiitve and negative integers.
   sort2(arr3, 4);    
   
   int arr4[] = {99999, -2345678, 1098234}; //Case 4 -> large integers.
   sort2(arr4, 3);    

   int arr5[] = {2147483647, -2147483648, 3, 4, 20, -11}; // Case 5 -> extreme values.
   sort2(arr5, 6);    

   int arr6[] = {}; // Case 6 -> empty array.
   sort2(arr6, 0);

   int arr7[] = {1}; // Case 7 -> an array with just one element
   sort2(arr7, 1);

   
   int count = 0;
   if(isArranged(arr1, 7))
        count++;
   if(isArranged(arr2, 8))
        count++;
   if(isArranged(arr3, 4))
        count++;
   if(isArranged(arr4, 3))
        count++;
   if(isArranged(arr5, 6))
        count++;
   if(isArranged(arr6, 0))
        count++;
   if(isArranged(arr7, 1))
        count++;

   if(count == 7)
        return 1;
    return 0;

   //Function ends here. 
}