/* Give inputs serially and if the user gives 0 as input, the loop will be terminated */

//Problem statement

/*Write a Code to take inputs continuously and print the nth even number as output using O(1) and O(N) time complexities */

#include<stdio.h>

int main()
{
  while(1)
  {
    int input,even_no_1,even_no_2;
    printf("Enter number(enter 0 to terminate):");
    scanf("%d",&input); //Taking input
    even_no_1=method1(input);   //using O(1) method
    even_no_2=method2(input);   //using O(n) method
    if(input==0){
      Printf("Terminated");
      break;
    }
    else
      printf("%d\n",even_no_1);
  }
  
  return 0;
  
}


int method1(int n){
  return 2*n;     //O(1) time 
}

int method2(int n){     //O(n) time 
 int i;           
  int result=0;
  for(i=0;i<n;i++)
    result+=2;
  return result;
}


//Output:

/*
Enter number(enter 0 to terminate):7
14
Enter number(enter 0 to terminate):9
18
Enter number(enter 0 to terminate):19
38
Enter number(enter 0 to terminate):20
40
Enter number(enter 0 to terminate):0
Terminated

*/
