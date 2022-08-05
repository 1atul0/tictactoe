#include<stdio.h>//work on line no. 79
#include<conio.h>
#include<windows.h>
#include<time.h>
void delay(int msecond)
{
    clock_t goal = msecond + clock();// clock() , clock_t  is defined in the time.h headr file
    while (goal > clock()); // condition of loop
}
void gotoxy(int ,int );  //at line no. 30 i wrote code for gotoxy(function) 
void gamebox(void);  // at line 37 i call call1 function for printing the box of tictactoe game 
int main()
{
   short unsigned  location;
    char c;
    for(int i=20;i<=50;i++)   //from line no. 10 to 23 i wrote code for making a box for gamer message
    {
        gotoxy(i,20);        
        printf("o");
        gotoxy(i,30);
        printf("o");
    }
    for(int k=21;k<=29;k++)
    {
        gotoxy(20,k);
        printf("k");
        gotoxy(50,k);
        printf("k");
    }
    gotoxy(23,25);
    printf("Now ");
    delay(500);
    printf("the ");
    delay(500);
    printf("game");
    delay(500);
    printf("is start");
    delay(1000);
    system("CLS");    
    system("CLS");  // used for clear previous screen 
    gamebox();   // call1 void function call here
    for(int i=60 ; i<=72;i++) //horizontal line demonstartion for  instruction gamebox
    {
        gotoxy(i,6);
        printf("--");
        gotoxy(i,8);
        printf("--");

    }
    for(int j=5;j<=9;j++)//vertical line demonstartion for  instruction gamebox
    {
        gotoxy(64,j);
        printf("|");
        gotoxy(68,j);
        printf("|");
    }
    gotoxy(40,3);
    printf("Search the location and put that number where");
    gotoxy(41,4);
    printf("you want ot send the cursor position");
    gotoxy(62,5);    //  ----- |
    printf("1");    //  ----- |
    gotoxy(66,5);    //  ----- |
    printf("2");    //  ----- |
    gotoxy(70,5);    //  ----- |
    printf("3");    //  ----- |
    gotoxy(62,7);    //  ----- |
    printf("4");    //  ----- |
    gotoxy(66,7);    //  ----- |  for print the number in instruction gamebox
    printf("5");    //  ----- |    like 1,2,3,4,5,6,7,8,9 in gamebox
    gotoxy(70,7);    //  ----- |
    printf("6");    //  ----- |
    gotoxy(62,9);    //  ----- |
    printf("7");    //  ----- |
    gotoxy(66,9);    //  ----- |
    printf("8");    //  ----- |
    gotoxy(70,9);    //  ----- |
    printf("9");    //  ----- |
    location=getch();
   while (1)
   {
      if(location==49)
      {
          gotoxy(22,5);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==50)
      {
          gotoxy(26,5);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==51)
      {
          gotoxy(30,5);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==52)
      {
          gotoxy(22,7);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==53)
      {
          gotoxy(26,7);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==54)
      {
          gotoxy(30,7);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==55)
      {
          gotoxy(22,9);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==56)
      {
          gotoxy(26,9);
          fflush(stdin);
          scanf("%c",&c);
      }
      if(location==57)
      {
          gotoxy(30,9);
          fflush(stdin);
          scanf("%c",&c);
      }
      location= getch();
   }
    // gotoxy(22,5);
    // scanf("%c",&c);
    // gotoxy(26,5);
    // fflush(stdin);
    // scanf("%c",&c);

    getch();
}
void gotoxy(int x,int y)
{
   COORD c;    // from line 32 to 35 , this is the syntax for change  cursor location at diffrent place
   c.X=x;
   c.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void gamebox()
{
    for(int i=20 ; i<=32;i++)
    {
        gotoxy(i,6);
        printf("--");
        gotoxy(i,8);
        printf("--");

    }
    for(int j=5;j<=9;j++)
    {
        gotoxy(24,j);
        printf("|");
        gotoxy(28,j);
        printf("|");
    }
}
