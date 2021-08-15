#include<stdio.h> #include<ctype.h>
#include<conio.h>
void main()
{  int choice; char playername[10]; int count; int countr;
printf("\t \t \t C PROGRAM QUIZ GAME \n");
printf("\n \t \t _____________________");
printf("\n \t \t 	WELCOME       ");
printf("\n \t \t          TO          ");
printf("\n \t \t        THE GAME      ");
printf("\n \t \t ______________________");
printf("\n \t \t________________________");
printf("\n \t \t PRESS S TO START THE GAME");
printf("\n \t \t PRESS H FOR HELP       ");
printf("\n \t \t PRESS Q TO QUIT        ");
printf("\n \t \t_________________________");

choice==(toupper(getch());

if(choice=='H');
{
  help();
getch();
}
if(choice=='Q') exit(0);
else if(choice=='S');
{
system("cls");
printf("\n \n \n \n REGISTER YOUR NAME:");
gets(playername);
system("cls");


help()
{ printf(" _______________HELP ZONE_____________");
printf("\n THERE ARE TWO ROUNDS IN THIS QUIZ GAME - ");
printf("\n 1>  WARM-UP ROUND: IN THIS ROUND YOU WILL BE ASKED A TOTAL OF 3 QUESTIONS ");
printf("\n >YOU WILL HAVE TO GIVE ATLEAST TWO CORRECT ANSWERS TO BE ABLE TO PROCEED TO ROUND 2");
printf("\n >THE QUESTIONS ARE NOT TIME BASED AND ARE GENERAL KNOWLEDGE BASED ");
printf("\n \n 2> CHALLENGE ROUND: IN THIS ROUND YOU WILL BE ASKED 10 QUESTIONS TO CHECK YOUR SKILLS");
printf("\n >THE QUESTIONS ARE TIME BASED AND WILL CHECK YOUR SPEED AS WELL");
printf("\n >FOR EVERY CORRECT ANSWER YOU GET TEN POINTS");
printf("\n >ONE INCORRECT ANSWER AND YOU WILL BE OUT FROM THE GAME");
printf("\n PRESS Y TO START THE GAME");
printf("\n PRESS ANY OTHER KEY TO EXIT");

if(toupper(getch())=='Y')
{ goto home:
}
else
{ goto mainhome;
system("cls");
}

home()
system("cls");
count=0;
for(i=1;i<=3;i++)
{
 system("cls");
 r1=i;

 switch(r1)
 { case 1:     printf("\n \n WHO WAS THE FIRST NOBEL PRIZE WINNER FROM INDIA?");
	       printf("\n A.) C.V RAMAN \t \t \t \t \t \t B.) AMARTYA SEN");
	       printf("\n c.) RABINDRANATH TAGORE \t \t \t \t \ D.) HARGOBIND KHORANA");
	       if(toupper(getch())=='C')
		    { printf(" \n \n CORRECT!!!");
		    count++;
		    getch();
		    break;
		    }
	       else
		   { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
		   getch();
		   break; }
  case 2:
	       printf("\n \n WHICH IS THE SECOND LARGEST CONTINENT IN THE WORLD?");
	       printf("\n \n A.) ANTARCTICA \t \t \t \t \t \t B.) EUROPE");
	       printf("\n \n C.) AFRICA \t \t \t \t \t \t \t D.)SOUTH AMERICA");

	       if(toupper(getch)=='C');
	       printf("\n\n CORRECT!!!");
	       count++;
	       getch();
	       break:

	       else
	       printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	       getch();
	       break;
 case 3:
	    printf("\n \n WHAT IS THE GROUP OF FROGS CALLED?");
	    printf("\n \n A.) TRAFFIC \t \t \t \t \t \t B.)POLICE");
	    printf("\n C.) TODDLER \t \t \t \t \t \t \t D.)ARMY");

	    if(toupper(getch)=='D')
	    { printf("\n \n CORRECT!!!");
	      count++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n WRONG!!! BETTER LUCK NEXT TIME");
	    getch();
	    break;
	    }

 if(count>=2)
 { goto test; }
 else
 system("cls");
 printf("\n \n SORRY YOU ARE NOT ELIGIBLE TO PLAY THE GAME");
 getch();
 goto mainhome;
 }



 test()
 system("cls");
 printf("\n \n ***** CONGRATULATIONS ! YOU ARE ELIGIBLE TO PLAY THIS GAME*****");
 printf("\n PRESS P TO START THE GAME");
 if(toupper(getch)=='P')
    { goto game;
    }


game();
{
  countr=0;
  for(i=1;i<10;i++)
  { system("cls");
    r=i;

switch(r)
{
  case 1:
  printf("\n \n WHERE IS THE CATHEDRAL OF NOTRE DAME LOCATED ?");
  printf("\n \n A.)PARIS \t \t \t \t \t \t B.)ROME");
  printf("\n C.)AMSTERDAM \t \t \t \t \t \t D.)VIENNA");

   if(toupper(getch)=='A')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

   case 2:
   printf("\n \n WHAT IS THE STUDY OF EARTHQUAKES CALLED?");
   printf("\n A.)ETIMOLOGY \t \t \t \t \t B.)COSMOLOGY");
   printf("\n C.)OROLOGY \t \t \t \t \t \t D.) SEISMOLOGY");

  if(toupper(getch)=='D')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

  case 3:
  printf("\n \n WHAT IS THE NATIONAL GAME OF JAPAN ?");
  printf("\n A.)MARTIAL ARTS \t \t \t \t \t B.)KARATE");
  printf("\n C.)TAEKWONDO \t \t \t \t \t \t D.)SUMO WRESTLING");

  if(toupper(getch)=='D')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

  case 4:
  printf("\n \n WHO IS THE CURRENT DEFENCE MINISTER OF INDIA?");
  printf("\n A.)NIRMALA SITHARAMAN \t \t \t \t \t B.)RAJNATH SINGH");
  printf("\n C.)GIRIRAJ SINGH  \t \t \t \t \t \t \t D.SMRITI IRANI");

if(toupper(getch)=='B')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }


case 4:
       printf("\n THE SENSITIVE INDEX OF NATIONAL STOCK EXCHANGE OF INDIA IS KNOWN AS ?");
       printf("\n \n A.) SENSEX \t \t \t \t \t \t B.) CRIS ");
       printf("\n C.) NIFTY \t \t \t \t \t \t \t D.) MCS");

if(toupper(getch)=='D')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

case 5:
printf("\n WHICH OF THE FOLLOWING DANCE FORMS BELONG TO ANDHRA PRADESH?");
printf("\n \n A.)KUCHIPUDI \t \t \t \t \t \t B.)YAKSHAGANA");
printf("\n C.)KATHAKALI \t \t \t \t \t \t \t D.)BIHU");

if(toupper(getch)=='A')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }


case 6:
printf("\n WHO IS THE WRITER OF DEVDAS?");
printf("\n \n A.)BIBHUTIBHUSHAN BANDHOPADHYAY \t \t \t B.) KALIDASA");
printf("\n C.) SURDAS \t \t \t \t \t \t \t \t \t \t D.)SARATCHANDRA CHATTOPADHYAY");

if(toupper(getch)=='D')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }


case 7:
printf("\n WHAT IS THE NEW NAME OF FEROZ SHAH KOTLA GROUND ?");
printf("\n \n A.)ARUN JAITLEY STADIUM \t \t \t \t B.)AJIT WADEKAR STADIUM");
printf("\n C.)GAUTAM GAMBHIR STADIUM \t \t \t \t D.)SHEILA DIXIT STADIUM");

if(toupper(getch)=='A')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

case 8:
printf("\n TESLA IS TO BUILD ITS FIRST EUROPEAN PLANT IN WHICH CITY?");
printf("\n \n A.)PARIS \t \t \t \t \t \t B.)DUBLIN ");
printf("\n C.)BERLIN \t \t \t \t \t\t \t D.)LONDON");

if(toupper(getch)=='C')
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }

case 9:
printf("\n WHICH OF THE FOLLOWING IS AN AIR BORNE DISEASE?");
printf("\n \n A.)TYPHOID \t \t \t \t \t \t B.)MEASLES");
printf("\n C.) PINK EYE \t \t \t \t \t \t D.)CONJUCTIVITIS");

if(toupper(getch)=='B');
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;
	    }


case 10:
printf("\n WHICH WAS THE WORLD'S FIRST PROGRAMMING LANGUAGE?");
printf("\n \n A.) COBOL \t \t \t \t \t \t \t B.)LISP");
printf("\n C.) C LANGUAGE \t \t \t \t \t \t D.) PLANKALKUL");

if(toupper(getch)=='D');
	    { printf("\n \n CORRECT!!!");
	      countr++;
	      getch();
	      break;
	    }

	    else
	    { printf("\n \n WRONG!!! BETTER LUCK NEXT TIME");
	    getch(); goto score();
	    break;



score()

system("cls");
score=(float)countr*10;
if(score>0.00 && score<100)
{
    printf(" WELL PLAYED! BUT BETTER LUCK NEXT TIME");
    printf("\n YOUR SCORE IS: %d",score);
}
else if(score==100)
{
   printf("\n CONGRATULATIONS ! YOU HAVE WON THE GAME");
   printf("\n YOUR SCORE : \\100// ");
}
else
{
   printf("OOPS! BETTER LUCK NEXT TIME ");
   printf("\n YOUR SCORE:0");
}

getch();
};