#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
int srand(time(0));
int data[100];
int total_card=52;
int total_num;
int PC;
string add_min;
string requires_1="add";
string requires_2="min";
string PC_A="Last";
string PC_B="Front";
string PC_C="Next";
int card_played;
string appoint;
int computer_card;
int round=0;
int A;
int J;
int Q;
int K;
data[1]=A;
data[4]=4;
data[5]=5;
data[10]=10;
data[11]=J;
data[12]=Q;
data[13]=K;
for(int i=2;i<3;i++)
{
data[i] = i;
}
for(int i=6;i<9;i++)
{
    data[i] = i;
}
for(int i=1;i<=13;i++)
{
    data[i]=data[i+13];
    data[i]=data[i+26];
    data[i]=data[i+39];
    data[1]=A;
            }
cout << "Choose the number of your opponent,1 or 2 or 3" << endl;
cin >> PC;
if(PC==1)
{
    cout << "You will face 1 opponent."<< endl;
}
else if(PC==2 || PC==3)
{
    cout << "You will face " << PC << " opponents" << endl;
}
for(int i=1;i<5;i++)
{
    if(data[rand()%52+1!=0])
    {
        cout << data[rand()%52+1] << " ";
        data[52+i]=data[rand()%52+1];
        data[rand()%52+1] = 0;
        total_card=total_card-1;
    }
    else
    {
        i=i-1;
    }
}
for(int k=1;k<PC;k++)
{
    for(int i=1;i<5;i++)
{
    if(data[rand()%52+1!=0])
    {
        data[57+i+5*(k-1)]=data[rand()%52+1];
        data[rand()%52+1] = 0;
        total_card=total_card-1;
    }
    else
    {
        i=i-1;
    }
}
}
while(true)
{
    if(true)
    {
        if(total_card=0)
        {
            int A=data[1];
            data[1]=A;
            data[4]=4;
            data[5]=5;
            data[10]=10;
            data[11]=J;
            data[12]=Q;
            data[13]=K;
            for(int i=2;i<3;i++)
            {
                data[i] = i;
            }
            for(int i=6;i<9;i++)
            {
                data[i] = i;
            }
            for(int i=1;i<=13;i++)
            {
                data[i]=data[i+13];
                data[i]=data[i+26];
                data[i]=data[i+39];
                data[1]=A;
            }
        }
        cout << "Your card is now" << endl;
                for(int i=1;i<5;i++)
                {
                    cout << data[52+i] << " ";
                }
        cout << "Please choose a card to play." << endl;
        cin >> card_played;
        for(int i=1;i<5;i++)
        {
            if(data[52+i]==A)
            {
                if(card_played == A)
                {
                    round++;
                    total_num=0;
                    cout << "The total nuber for now is 0" << endl;
                    while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                total_card=total_card-1;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                    break;
                                }
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                    }
                }
            }
            else if( card_played==data[52+i] )
            {
                if(data[52+i]==4)
                {
                    cout << "You reverse the order!" << endl;
                    round++;
                    while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                total_card=total_card-1;
                                break;
                                cout << "The total number for now is " << total_num << endl;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                }
                else if(data[52+i]==5)
                {
                    if(PC==1)
                    {
                        round++;
                        break;
                    }
                    else if(PC==2)
                    {
                        cout << "Appoint a person to play a card, last or next." << endl;
                        round++;
                        cin  >> appoint;
                        if(appoint== PC_A )
                        {

                        }
                    }

                }
                else if(data[52+i]==10)
                {
                    cout << "Add 10 or Minus 10" << endl;
                    cin >> add_min;
                    transform(add_min.begin(), add_min.end(), add_min.begin(), ::tolower);
                    if(add_min == requires_1)
                    {
                        total_num=total_num+10;
                        cout << "The total number for now is" << total_num << endl;
                        while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                        total_card=total_card-1;
                        break;
                    }
                    else if(add_min == requires_2)
                    {
                        total_num=total_num-10;
                        cout << "The total number for now is" << total_num << endl;
                        while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    total_card=total_card-1;
                        break;
                    }
                    total_card=total_card-1;
                }
                else if(data[52+i]==J)
                {
                    cout << "You passed" << endl;
                    while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    total_card=total_card-1;
                    break;

                }
                else if(data[52+i]==Q)
                {
                    cout << "Add 20 or Minus 20" << endl;
                    cin >> add_min;
                    transform(add_min.begin(),add_min.end(),add_min.begin(), ::tolower);
                    if(add_min == requires_1)
                    {
                        total_num=total_num+20;
                        cout << "The total number for now is" << total_num << endl;
                        while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    total_card=total_card-1;
                        break;
                    }
                    else if(add_min == requires_2)
                    {
                        total_num=total_num-20;
                        cout << "The total number for now is" << total_num << endl;
                        while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    total_card=total_card-1;
                        break;
                    }
                }
                else if(data[52+i]==K)
                {
                     total_num=99;
                     cout << "The total nuber for now is 99" << endl;
                     while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    total_card=total_card-1;
                     break;
                }
                else if(total_num>99)
                {
                    break;
                }
                else
                {
                    total_num=total_num+data[52+i];
                    while(true)
                    {
                        for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[52+i]=0;
                                data[52+i]=data[rand()%52+1];
                                data[rand()%52+1]=0;
                                total_card=total_card-1;
                                cout << "Your card is now" << endl;
                                for(int i=1;i<5;i++)
                                {
                                    cout << data[52+i] << " ";
                                }
                            }
                            else
                            {
                                i=i-1;
                            }
                        }
                    }
                    cout << "The total number for now is" << total_num << endl;
                    break;
                }
        }
        else
            {
                cout << "Wrong card!!" << endl;
                cin >> card_played;
            }
        }
    for(int k=1;k<PC;k++)
    {
        if(true)
    {
        for(int i=58+5*(k-1);i<62+5*(k-1);i++)
        {
            if(data[i]==2 || data[i] ==3 || data[i] ==6 || data[i] ==7 || data[i] ==8 || data[i] ==9 && data[i]+total_num<=99)
            {
                cout << "The total number for now is "<< total_num+data[i] << endl;
                for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                break;
            }
            else if(data[i]==4)
            {
                for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                break;
            }
            else if(data[i]==5)
            {
                for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                break;
            }
            else if(data[i]==10)
            {
                if(rand()%2 == 1 && total_num+10<=99)
                {
                    total_num=total_num+10;
                    cout << "The total number for now is" << total_num << endl;
                    for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                    break;
                }
                else
                {
                    total_num=total_num-10;
                    cout << "The total number for now is" << total_num << endl;
                    for(int j=1;j<2;j++)
                        {
                            if(data[rand()%52+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                    break;
                }
            }
            else if(data[i]==Q)
            {
                if(rand()%2 == 1 && total_num+20<=99)
                {
                    total_num=total_num+20;
                    cout << "The total number for now is" << total_num << endl;
                    for(int j=1;j<2;j++)
                        {
                            if(data[rand()%57+1!=0])
                            {
                                data[i]=0;
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                    break;
                }
                else
                {
                    total_num=total_num-20;
                    cout << "The total number for now is" << total_num << endl;
                    for(int j=1;j<2;j++)
                        {
                            if(data[rand()%57+1!=0])
                            {
                                data[i]=data[rand()%52+1];
                                total_card=total_card-1;
                            }
                            else
                            {
                                j=j-1;
                            }
                        }
                    break;
                }
            }
        }
    }
    }
    if(total_num>99)
    {
        break;
    }
}
cout << "The winner of this game is" <<endl;
return 0;
}
}
