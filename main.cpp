#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <dos.h>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;

void hand(int &cardSlot1, int &cardSlot2);


void CardName(int &cardSlot1,  string &cardName1);
void CardNames2(int &cardSlot2, string &cardName2);
void CardNames3(int &cardSlot3, string &cardName3);
void dealerHand (int &dealerSlot1, int &dealerSlot2);
void dealerCardName(int &dealerSlot1, string &dealerCardName1 );
void dealerCardNames2(int &dealerSlot2, string &dealerCardName2 );
void dealerCardNames3(int &dealerSlot3, string &dealerCardName3);
void drawPhase1(int &cardSlot3);
void dealerDrawPhase1(int &dealerSlot3);
void pointCalculator(int &dealerpoints, int dealerSlot1, int dealerSlot2, int dealerSlot3, int dealerSlot4, int dealerSlot5);
void delearPointCalculator(int &dealerPoints, int dealerSlot1, int dealerSlot2, int dealerSlot3, int dealerSlot4, int dealerSlot5);
int main()
{
    int bank=2000;
    int bet=0;
    int pay=0;
    int points=0;
    int dealerPoints=0;
    int cardSlot1=0;
    int cardSlot2=0;
    int cardSlot3=0;
    int cardSlot4=0;
    int cardSlot5=0;
    int dealerSlot1=0;
    int dealerSlot2=0;
    int dealerSlot3=0;
    int dealerSlot4=0;
    int dealerSlot5=0;
    string cardName1="Ace";
    string cardName2="Ace";
    string cardName3="Ace";
    string cardName4="Ace";
    string cardName5="Ace";
    string dealerCardName1="Ace";
    string dealerCardName2="Ace";
    string dealerCardName3="Ace";
    string dealerCardName4="Ace";
    string dealerCardName5="Ace";
    int totalPointValue=0;
    int dealerPointValue=0;
    int acePoints=0;
    char drawChoice='Z';
    char consent='Y';


    cout << "Hello Final(Dallen)!" << endl;
    cout<<endl;
    cout<<endl;
    while (bank>=5 || consent=='Y' || consent=='y')
{


while (bet<5 || bet>bank)
  {




    cout<<"Place your bets (5$-2000$)"<<endl;//Get betting amount
    cin>>bet;

    if(bet>bank)
    {
        cout<<"You're not that rich"<<endl;



    }
else if (bet<5)
{
    cout<<"You need to gamble more money."<<endl;

}

  }

bank=bank-bet;
hand (cardSlot1, cardSlot2);

CardName (cardSlot1,  cardName1);
CardNames2 (cardSlot2, cardName2);
dealerHand (dealerSlot1, dealerSlot2);
dealerCardName(dealerSlot1, dealerCardName1);
dealerCardNames2(dealerSlot2, dealerCardName2);



cout<<"Your hand is:"<<cardName1<<","<<cardName2<<endl;

cout<<"The dealer reveals:"<<dealerCardName1<<endl;

cout<<"Would you like to draw(Y or N)?"<<endl;
cin>>drawChoice;

if (drawChoice='Y' || 'y')
{


drawPhase1(cardSlot3);
CardNames3(cardSlot3, cardName3);

cout<<"Your hand is now:"<<cardName1<<","<<cardName2<<","<<cardName3<<endl;
pointCalculator( points, cardSlot1, cardSlot2, cardSlot3, cardSlot4, cardSlot5);

}


cout<<"It's time to see how the dealer draws."<<endl;

    delearPointCalculator(dealerPoints, dealerSlot1, dealerSlot2, dealerSlot3, dealerSlot4, dealerSlot5);

    if (dealerPoints==points)
    {
        cout<<"Tie."<<endl;
        cout<<"Play again?(Y or y to continue)"<<endl;
     cin>>consent;
     bank=bank+bet;
    }


else if (dealerPoints>points)
{
    cout<<"You lose."<<endl;
    cout<<"Play again?(Y or y to continue)"<<endl;
     cin>>consent;
}
else if (dealerPoints<points)
{
    cout<<"You win!"<<endl;
    bank=bank+(bet*2);
    cout<<"Play again?(Y or y to continue)"<<endl;
     cin>>consent;
}

}
    return 0;
}
void hand(int &cardSlot1, int &cardSlot2)
{
    srand(static_cast<int>(time(0)));
    cardSlot1 = 1 + rand() % (13-1+1);


    cardSlot2 = 1 + rand() % (13-1+1);

if (cardSlot1==cardSlot2)

{


    cardSlot2 = 1 + rand() % (13-1+1);


}

}




void CardName(int &cardSlot1, string &cardName1)
{



    if (cardSlot1==1)
    {

 cardName1="Ace";

    }

if (cardSlot1==2)
    {

 cardName1="Two";

    }
    if (cardSlot1==3)
    {

cardName1="Three";

    }
if (cardSlot1==4)
    {

 cardName1="Four";

    }
if (cardSlot1==5)
    {

 cardName1="Five";

    }
    if (cardSlot1==6)
    {

 cardName1="Six";

    }
 if (cardSlot1==7)
    {

 cardName1="Seven";

    }
    if (cardSlot1==8)
    {

 cardName1="Eight";

    }
 if (cardSlot1==9)
    {

cardName1="Nine";

    }

    if (cardSlot1==10)

    {
         cardName1="Ten";
    }


    if (cardSlot1==11)
   {

cardName1="Jack";

    }
     if (cardSlot1==12 )
    {

 cardName1="Queen";


    }
     if (cardSlot1==13)
    {

 cardName1="King";


    }
}



