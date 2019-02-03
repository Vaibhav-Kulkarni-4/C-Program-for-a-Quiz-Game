#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the score(percentage) :-- %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }

void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked Information");
 printf("\n\n\tTechnology(IT) questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided.Your score will be calculated ");
 printf("\n\n\t and displayed at the end. If you secure highest score,");
 printf("\n\n\tyour score will be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     mainhome:
     system("cls");
     printf("\n\t\t\t\t\t     WELCOME TO I.T. QUIZ \n\n") ;
     printf("\n\t\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
     printf("\n\t\t\t\t\t Enter 'S' to Start   \n\n     ");
     printf("\n\t\t\t\t\t Enter 'V' to View High Score \n\n ");
     printf("\n\t\t\t\t\t Enter 'H' for Help\n\n");
     printf("\n\t\t\t\t\t Enter 'Q' to Quit     \n        ");
     printf("\n\t\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name:--");
     printf("\n\t\t\t\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%25;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;
  switch(r)
  {
  case 1:
  printf("\n\nQ.Which is the 1st search engine in Internet ?");
  printf("\n\nA.Google \nB.Archie \nC.Altavista \nD.WAIS\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Archie");break;}

  case 2:
  printf("\n\n\nQ.Jio payments bank is launching on december in collaboration with which bank ?");
  printf("\n\nA.SBI \nB.Axis Bank \nC.ICICI \nD.Bank Of Baroda\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is A.SBI");
  break;

  case 3:
  printf("\n\n\nQ.What's the name of tata group's new venture on online grocery retail ?");
  printf("\n\nA.Starquik \nB.TATAQuick \nC.QuikStar \nD.Cliquick\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Starquik");break;}


  case 4:
  printf("\n\nQ.ANI technologies PVT LTD is the parent company of ? ");
  printf("\n\n A.OLA Cabs \n B.OLX \nC.Snapdeal \nD.OYO Rooms\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.OLA Cabs");break;}


  case 5:
  printf("\n\n\nQ.Which company is in talks to acquire the online travel company 'VIA.COM' ?");
  printf("\n\nA.Flipkart \nB.Goomo \nC.Paytm \nD.Goibibo\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Patym");break;}

  case 6:
  printf("\n\n\nQ.Which Aditya Birla owned E-commerce portal is about to shut down in  few days ?");
  printf("\n\nA.ABOF \nB.AJIO \nC.Trendin \nD.NNNOW\n\n");
  countq++;
  if (toupper(getch())=='A' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.ABOF");break;}


  case 7:
  printf("\n\n\nQ.Which is the 1st Indian state to get 'HYPERLOOP' ?");
  printf("\n\nA.Karnataka  \nB.Orissa  \nC.Maharashtra \nD.Andhra Pradesh  \n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Andhra Pradesh");break;}


  case 8:
  printf("\n\n\nQ.Which company have filed a patent to introduce drones in India for delivery ?");
  printf("\n\nA.eBay  \nB.Amazon \nC.Flipkart \nD.Shopclues \n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Amazon");break;}


  case 9:
  printf("\n\n\nQ.Who is called the father of 'WIFI' ?");
  printf("\n\nA.Jan Koum \nB.Andy Rubin \nC.Vic Hayes \nD.Vint Cerf\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Vic Hayes ");break;}


  case 10:
  printf("\n\n\nQ.Which of the following is true about C Programming ?");
  printf("\n\nA.Platform Independent \nB.High Level Language \nC.Assembly Language \nD.Machine Independent\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Machine Independent");break;}


  case 11:
  printf("\n\n\nQ.Who is the father of WWW ?");
  printf("\n\nA.Scott Fahlman  \n B.Tim Bernes Lee \nC.Vint Cerf  \nD.Ted Nelson \n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Tim Bernes Lee");break;}

  case 12:
  printf("\n\n\nQ.G-Mail was invented by and in which year ?");
  printf("\n\nA.Paul Buccheit ,2004 \nB.Ray Tomlinson ,2001 \n C.Steve Crocker ,2005 \nD.None\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Paul Buccheit ,2004");break;}

  case 13:
  printf("\n\n\nQ.What is 3rd generation computers made up of ?");
  printf("\n\nA.Vaccum Tubes \nB.Transistors \nC.Micro Processors \nD.IC Chips\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.IC Chips");break;}

  case 14:
  printf("\n\n\nQ.Who is considered as the world's 1st programmer?");
  printf("\n\nA.Lady Ada Lovelace \nB.Steve Wozniak \nC.Bill Gates \nD.Susan Wojcicki \n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Lady Ada Lovelace");break;}

  case 15:
  printf("\n\n\nQ.Who  is the founder and CEO of ebillz ?");
  printf("\n\nA.Sundar Pichai \nB.Jeff Bezos \nC. Bran Acton \nD.Ameet Patil\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Ameet Patil");break;}

  case 16:
  printf("\n\n\nQ.Full form of COBOL ?");
  printf("\n\nA.Common Business Oriented Language \nB.None \nC.Central Business Operating Language \nD.Circuit Binomial Oriented Language\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Common Business Oriented Language ");break;}


  case 17:
  printf("\n\n\nQ.The processor/GPU 'AMD' stands for ?");
  printf("\n\nA.None \nB.Arithmatic Machine Devices \nC.Anti Machine Drivers \nD.Advanced Mini Devices\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.None");break;}

  case 18:
  printf("\n\n\nQ.Which is the 1st commonly recognized computer VIRUS ?");
  printf("\n\nA.Mydoom \nB.Creeper \nC.Sapphire \nD.Elk Cloner\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Creeper");break;}

  case 19:
  printf("\n\n\nQ.Full form of AOL ?");
  printf("\n\nA.Africa Online \nB.Asia Online \nC.All Online \nD.America Online  \n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.America Online");break;}

  case 20:
  printf("\n\n\nQ.Message Service called omniTRACS was the 1st product by ?");
  printf("\n\nA.Qualcomm \nB.Broadcom \nC.Intel \nD.NVIDIA \n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Qualcomm");break;}

  case 21:
  printf("\n\n\nQ.'Your Potential, Our Passion' is the slogan of ?");
  printf("\n\nA.Google \nB.Yahoo \nC.Microsoft \nD.Oracle\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Microsoft");break;}

  case 22:
  printf("\n\n\nQ.Parent company of online shopping site 'junglee.com' is ?");
  printf("\n\nA.Flipkart \nB.Myntra \nC.Jabong\nD.Amazon\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Amazon");break;}

  case 23:
  printf("\n\n\nQ.Who is the Co-Founder of 'Facebook' ?");
  printf("\n\nA.Mark Zuckerberg \nB.Andrew McCollum  \nC.Chris Hughes \nD.Eduardo Saverin\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Eduardo Saverin");break;}

  case 24:
  printf("\n\n\nQ.GOOGLE was founded Lary Page and ?");
  printf("\n\nA.Ruth Porat \nB.Eric Schmidt \nC.Bill Gates\nD.Sergey Brin\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Sergey Brin");break;}

  case 25:
  printf("\n\n\nQ.Virtual/Voice Assistant Developed by Samsung Electronics ?");
  printf("\n\nA.Siri \nB.Bixby \nC.Alexa\nD.Cortana\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Bixby");break;}


  }
 i++;
 if (i<=7) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!!!!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD!!!! BUT YOU NEED TO IMPROVE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT!!!! ,BUT THIS MUCH IS NOT SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN I.T.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
 {
     countr=0;
     countq=0;
     goto home;
 }
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(800);
 goto mainhome;
 }
 return 0;
}
