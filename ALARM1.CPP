#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
class alarm
{
  private : int h,m;
  public : void welcome()
	   {
	    int i;
	    clrscr();
	    for(i=1;i<=79;i++)
	    {
	     gotoxy(i,1);
	     cout<<(char)176;
	     gotoxy(i,24);
	     cout<<(char)176;
	    }
	    for(i=1;i<=24;i++)
	    {
	     gotoxy(1,i);
	     cout<<(char)196;
	     gotoxy(79,i);
	     cout<<(char)196;
	    }
	    for(i=26;i<=50;i++)
	    {
	    gotoxy(i,9);
	    cout<<(char)176;
	    gotoxy(i,17);
	    cout<<(char)176;
	    }
	    for(i=10;i<=16;i++)
	    {
	     gotoxy(26,i);
	     cout<<(char)176;
	     gotoxy(50,i);
	     cout<<(char)176;
	    }
	    gotoxy(28,12);
	    cout<<"welcome to alarm clock";
	    gotoxy(38,14);
	    textcolor(YELLOW);
	    for(i=9;i>=1;i--)
	    {
	     cout<<i<<"\b";
	     delay(300);
	    }
	    cout<<(char)14;
	    gotoxy(29,20);
	    cout<<"press any key to enter";
	   }
	   void screen1()
	   {
	    int i;
	    clrscr();
	     for(i=1;i<=79;i++)
	     {
	      gotoxy(i,1);
	      cout<<(char)177;
	      gotoxy(i,24);
	      cout<<(char)177;
	     }
	     for(i=1;i<=24;i++)
	     {
	      gotoxy(1,i);
	      cout<<(char)177;
	      gotoxy(79,i);
	      cout<<(char)177;
	     }
	   }

	    void start()
	   {
	   gotoxy(18,9);
	   cout<<"firstly set hours and press enter to set minutes ";
	   gotoxy(27,12);
	   cout<<"HOUR : "; cin>>h;
	   gotoxy(37,12);
	   cout<<"MINUTES : "; cin>>m;
	    gotoxy(23,20);
	    cout<<"*****press any key to exit*****";

	   while(1)
	   {
	    struct tm *s;


	     time_t st=time(0);
	     s=localtime(&st);
	     if(h==s->tm_hour&&m==s->tm_min)

	      tune();

	    }
	   }

	   void tune()
	   {
	    int i;
	    while(1)
	    {
	    for(i=500;i<600;i+=20)
	    {
	     sound(i);
	     delay(20);
	     nosound();

	    if (kbhit())

	       exit(0);
	    }
	    }
	    }

};

void main()
{
clrscr();
alarm ar;
ar.welcome();
getch();
ar.screen1();
ar.start();
}