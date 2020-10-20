#include<iostream>
#include<stdlib.h>
using namespace std;

static int flag=0;

class initiate
{
    
    int k,l,m=0;
protected:
int i,j;
char a[3][3];

};

class tictac: protected initiate
{
public:
void newgame();
void get();
void display(char a[3][3]);
int results(char a[3][3]);
};

void tictac::newgame()
{
    
    cout<<"Hello world"
a[1][1]='a';
a[1][2]='b';
a[1][3]='c';
a[2][1]='d';
a[2][2]='e';
a[2][3]='f';
a[3][1]='g';
a[3][2]='h';
a[3][3]='i';



for(i=1;i<=3;i++)
{
    cout<<"\t\t\t\t";
for(j=1;j<=3;j++)
{
cout<<"|"<<a[i][j]<<"|";
}

cout<<"\n";
}

}


void tictac::display(char a[3][3])
{
for(i=1;i<=3;i++)
{
    cout<<"\t\t\t\t";
for(j=1;j<=3;j++)
{
cout<<"|"<<a[i][j]<<"|";
}

cout<<"\n";
}

}


    case 'a': if(flag==0)
                {
                  a[1][1]='X';
                  flag++;
                }
                else
                    {
                     a[1][1]='O';
                     flag--;
                    }

                display(a);

                break;

    case 'b': if(flag==0)
                {
                  a[1][2]='X';
                    flag++;
                }
                else
                    {
                     a[1][2]='O';
                     flag--;
                    }

               display(a);
                break;

    case 'c': if(flag==0)
                {
                  a[1][3]='X';
                   flag++;
                }
                else
                    {
                     a[1][3]='O';
                     flag--;
                    }

                display(a);
                break;

    case 'd': if(flag==0)
                {
                  a[2][1]='X';
                  flag++;

                }
                else
                    {
                     a[2][1]='O';
                     flag--;
                    }

               display(a);
                break;
    case 'f': if(flag==0)
                {
                  a[2][3]='X';
                  flag++;
                }
                else
                    {
                     a[2][3]='O';
                     flag--;
                    }

                display(a);
                break;

    case 'g': if(flag==0)
                {
                  a[3][1]='X';
                    flag++;
                }
                else
                    {
                     a[3][1]='O';
                     flag--;
                    }

                display(a);
                break;

    case 'h': if(flag==0)
                {
                  a[3][2]='X';
                 flag++;
                }
                else
                    {
                     a[3][2]='O';
                     flag--;
                    }

                display(a);
                break;

    case 'i': if(flag==0)
                {
                  a[3][3]='X';
                   flag++;
                }
                else
                    {
                     a[3][3]='O';
                     flag--;
                    }

                display(a);
                results(a);
                break;
   case '.': exit(0);
}
x=results(a);
if(x==1)
break;

}}


int tictac::results(char a[3][3])
{
int flag;
 if(a[1][1]==a[2][2]&&a[2][2]==a[3][3])
 {
 cout<<"\n==========================Player "<<a[1][1]<<" won!!==========================";
 flag=1;
 }
 else
    if(a[1][3]==a[2][2]&&a[2][2]==a[3][1])
 {
 cout<<"\n==========================Player "<<a[1][3]<<" won!!==========================";
 flag=1;
 }
 else
 if(a[1][1]==a[2][1]&&a[2][1]==a[3][1])
 {
 cout<<"\n==========================Player "<<a[2][1]<<" won!!==========================";
 flag=1;
 }
 else
 if(a[1][2]==a[2][2]&&a[2][2]==a[3][2])
 {
 cout<<"\n==========================Player "<<a[1][2]<<" won!!==========================";
 flag=1;
 }
else
    if(a[1][3]==a[2][3]&&a[2][3]==a[3][3])
 {
 cout<<"\n==========================Player "<<a[1][3]<<" won!!==========================";
 flag=1;
 }
 else
  if(a[1][1]==a[1][2]&&a[1][2]==a[1][3])
 {
 cout<<"\n==========================Player "<<a[2][1]<<" won!!==========================";
 flag=1;
 }
 else
 if(a[2][1]==a[2][2]&&a[2][2]==a[2][3])
 {
 cout<<"\n==========================Player "<<a[1][2]<<" won!!==========================";
 flag=1;
 }
else
if(a[3][1]==a[3][2]&&a[3][2]==a[3][3])
 {
 cout<<"\n==========================Player "<<a[3][3]<<" won!!==========================";
 flag=1;
 }
return flag;
}
int main()
{
tictac t;

cout<<"\n\n================================NEW GAME==================================\n\n";
cout<<"\t\t\t\t\t\t\t By:-SC118,SC120,SC154\n";
    t.newgame();
    t.get();

return 0;
}