void CardNames2(int &cardSlot2, string &cardName2)
{
    if (cardSlot2==1)
    {

cardName2="Ace";

    }

if (cardSlot2==2)
    {

 cardName2="Two";

    }
    if (cardSlot2==3)



    {

 cardName2="Three";

    }
if (cardSlot2==4)
    {

 cardName2="Four";

    }
if (cardSlot2==5)
    {

 cardName2="Five";

    }
    if (cardSlot2==6)
    {

 cardName2="Six";

    }
 if (cardSlot2==7)
    {

 cardName2="Seven";

    }
    if (cardSlot2==8)



    {

 cardName2="Eight";

    }
 if (cardSlot2==9)
    {

 cardName2="Nine";

    }

    if (cardSlot2==10)

    {
         cardName2="Ten";
    }


    if (cardSlot2==11)
   {

 cardName2="Jack";

    }
     if (cardSlot2==12)
    {

 cardName2="Queen";


    }
    if (cardSlot2==13)
    {

 cardName2="King";


    }
}
void dealerHand(int &dealerSlot1, int &dealerSlot2)
{

    dealerSlot1 = 1 + rand() % (13-1+1);


    dealerSlot2 = 1 + rand() % (13-1+1);

    if (dealerSlot1==dealerSlot2)
    {
       dealerSlot2 = 1 + rand() % (13-1+1);

    }
}
void dealerCardName(int &dealerSlot1, string &dealerCardName1 )
{
  if (dealerSlot1==1)
    {

 dealerCardName1="Ace";

    }

if (dealerSlot1==2)
    {

 dealerCardName1="Two";

    }
    if (dealerSlot1==3)
    {

dealerCardName1="Three";

    }
if (dealerSlot1==4)
    {

 dealerCardName1="Four";

    }
if (dealerSlot1==5)
    {

 dealerCardName1="Five";

    }
    if (dealerSlot1==6)
    {

 dealerCardName1="Six";

    }
 if (dealerSlot1==7)
    {

 dealerCardName1="Seven";

    }
    if (dealerSlot1==8)
    {

 dealerCardName1="Eight";

    }
 if (dealerSlot1==9)
    {

dealerCardName1="Nine";

    }

    if (dealerSlot1==10)

    {
         dealerCardName1="Ten";
    }


    if (dealerSlot1==11)
   {

dealerCardName1="Jack";

    }
     if (dealerSlot1==12 )
    {

 dealerCardName1="Queen";


    }
     if (dealerSlot1==13)
    {

 dealerCardName1="King";


    }
}
void dealerCardNames2(int &dealerSlot2, string &dealerCardName2 )
{
    if (dealerSlot2==1)
    {

 dealerCardName2="Ace";

    }

if (dealerSlot2==2)
    {

 dealerCardName2="Two";

    }
    if (dealerSlot2==3)
    {

dealerCardName2="Three";

    }
if (dealerSlot2==4)
    {

 dealerCardName2="Four";

    }
if (dealerSlot2==5)



    {



 dealerCardName2="Five";
    }

    if (dealerSlot2==6)
    {


 dealerCardName2="Six";

    }
 if (dealerSlot2==7)
    {

 dealerCardName2="Seven";

    }
    if (dealerSlot2==8)
    {

 dealerCardName2="Eight";

    }
 if (dealerSlot2==9)
    {

dealerCardName2="Nine";

    }

    if (dealerSlot2==10)


         dealerCardName2="Ten";



    if (dealerSlot2==11)
   {

dealerCardName2="Jack";

    }
     if (dealerSlot2==12 )
    {

 dealerCardName2="Queen";


    }
     if (dealerSlot2==13)
    {

 dealerCardName2="King";


    }

}
void drawPhase1(int &cardSlot3)
{

cardSlot3 = 1 + rand() % (13-1+1);
cout<<cardSlot3<<endl;
system("Pause");


}
void CardNames3(int &cardSlot3, string &cardName3)
{

    if (cardSlot3==1)
    {

    cardName3="Ace";

    }

if (cardSlot3==2)
    {

 cardName3="Two";

    }
    if (cardSlot3==3)



    {

 cardName3="Three";

    }
if (cardSlot3==4)
    {

 cardName3="Four";

    }
if (cardSlot3==5)
    {

 cardName3="Five";

    }
    if (cardSlot3==6)
    {

 cardName3="Six";

    }
 if (cardSlot3==7)
    {

 cardName3="Seven";

    }
    if (cardSlot3==8)



    {

 cardName3="Eight";

    }
 if (cardSlot3==9)
    {

 cardName3="Nine";

    }

    if (cardSlot3==10)

    {
         cardName3="Ten";
    }


    if (cardSlot3==11)
   {

 cardName3="Jack";

    }
     if (cardSlot3==12)
    {

 cardName3="Queen";


    }
    if (cardSlot3==13)
    {

 cardName3="King";






}
}
void pointCalculator ( int &points, int cardSlot1, int cardSlot2, int cardSlot3, int cardSlot4, int cardSlot5)
{
    int aceChoice1=1;
    int aceChoice2=1;
    int aceChoice3=1;
    int aceChoice4=1;
    int aceChoice5=1;



    if (cardSlot1==1)
    {
        cout<<"Do you want your Ace to be worth 1 or eleven?"<<endl;
        cin>>aceChoice1;


        aceChoice1=cardSlot1;
    }
    if (cardSlot2==1)
    {
        cout<<"Do you want your Ace to be worth 1 or eleven?"<<endl;
        cin>>aceChoice2;

        aceChoice2=cardSlot2;

    }
    if (cardSlot3==1)
    {
        cout<<"Do you want your Ace to be worth 1 or eleven?"<<endl;
        cin>>aceChoice3;

        aceChoice3=cardSlot3;

    }
    if (cardSlot4==1)
    {
        cout<<"Do you want your Ace to be worth 1 or eleven?"<<endl;
        cin>>aceChoice4;

        aceChoice4=cardSlot4;

    }
    if (cardSlot5==1)
    {
        cout<<"Do you want your Ace to be worth 1 or eleven?"<<endl;
        cin>>aceChoice5;

        aceChoice5=cardSlot5;

    }

    if (cardSlot1==11 || cardSlot1==12 || cardSlot3==13)

    {

        cardSlot1=10;



    }
     if (cardSlot2==11 || cardSlot1==12 || cardSlot3==13)

    {

        cardSlot2=10;



    }
         if (cardSlot3==11 || cardSlot1==12 || cardSlot3==13)

    {

        cardSlot3=10;



    }
             if (cardSlot4==11 || cardSlot1==12 || cardSlot3==13)

    {

        cardSlot4=10;



    }
      if (cardSlot5==11 || cardSlot1==12 || cardSlot3==13)

    {

        cardSlot5=10;



    }















    points=cardSlot1+cardSlot2+cardSlot3+cardSlot4+cardSlot5;



}
void delearPointCalculator(int &dealerPoints, int dealerSlot1, int dealerSlot2, int dealerSlot3, int dealerSlot4, int dealerSlot5)

