#include<stdio.h>
void main(){
  int choice;
  printf("Enter a number b/w {1-7} : ");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
      printf("January 31");
      break;
    case 2:
      printf("February 28/29");
      break;
    case 3:
      printf("March 31");
      break;
    case 4:
      printf("April 30");
      break;
    case 5:
      printf("May 31");
      break;
    case 6:
      printf("June 30");
      break;
    case 7:
      printf("July 31");
      break;
    case 8:
      printf("August 31");
      break;
    case 9:
      printf("September 30");
      break;
    case 10:
      printf("October 31");
      break;
    case 11:
      printf("November 30");
      break;
    case 12:
      printf("December 31");
      break;
    default:
      printf("Invalid Choice");
  }
}
