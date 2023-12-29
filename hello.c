#include<stdio.h>
  void  main()
  {
  int choice;
   printf("---MENU---\n");
   printf("   1:MOMO\n   2:CHOWMIN\n   3:BURGUR\n   4:SANDWHICH");
   printf("\nEnter your choice in number\t");
    scanf("%d",&choice);
    switch (choice)
    {
    case (1):
      printf("\n|MOMO--150Rs|");
      break;
    case(2):
      printf("\n|CHOWMIN--120Rs\t\t\t--Veg|");
      printf("\n|CHOWMIN--150Rs\t\t\t--Non_veg|");
      break;
    case(3):
      printf("\n|BURGUR--140Rs|");
      break;
    case(4):
      printf("\n|SANDWHICH--75Rs|");
      break;
    default:
      printf("\t\t\t|SORRY, Please enter valid number.|");
      break;
    }
  }