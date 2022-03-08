//quicksort_read.c
#include<stdio.h>
#include<assert.h>


void quicksort_messy(int number[5], int first, int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
         {
            j--;
         }
            if(i<j){
               temp=number[i];
               number[i]=number[j];
               number[j]=temp;
            }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort_messy(number,first,j-1);
      quicksort_messy(number,j+1,last);
   }
}


//This function is needed in order to test cases in test_quicksort_messy
int isArranged(int number[], int first, int last)
{
   int count=0;
   for(int i=first;i<last;i++)
   {
      if(number[i] <number[i+1])
         count++;
   }
   if(count==last-first)                       //count should be equal to first-last since we compared (Length of array-1) indexes.
      return 1;
   return 0;
}


//The function for the testing cases for quicksort_messy begins from here
void test_quicksort_messy()
{
   int Test_Array[6][5]={  
   { 23, 11, 89, 42, 99 },                     //Case 1 -> All positive numbers in the array.
   {-18, -21, 42, 39, 21},                     //Case 2 -> Mixture of positive and negative numbers.
   {-99999, 1289467, 835420193, -18762398, 0}, //Case 3 -> Large positive and negative integers
   {2, 1, 3, 4, 5},                            //Case 4 -> The array is partially arranged/
   {1, 2, 3, 4, 5},                            //Case 5 -> The array is fully arranged.
   {2147483647, -2147483648, 1, 2, -7}};       //Case 6 -> Testing extreme values.

    for(int i=0;i <6; i++)
   {
      quicksort_messy(Test_Array[i], 0, 4);    // Implementing quiiclsort_messy to each of the test cases.
      assert(isArranged(Test_Array[i], 0, 4)); // Figuring out whether each of the test cases are arranged or not.
   }
      printf("All the test cases were successful\n");
}


//We will need this function for the improved version of quicksort_messy
void swap(int* number, int index1, int index2)
{
   int temp=number[index1];
   number[index1]=number[index2];
   number[index2]=temp;
}


//The improved version of quicksort_messy starts from here.
void quicksort_improved(int* number, const int start_index, const int end_index)
{
   //initializing variables
   int forwd;          
   int backwd;
   int pivot;

   if(start_index<end_index)
   {
      pivot=start_index;
      forwd=start_index;
      backwd=end_index;

      while(forwd<backwd)
      {
         while(number[forwd] <= number[pivot] && forwd < end_index)
            forwd++;

         while(number[backwd]>number[pivot])
            backwd--;

         if(forwd<backwd)
            swap(number, forwd, backwd);
      }

      swap(number, pivot, backwd);

      //The following lines of codes shows recursion 
      quicksort_messy(number,start_index,backwd-1);
      quicksort_messy(number,backwd+1,end_index);
   }
}


//This function is the same as isArranged but with a pointer array and perimeters similar to quicksort_improved
int newArranged(int* number, const int start_index, const int last_index)
{
   int count=0;
   for(int i=start_index;i<last_index;i++)
   {
      if(number[i] <number[i+1])
         count++;
   }
   if(count==last_index-start_index)                       //count should be equal to first-last since we compared (Length of array-1) indexes.
      return 1;
   return 0;
}

//Testing cases for the improved version of quicksort_messy
void test_quicksort_improved()
{
   //using different test cases with diffrent lengths of arrays

   int Test_Array1[]={23, 32, 45, 78, 99, 121, 22};
   quicksort_improved(Test_Array1, 0, 6);    
   assert(newArranged(Test_Array1, 0, 6));  //if newArranged function comes out to be false, the function will display an error

   int Test_Array2[]={-24, -32, -121, -215, -99, -72, -128, -256};
   quicksort_improved(Test_Array2, 0, 8);    
   assert(newArranged(Test_Array2, 0, 8));

   int Test_Array3[]={5, 2, -2, -4, 100};
   quicksort_improved(Test_Array3, 0, 4);    
   assert(newArranged(Test_Array3, 0, 4));

   int Test_Array4[]={99999, -2345678, 1098234};
   quicksort_improved(Test_Array4, 0, 2);    
   assert(newArranged(Test_Array4, 0, 2));

   int Test_Array5[]={2147483647, -2147483648, 3, 4, 20, -11};
   quicksort_improved(Test_Array5, 0, 5);    
   assert(newArranged(Test_Array5, 0, 5));
   
   printf("ALl the test cases were successful\n");
   }

   //main function
   int main()
   {
      test_quicksort_messy();
      test_quicksort_improved();
   }