{
    int aceChoice1=1;
    int aceChoice2=1;
    int aceChoice3=1;
    int aceChoice4=1;
    int aceChoice5=1;



    if (dealerSlot1==1)
    {




        11==dealerSlot1;
    }
    if (dealerSlot2==1)
    {



        11==dealerSlot2;

    }
    if (dealerSlot3==1)
    {

        11==dealerSlot3;

    }
    if (dealerSlot4==1)
    {


        11==dealerSlot4;

    }
    if (dealerSlot5==1)
    {


        11==dealerSlot5;

    }

    if (dealerSlot1==11 || dealerSlot1==12 || dealerSlot3==13)

    {

        dealerSlot1==10;



    }
     if (dealerSlot2==11 || dealerSlot1==12 || dealerSlot3==13)

    {

        dealerSlot2==10;



    }
         if (dealerSlot3==11 || dealerSlot1==12 || dealerSlot3==13)

    {

        dealerSlot3==10;



    }
             if (dealerSlot4==11 || dealerSlot1==12 || dealerSlot3==13)

    {

        dealerSlot4==10;



    }
      if (dealerSlot5==11 || dealerSlot1==12 || dealerSlot3==13)

    {

        dealerSlot5==10;



    }















    dealerPoints=dealerSlot1+dealerSlot2+dealerSlot3+dealerSlot4+dealerSlot5;


}
void dealerDrawPhase1 (int &dealerSlot3)
{


     dealerSlot3 = 1 + rand() % (13-1+1);


}
void dealerCardNames3(string &dealerCardName3, int &dealerSlot3)
{

    if (dealerSlot3==1)
    {

 dealerCardName3="Ace";

    }

if (dealerSlot3==2)
    {

 dealerCardName3="Two";

    }
    if (dealerSlot3==3)
    {

dealerCardName3="Three";

    }
if (dealerSlot3==4)
    {

 dealerCardName3="Four";

    }
if (dealerSlot3==5)



    {



 dealerCardName3="Five";
    }

    if (dealerSlot3==6)
    {


 dealerCardName3="Six";

    }
 if (dealerSlot3==7)
    {

 dealerCardName3="Seven";

    }
    if (dealerSlot3==8)
    {

 dealerCardName3="Eight";

    }
 if (dealerSlot3==9)
    {

dealerCardName3="Nine";

    }

    if (dealerSlot3==10)


         dealerCardName3="Ten";



    if (dealerSlot3==11)
   {

dealerCardName3="Jack";

    }
     if (dealerSlot3==12 )
    {

 dealerCardName3="Queen";


    }
     if (dealerSlot3==13)
    {

 dealerCardName3="King";


    }


}
