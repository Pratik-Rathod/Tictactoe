#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#define USER 1
#define AI -1
void draw();
int vcheak(int,int);
void WIN();
void plc();
int smart(int);
int cheak();
void move();

int e=1,i=0,j=0,M=0,CJ=0;
char ch;
int Mmatrix[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int X[3]={11,15,19};
int Y[3]={6,8,10};
void main()
{
clrscr();
clreol();
draw();
move();
getch();
}
void draw(){
int dt;
void drw();
printf("\n\n\n");                      // 1  2   3   4   5   6   7   8   10  11  12  13  14
 printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c",-55,-51,-51,-51,-53,-51,-51,-51,-53,-51,-51,-51,-69);//1
 printf("\n\t%c   %c   %c   %c",-70,-70,-70,-70);//||                                         //2
 printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c",-52,-51,-51,-51,-50,-51,-51,-51,-50,-51,-51,-51,-71);//3
 printf("\n\t%c   %c   %c   %c",-70,-70,-70,-70);//||                                         //4
 printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c",-52,-51,-51,-51,-50,-51,-51,-51,-50,-51,-51,-51,-71);//5
 printf("\n\t%c   %c   %c   %c",-70,-70,-70,-70);    //||                                     //6
 printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c",-56,-51,-51,-51,-54,-51,-51,-51,-54,-51,-51,-51,-68);//7
printf("\n");
drw();
}
void drw()
{ int dt;
gotoxy(1,12);
textcolor(1);
for(dt=0;dt<80;dt++)
cprintf("%c",-51);
cprintf("\r");
textcolor(2+BLINK);
cprintf("\n &----------&  ///    Ccccc &$$$$SS$$$$3   AA      cCCCCC **********   ooOee\r");
textcolor(2+BLINK);
cprintf("\n &$$$$SS$$$$&  ^^^   Cc     &??????????& Aa aA    cC      ++++++++++ Ooo   eeE\r");
textcolor(15+BLINK);
cprintf("\n ^   ||T    ^  iCi  Cc      ^   ||T    ^Aa   aA  CC           ##   Ooo      eeE\r");
textcolor(15+BLINK);
cprintf("\n     I||       T]i cc           T]i    Aa     aA CC           &&   Ooo   0  eeE\r");
textcolor(15+BLINK);
cprintf("\n     {P}       {R| A}           {T}   Aaaa{I}aaaA cC          K    OoR      .eE\r");
textcolor(6+BLINK);
cprintf("\n     ||T       42i   Cc         T]i  Aa         aA cC         &&     Ooo   eeE\r");
textcolor(6+BLINK);
cprintf("\n     |E|       ii5    Ccccc     T]i Aa           aA cCCCCC    ##        OoeE\r");
textcolor(3);
textbackground(RED);
cprintf("\n\nHello World! Is My First GAME or AI Program Make By HUMAN AI Name:Pr@t!k R@AThod");
gotoxy(35,7);
cprintf(" Press 'ESC' To Exit AnyTime \r");
gotoxy(35,11);
printf("For Select cell Use 'SpaceKey'");
}
void move(){
i=j=0;
gotoxy(X[i],Y[j]);
 while(e){
 e=cheak();
  ch=getch();
  switch(ch){
  case 27:e=0;break;
  case 72://up
  if(j==0)
  j=2;
  else
  j=j-1;
  gotoxy(X[i],Y[j]);
  break;
  case 80://down
  if(j==2)
  j=0;
  else
  j=j+1;
  gotoxy(X[i],Y[j]);
  break;
  case 75://left
  if(i==0)
  i=2;
  else
  i=i-1;
  gotoxy(X[i],Y[j]);
  break;
  case 77://right
  if(i==2)
  i=0;
  else
  i=i+1;
  gotoxy(X[i],Y[j]);
  break;
  case 32:
  if(Mmatrix[i][j]==0){
  printf("X");
  Mmatrix[i][j]=1;
  M++;
  e=cheak();
  e=smart(M);
  CJ++;
  }
  break;//SE
  case 'p':plc();
  break;
  }
 }
}
int cheak(){
 int a[2];
 int x1=0,y1=0,win[3][3],i2;//x,i||y,j
  a[0]=1;
  a[1]=-1;
 for(x1=0;x1<3;x1++){
  for(y1=0;y1<3;y1++)
 win[x1][y1]=Mmatrix[x1][y1];//copying Value
 }
 x1=y1=0;
 for(i2=0;i2<2;i2++){
     for(y1=0;y1<3;y1++){
  for(x1=0;x1<3;x1++){
    if(win[x1][0]==a[i2]&&win[x1][1]==a[i2]&&win[x1][2]==a[i2]){
      WIN(a[i2]);
     return 0;
     }
  if(win[0][y1]==a[i2]&&win[1][y1]==a[i2]&&win[2][y1]==a[i2]){
  WIN(a[i2]);
 return 0;
   }
  if(win[0][0]==a[i2]&&win[1][1]==a[i2]&&win[2][2]==a[i2]){
     WIN(a[i2]);
    return 0;
    }
 if(win[2][0]==a[i2]&&win[1][1]==a[i2]&&win[0][2]==a[i2]){
  WIN(a[i2]);
  return 0;
  }
      }
   }
 }
return 1;
}
int smart(int m){
   // Ane KeVay Manas in Bhudhi No Nano Ens........
   int flag=0,ui[2],l;
   i=0,j=0;
   ui[0]=-1;
   ui[1]=1;
 /*  gotoxy(X[i],Y[j]);printf("O");Mmatrix[i][j]=-1;plc();*/
   //Jitvani Start
   for(l=0;l<2;l++){
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if(CJ<1)
    l++;
     if((Mmatrix[0][j]==ui[l])&&(Mmatrix[2][j]==ui[l]))   //
      {                                             //
       flag=vcheak(1,j);                              //
       if(flag)                                         //
       return 1;                                         //it's Just dem Good
      }                                                  //
      else if((Mmatrix[i][0]==ui[l])&&(Mmatrix[i][2]==ui[l]))    //   |    |
      {                                                  //   |    |
       flag=vcheak(i,1);                                 //
       if(flag)                                          //
       return 1;
      }//
      //
      else if(Mmatrix[i][0]==ui[l]&&Mmatrix[i][1]==ui[l])
      {
       flag=vcheak(i,2);
       if(flag)
       return 1;
      }
      else if(Mmatrix[i][1]==ui[l]&&Mmatrix[i][2]==ui[l]){
       flag=vcheak(i,0);
       if(flag)
       return 1;
      }//
      //|||0
      else if(Mmatrix[0][j]==ui[l]&&Mmatrix[1][j]==ui[l]){
       flag=vcheak(2,j);
       if(flag)
       return 1;
      }//
      //for Cornore0
      else if(Mmatrix[1][j]==ui[l]&&Mmatrix[2][j]==ui[l])
      {
       flag=vcheak(0,j);
       if(flag)
       return 1;
       }
     }//fore
   }//foro
    if((Mmatrix[0][0]==ui[l]&&Mmatrix[2][2]==ui[l])||(Mmatrix[2][0]==ui[l]&&Mmatrix[0][2]==ui[l]))
      {
 flag=vcheak(1,1);
       if(flag)
       return 1;
      }
    if((Mmatrix[0][0]==ui[l]&&Mmatrix[1][1]==ui[l]))
    {
     flag=vcheak(2,2);
     if(flag)
     return 1;
    }
     if((Mmatrix[1][1]==ui[l]&&Mmatrix[2][2]==ui[l]))
    {
     flag=vcheak(0,0);
     if(flag)
     return 1;
    }
     if((Mmatrix[0][2]==ui[l]&&Mmatrix[1][1]==ui[l]))
    {
     flag=vcheak(2,0);
     if(flag)
     return 1;
    }
     if((Mmatrix[2][0]==ui[l]&&Mmatrix[1][1]==ui[l]))
    {
     flag=vcheak(0,2);
     if(flag)
     return 1;
     }
    }//ENDui//End IF//Jitvani End
   plc();
   if((CJ+m)>8)
   {
   WIN(0);
   }
   if(m==1||CJ==m-1){
  len:
  randomize();
   i=rand()%3;
   j=rand()%3;
   if(Mmatrix[i][j]!=0){
    goto len;
   }
    flag=vcheak(i,j);
       if(flag)
       return 1;
       }
return 1;
}
void plc()
{
i=j=0;
gotoxy(X[i],Y[j]);
}
int vcheak(int i1,int j1){
if(Mmatrix[i1][j1]==0){
       gotoxy(X[i1],Y[j1]);
       printf("O");
       Mmatrix[i1][j1]=-1;
       plc();
       return 1;
       }
       return 0;
}
 void WIN(int PLAYER)
 {
 gotoxy(24,24);
 window(44,23,90,24);
 textbackground(2);
    if (PLAYER==USER)
    {
    textcolor(RED+BLINK);
     cprintf("You Are WINNER!\r\r");}
    else if(PLAYER==AI)
    {
    textcolor(15+BLINK);
     cprintf("  (AI) IS WIINNER hahaha..You Are Loser\r\r");
     }
     else
     {
     cprintf("GAME IS DROW.. \r\r\r");
     }
     getch();
     exit(0);
 }