#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void display();
int main()
 {
 system("CLS");
 char ch,j='1',c[9],np1[20],np2[20];
 int sp1=0,sp2=0,i,choice;
 cout<<"\t\t\t\tTic-tac-toe\n\t\t\t\t-----------";
 cout<<"\nEnter player 1 name : ";
 cin.getline(np1,20);
 cout<<"\nEnter player 2 name : ";
 cin.getline(np2,20);
 system("CLS");
 again:
 for(i=0,j;i<=8;i++,j++)
  {
  c[i]=j;
  }
 cout<<"\t\t\t\tTic-tac-toe\n\t\t\t\t-----------";
 cout<<"\n"<<np1<<" is X (Score : "<<sp1<<")\t\t\t\t"<<np2<<" is o(Score : "<<sp2<<")";
 cout<<"\n\t\t\t\t"<<c[0]<<"  |  "<<c[1]<<"  |  "<<c[2]<<endl;
 cout<<"\t\t\t\t---|-----|---"<<endl;
 cout<<"\t\t\t\t"<<c[3]<<"  |  "<<c[4]<<"  |  "<<c[5]<<endl;
 cout<<"\t\t\t\t---|-----|---"<<endl;
 cout<<"\t\t\t\t"<<c[6]<<"  |  "<<c[7]<<"  |  "<<c[8]<<endl;
 for(i=1;i<=5;i++)
  {

  cout<<np1<<"'s turn.Select your choice : ";
  cin>>choice;
  if(choice<1||choice>9)
   {
   cout<<"Incorrect Choice!!! Try Again";
   goto temp1;
   }
  if(c[choice-1]=='o'||c[choice-1]=='X')
   {
    cout<<"\nThis place is already occupied.Choose another place.";
    temp1:
    cout<<endl<<np1<<" Select your choice : ";
    cin>>choice;
   }
  c[choice-1]='X';
  system("CLS");
  cout<<"\t\t\t\tTic-tac-toe\n\t\t\t\t-----------";
  cout<<"\n"<<np1<<" is X (Score : "<<sp1<<")\t\t\t\t"<<np2<<" is o(Score : "<<sp2<<")";
  cout<<"\n\t\t\t\t"<<c[0]<<"  |  "<<c[1]<<"  |  "<<c[2]<<endl;
  cout<<"\t\t\t\t---|-----|---"<<endl;
  cout<<"\t\t\t\t"<<c[3]<<"  |  "<<c[4]<<"  |  "<<c[5]<<endl;
  cout<<"\t\t\t\t---|-----|---"<<endl;
  cout<<"\t\t\t\t"<<c[6]<<"  |  "<<c[7]<<"  |  "<<c[8]<<endl;
  if((c[0]=='X'&&c[1]=='X'&&c[2]=='X')||(c[3]=='X'&&c[4]=='X'&&c[5]=='X')||(c[6]=='X'&&c[7]=='X'&&c[8]=='X')||(c[0]=='X'&&c[3]=='X'&&c[6]=='X')||(c[1]=='X'&&c[4]=='X'&&c[7]=='X')||(c[2]=='X'&&c[5]=='X'&&c[8]=='X')||(c[0]=='X'&&c[4]=='X'&&c[8]=='X')||(c[6]=='X'&&c[4]=='X'&&c[2]=='X'))
   {
   cout<<"\n\t\t\t  Congratuations!!!\n\t\t\t    "<<endl;
   display();
   cout<<"\n\t\t\t "<<np1<<" has won the match.";
   sp1++;
   break;
   }
  else if((c[0]=='o'&&c[1]=='o'&&c[2]=='o')||(c[3]=='o'&&c[4]=='o'&&c[5]=='o')||(c[6]=='o'&&c[7]=='o'&&c[8]=='o')||(c[0]=='o'&&c[3]=='o'&&c[6]=='o')||(c[1]=='o'&&c[4]=='o'&&c[7]=='o')||(c[2]=='o'&&c[5]=='o'&&c[8]=='o')||(c[0]=='o'&&c[4]=='o'&&c[8]=='o')||(c[6]=='o'&&c[4]=='o'&&c[2]=='o'))
   {
   cout<<"\n\t\t\t  Congratuations!!!\n\t\t\t    "<<endl;
   display();
   cout<<"\n\t\t\t "<<np2<<" has won the match.";
   sp2++;
   break;
   }
  if(i==5)
   {
   cout<<"It's a draw.";
   sp1++;
   sp2++;
   }
  if(i<=4)
   {
   cout<<np2<<"'s turn.Select your choice : ";
   cin>>choice;
   if(choice<1||choice>9)
    {
    cout<<"Incorrect Choice!!! Try Again";
    goto temp2;
    }
   if(c[choice-1]=='o'||c[choice-1]=='X')
    {
    cout<<"\nThis place is already occupied.Choose another place.";
    temp2:
    cout<<endl<<np2<<" Select your choice : ";
    cin>>choice;
    }
   c[choice-1]='o';
   system("CLS");
   cout<<"\t\t\t\tTic-tac-toe\n\t\t\t\t-----------";
   cout<<"\n"<<np1<<" is X (Score : "<<sp1<<")\t\t\t\t"<<np2<<" is o(Score : "<<sp2<<")";
   cout<<"\n\t\t\t\t"<<c[0]<<"  |  "<<c[1]<<"  |  "<<c[2]<<endl;
   cout<<"\t\t\t\t---|-----|---"<<endl;
   cout<<"\t\t\t\t"<<c[3]<<"  |  "<<c[4]<<"  |  "<<c[5]<<endl;
   cout<<"\t\t\t\t---|-----|---"<<endl;
   cout<<"\t\t\t\t"<<c[6]<<"  |  "<<c[7]<<"  |  "<<c[8]<<endl;
   if((c[0]=='X'&&c[1]=='X'&&c[2]=='X')||(c[3]=='X'&&c[4]=='X'&&c[5]=='X')||(c[6]=='X'&&c[7]=='X'&&c[8]=='X')||(c[0]=='X'&&c[3]=='X'&&c[6]=='X')||(c[1]=='X'&&c[4]=='X'&&c[7]=='X')||(c[2]=='X'&&c[5]=='X'&&c[8]=='X')||(c[0]=='X'&&c[4]=='X'&&c[8]=='X')||(c[6]=='X'&&c[4]=='X'&&c[2]=='X'))
   {
   cout<<"\n\t\t\t  Congratuations!!!\n\t\t\t    "<<endl;
   display();
   cout<<"\n\t\t\t "<<np1<<" has won the match.";
   sp1++;
   break;
   }
  else if((c[0]=='o'&&c[1]=='o'&&c[2]=='o')||(c[3]=='o'&&c[4]=='o'&&c[5]=='o')||(c[6]=='o'&&c[7]=='o'&&c[8]=='o')||(c[0]=='o'&&c[3]=='o'&&c[6]=='o')||(c[1]=='o'&&c[4]=='o'&&c[7]=='o')||(c[2]=='o'&&c[5]=='o'&&c[8]=='o')||(c[0]=='o'&&c[4]=='o'&&c[8]=='o')||(c[6]=='o'&&c[4]=='o'&&c[2]=='o'))
   {
   cout<<"\n\t\t\t  Congratuations!!!\n\t\t\t    "<<endl;
   display();
   cout<<"\n\t\t\t "<<np2<<" has won the match.";
   sp2++;
   break;
   }
  }
 }
 cout<<"\nDo you want to play again ?(Y/N) ";
 cin>>ch;
 j='1';
 if(ch=='y'||ch=='Y')
  {
  system("CLS");
  goto again;
  }
 cout<<"Final scores are :\n\t"<<np1<<" has scored "<<sp1<<"\n\t"<<np2<<" has scored "<<sp2;
 if(sp1>sp2)
  cout<<"\nFinal winner is "<<np1;
 else if(sp1<sp2)
  cout<<"\nFinal winner is "<<np2;
 else
  cout<<"\nThe match is draw.";

getch();
return 0;
}

void display()
 {
 cout<<"\t\t\t\t*\n\t\t\t      * * *\n\t\t\t   * * * * * *\n\t\t        * * * * * * * * *\n\t\t\t   * * * * * *\n\t\t\t      * * *\n\t\t\t\t*";
 }
