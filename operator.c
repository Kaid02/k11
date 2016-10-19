/*
 Student Name : Kabir D Shrestha
 Subject : Programming Fundamental
 Lab No. : 06
 Program : Write a C program to use bitwise operator.
 Date : 2016-10-19
  */
  #include<stdio.h>
 int main(){
  int a,b;
  
  printf("Enter the first number\n");
  scanf("%d",&a);
  
  printf("Enter the second number\n");
  scanf("%d",&b);
  
  printf("\nUse of 'AND' operator:%d",a&b);
  
  printf("\nUse of 'OR' operator:%d",a|b);
  
  printf("\nUse of 'XOR' operator:%d",a^b);
  
  printf("\na complement:%d",-a);
  printf("\nb complement:%d",-b);
  
   return 0 ;
   }

