#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
bool gameOver;
const int width=20;
const int height=20;
int x,y,FruitX,FruitY,score;
int TailX[100],TailY[100];
int nTail;
enum eDirecton{ STOP=0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;
void setup()
{
    gameOver=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    FruitX= rand() % width;
    FruitY= rand() % height;
    score=0;
}
void draw()
{
    system("cls");
    for(int i=0;i<width+2;i++)
    {
        cout<<"#";
    }
    cout<<endl;
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(j==0)
            {
                cout<<"#"; 
            }
            if(i==y && j==x)
            {
                cout<<"O";
            }
            else if(i==FruitY && j==FruitX)
            {
                cout<<"F";
            }
            else
            {
                bool print = false;
                for(int k=0;k<nTail;k++)
                {
                    
                    if(TailX[k]==j && TailY[k]==i)
                    {
                        cout<<"o";
                        print = true;
                    }
                }
                if(!print)
                {
                    cout<<" ";
                }
            }
            if(j==width-1)
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<width+2;i++)
    {
        cout<<"#";
    }
    cout<<endl;
    cout<<"Score: "<<score<<endl;
}
void input()
{
    if(_kbhit)
    {
        switch (_getch())
        {
        case 'a':
            dir=LEFT;
            break;
        case 'w':
            dir=UP;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'd':
            dir=RIGHT;
            break;
        case 'x':
            gameOver=true;
            break;
        }
    }
}
void logic()
{
    int prevX= TailX[0];
    int prevY= TailY[0];
    int prev2x,prev2y;
    TailX[0]=x;
    TailY[0]=y;
    for(int i=1; i<nTail;i++)
    {
        prev2x=TailX[i];
        prev2y=TailY[i];
        TailX[i]=prevX;
        TailY[i]=prevY;
        prevX=prev2x;
        prevY=prev2y;
    }
    switch(dir)
    {
        case LEFT:
        x--;
        break;
        case RIGHT:
        x++;
        break;
        case UP:
        y--;
        break;
        case DOWN:
        y++;
        break;
    }
    /*if(x>width || x<0 || y>height || y<0)
    {
        gameOver=true;
    }*/
   if(x>=width) x=0; else if(x<0) x= width - 1;
   if(y>=height) y=0; else if(y<0) y= height - 1;
    for(int i=0;i<nTail;i++)
    {
        if(TailX[i]==x && TailY[i]==y)
        {
            gameOver=true;
        }
    }
    if(x==FruitX && y==FruitY)
    {
        score+=10;
        FruitX= rand() % width;
        FruitY= rand() % height;
        nTail++;
    }
}
main()
{
    setup();
    while(!gameOver)
    {
        draw();
        input();
        logic();
        Sleep(10);
    }
}