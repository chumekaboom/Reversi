#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;

char current;
vector<vector<char> > board;
void print_board();
void print_score();
void print_legal(char current);
void move(int y, int x);
bool valid_move(int i,int j);
bool valid_up(int y,int x);
bool valid_down(int y,int x);
bool valid_left(int y,int x);
bool valid_right(int y,int x);
bool valid_right_bottom(int y,int x);
bool valid_left_top(int y,int x);
bool valid_left_bottom(int y,int x);
bool valid_right_top(int y,int x);

char mycolor;
char enemy;
char w;
char b;
vector<int> moves;

void make_move();
void get_move();
bool game_on();

int main()
{
    board.resize(8,vector<char> (8));
    w='w';
    b='b';
    for(int i=0; i<8; i++)for(int j=0; j<8; j++)board[i][j]='-';
    board[3][3]=w;
    board[4][4]=w;
    board[3][4]=b;
    board[4][3]=b;

    cin>>mycolor;
    enemy=b;
    if(mycolor==b)
    {
        enemy=w;
        make_move();
    }
    while(game_on())
    {
        // print_board();
        get_move();
        if(!game_on())break;
        //  print_board();
        make_move();
    }
}
void make_move()
{
    current=mycolor;

    moves.clear();
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(valid_move(i,j))moves.push_back(8*i+j);
            // cout<<"here\n";
        }
    if(moves.size()==0)cout<<"-1\n";
    else
    {
        int move_num;
        if(binary_search(moves.begin(),moves.end(),0))
        {
            cout<<"0\n";
            move_num=0;
        }
        else if(binary_search(moves.begin(),moves.end(),7))
        {
            cout<<"7\n";
            move_num=7;
        }
        else if(binary_search(moves.begin(),moves.end(),63))
        {
            cout<<"63\n";
            move_num=63;
        }
        else if(binary_search(moves.begin(),moves.end(),56))
        {
            cout<<"56\n";
            move_num=56;
        }
        else if(binary_search(moves.begin(),moves.end(),18))
        {
            cout<<"18\n";
            move_num=18;
        }

        else if(binary_search(moves.begin(),moves.end(),19))
        {
            cout<<"19\n";
            move_num=19;
        }

        else if(binary_search(moves.begin(),moves.end(),20))
        {
            cout<<"20\n";
            move_num=20;
        }

        else if(binary_search(moves.begin(),moves.end(),21))
        {
            cout<<"21\n";
            move_num=21;
        }

        else if(binary_search(moves.begin(),moves.end(),26))
        {
            cout<<"26\n";
            move_num=26;
        }

        else if(binary_search(moves.begin(),moves.end(),29))
        {
            cout<<"29\n";
            move_num=29;
        }

        else if(binary_search(moves.begin(),moves.end(),34))
        {
            cout<<"34\n";
            move_num=34;
        }

        else if(binary_search(moves.begin(),moves.end(),38))
        {
            cout<<"38\n";
            move_num=38;
        }

        else if(binary_search(moves.begin(),moves.end(),42))
        {
            cout<<"42\n";
            move_num=42;
        }

        else if(binary_search(moves.begin(),moves.end(),43))
        {
            cout<<"43\n";
            move_num=43;
        }

        else if(binary_search(moves.begin(),moves.end(),44))
        {
            cout<<"44\n";
            move_num=44;
        }

        else if(binary_search(moves.begin(),moves.end(),45))
        {
            cout<<"45\n";
            move_num=45;
        }



        else if(binary_search(moves.begin(),moves.end(),24))
        {
            cout<<"24\n";
            move_num=24;
        }

        else if(binary_search(moves.begin(),moves.end(),32))
        {
            cout<<"32\n";
            move_num=32;
        }
        else if(binary_search(moves.begin(),moves.end(),31))
        {
            cout<<"31\n";
            move_num=31;
        }
        else if(binary_search(moves.begin(),moves.end(),39))
        {
            cout<<"39\n";
            move_num=39;
        }
        else if(binary_search(moves.begin(),moves.end(),3))
        {
            cout<<"3\n";
            move_num=3;
        }
        else if(binary_search(moves.begin(),moves.end(),4))
        {
            cout<<"4\n";
            move_num=4;
        }
        else if(binary_search(moves.begin(),moves.end(),59))
        {
            cout<<"59\n";
            move_num=59;
        }
        else if(binary_search(moves.begin(),moves.end(),60))
        {
            cout<<"60\n";
            move_num=60;
        }
        else if(binary_search(moves.begin(),moves.end(),61))
        {
            cout<<"61\n";
            move_num=61;
        }
        else if(binary_search(moves.begin(),moves.end(),58))
        {
            cout<<"58\n";
            move_num=58;
        }

        else if(binary_search(moves.begin(),moves.end(),2))
        {
            cout<<"2\n";
            move_num=2;
        }
        else if(binary_search(moves.begin(),moves.end(),5))
        {
            cout<<"5\n";
            move_num=5;
        }
        else if(binary_search(moves.begin(),moves.end(),23))
        {
            cout<<"23\n";
            move_num=23;
        }
        else if(binary_search(moves.begin(),moves.end(),47))
        {
            cout<<"47\n";
            move_num=47;
        }


        else if(binary_search(moves.begin(),moves.end(),40))
        {
            cout<<"40\n";
            move_num=40;
        }

        else if(binary_search(moves.begin(),moves.end(),16))
        {
            cout<<"16\n";
            move_num=16;

        }
        else if(binary_search(moves.begin(),moves.end(),11))
        {
            cout<<"11\n";
            move_num=11;
        }
        else if(binary_search(moves.begin(),moves.end(),12))
        {
            cout<<"12\n";
            move_num=12;
        }
        else if(binary_search(moves.begin(),moves.end(),51))
        {
            cout<<"51\n";
            move_num=51;
        }
        else if(binary_search(moves.begin(),moves.end(),52))
        {
            cout<<"52\n";
            move_num=52;
        }
        else if(binary_search(moves.begin(),moves.end(),30))
        {
            cout<<"30\n";
            move_num=30;
        }
        else if(binary_search(moves.begin(),moves.end(),38))
        {
            cout<<"38\n";
            move_num=38;
        }
        else if(binary_search(moves.begin(),moves.end(),25))
        {
            cout<<"25\n";
            move_num=25;
        }
        else if(binary_search(moves.begin(),moves.end(),33))
        {
            cout<<"33\n";
            move_num=33;
        }





        else if(binary_search(moves.begin(),moves.end(),17))
        {
            cout<<"17\n";
            move_num=17;
        }
        else if(binary_search(moves.begin(),moves.end(),10))
        {
            cout<<"10\n";
            move_num=10;
        }
        else if(binary_search(moves.begin(),moves.end(),13))
        {
            cout<<"13\n";
            move_num=13;
        }
        else if(binary_search(moves.begin(),moves.end(),22))
        {
            cout<<"22\n";
            move_num=22;
        }
        else if(binary_search(moves.begin(),moves.end(),46))
        {
            cout<<"46\n";
            move_num=46;
        }
        else if(binary_search(moves.begin(),moves.end(),53))
        {
            cout<<"53\n";
            move_num=53;
        }
        else if(binary_search(moves.begin(),moves.end(),50))
        {
            cout<<"50\n";
            move_num=50;
        }
        else if(binary_search(moves.begin(),moves.end(),41))
        {
            cout<<"41\n";
            move_num=41;
        }

        else if(binary_search(moves.begin(),moves.end(),1))
        {
            cout<<"1\n";
            move_num=1;
        }
        else if(binary_search(moves.begin(),moves.end(),8))
        {
            cout<<"8\n";
            move_num=8;
        }
        else if(binary_search(moves.begin(),moves.end(),48))
        {
            cout<<"48\n";
            move_num=48;
        }
        else if(binary_search(moves.begin(),moves.end(),57))
        {
            cout<<"57\n";
            move_num=57;
        }
        else if(binary_search(moves.begin(),moves.end(),62))
        {
            cout<<"62\n";
            move_num=62;
        }
        else if(binary_search(moves.begin(),moves.end(),55))
        {
            cout<<"55\n";
            move_num=55;
        }
        else if(binary_search(moves.begin(),moves.end(),15))
        {
            cout<<"15\n";
            move_num=15;
        }
        else if(binary_search(moves.begin(),moves.end(),6))
        {
            cout<<"6\n";
            move_num=6;
        }



        else
        {
            cout<<moves[0]<<"\n";
            move_num=moves[0];
        }

        int a= (move_num-move_num%8)/8;
        int b= move_num%8;
        move(a,b);
    }

}
void get_move()
{
    current=enemy;
    int input;
    cin>>input;
    if(input!=-1)
    {
        int a= (input-input%8)/8;
        int b= input%8;
        move(a,b);
    }
}
bool game_on()
{
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            if(board[i][j]!=w&&board[i][j]!=b)return true;
    return false;
}
void print_legal(char current)
{
    bool valid_move_reached=false;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(valid_move(i,j))
            {
                if(!valid_move_reached)
                {
                    cout<<"("<<i+1<<","<<j+1<<")";
                    valid_move_reached=true;
                }
                else
                    cout<<" ("<<i+1<<","<<j+1<<")";
            }

        }
    if(!valid_move_reached)
    {
        cout<<"No legal move.\n";
    }
    else cout<<"\n";
}
bool valid_move(int y,int x)
{
    if(board[y][x]!='-')return false;

    if(valid_up(y,x))
    {
        //cout<<"\n up ";
        return true;
    }
    if(valid_down(y,x))
    {
        //cout<<"\ndown  ";
        return true;
    }
    if(valid_left(y,x))
    {
        //cout<<"\nleft  ";
        return true;
    }
    if(valid_right(y,x))
    {
        //cout<<"\n right ";
        return true;
    }
    if(valid_right_bottom(y,x))
    {
        //cout<<"\n right bottom ";
        return true;
    }
    if(valid_left_bottom(y,x))
    {
        //cout<<"\n left bottom ";
        return true;
    }
    if(valid_right_top(y,x))
    {
        //cout<<"\n right top  ";
        return true;
    }
    if(valid_left_top(y,x))
    {
        //cout<<"\n left top ";
        return true;
    }
    return false;
}
bool valid_up(int y,int x)
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x;
    int y_temp=y-1;

    while(y_temp>0&&board[y_temp][x]==oposite)
    {
        cap=true;
        y_temp--;
    }
    if(y_temp>=0&&board[y_temp][x]==current&&cap) return true;
    return false;


}
bool valid_down(int y,int x)
{
    char oposite='b';
    bool cap=false;
    if(current=='b')oposite='w';

    int x_temp=x;
    int y_temp=y+1;
    while(y_temp<7&&board[y_temp][x]==oposite)
    {
        cap=true;
        y_temp++;
    }
    if(y_temp<8&&board[y_temp][x]==current&&cap) return true;

    return false;
}
bool valid_left(int y,int x)
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x-1;
    int y_temp=y;

    while(x_temp>0&&board[y][x_temp]==oposite)
    {
        cap=true;
        x_temp--;
    }

    if(x_temp>=0&&board[y][x_temp]==current&&cap) return true;
    return false;

}
bool valid_right(int y,int x)
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x+1;
    int y_temp=y;

    while(x_temp<7&&board[y][x_temp]==oposite)
    {
        cap=true;
        x_temp++;
    }

    if(x_temp<8&&board[y][x_temp]==current&&cap) return true;
    return false;

}
bool valid_right_bottom(int y,int x)//bottom_right
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x+1;
    int y_temp=y+1;

    while(x_temp<7&&y_temp<7&&board[y_temp][x_temp]==oposite)
    {
        cap=true;
        x_temp++;
        y_temp++;
    }

    if(x_temp<8&&y_temp<8&&board[y_temp][x_temp]==current&&cap) return true;
    return false;

}
bool valid_left_top(int y,int x)
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x-1;
    int y_temp=y-1;

    while(x_temp>0&&y_temp>0&&board[y_temp][x_temp]==oposite)
    {
        cap=true;
        x_temp--;
        y_temp--;
    }

    if(x_temp>=0&&y_temp>=0&&board[y_temp][x_temp]==current&&cap) return true;
    return false;
}
bool valid_left_bottom(int y,int x)
{
    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x-1;
    int y_temp=y+1;

    while(x_temp>0&&y_temp<7&&board[y_temp][x_temp]==oposite)
    {
        cap=true;
        x_temp--;
        y_temp++;
    }

    if(x_temp>=0&&y_temp<8&&board[y_temp][x_temp]==current&&cap) return true;
    return false;
}
bool valid_right_top(int y,int x)
{

    bool cap=false;
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x+1;
    int y_temp=y-1;

    while(x_temp<7&&y_temp>0&&board[y_temp][x_temp]==oposite)
    {
        cap=true;
        x_temp++;
        y_temp--;
    }

    if(x_temp<8&&y_temp>=0&&board[y_temp][x_temp]==current&&cap) return true;
    return false;
}
void move(int y, int x)
{
    char oposite='b';
    if(current=='b')oposite='w';
    int x_temp=x;
    int y_temp=y-1;
    board[y][x]=current;
    bool moved=false;
    if(valid_up(y,x))
    {
        moved=true;
        x_temp=x;
        y_temp=y-1;

        while(y_temp>0&&board[y_temp][x]==oposite)
        {
            board[y_temp][x]=current;
            y_temp--;
        }
        board[y_temp][x]=current;
    }
    if(valid_down(y,x))
    {

        moved=true;
        x_temp=x;
        y_temp=y+1;
        while(y_temp<7&&board[y_temp][x]==oposite)
        {
            board[y_temp][x]=current;
            y_temp++;
        }
        board[y_temp][x]=current;
    }
    if(valid_left(y,x))
    {
        moved=true;
        x_temp=x-1;
        y_temp=y;
        while(x_temp>0&&board[y][x_temp]==oposite)
        {
            board[y][x_temp]=current;
            x_temp--;
        }
        board[y][x_temp]=current;
    }
    if(valid_right(y,x))
    {
        moved=true;
        x_temp=x+1;
        y_temp=y;

        while(x_temp<7&&board[y][x_temp]==oposite)
        {
            board[y][x_temp]=current;
            x_temp++;
        }
        board[y][x_temp]=current;
    }
    if(valid_right_bottom(y,x))
    {
        moved=true;
        x_temp=x+1;
        y_temp=y+1;

        while(x_temp<7&&y_temp<7&&board[y_temp][x_temp]==oposite)
        {
            board[y_temp][x_temp]=current;
            x_temp++;
            y_temp++;
        }
        board[y_temp][x_temp]=current;
    }
    if(valid_left_bottom(y,x))
    {
        moved=true;
        x_temp=x-1;
        y_temp=y+1;

        while(x_temp>0&&y_temp<7&&board[y_temp][x_temp]==oposite)
        {
            board[y_temp][x_temp]=current;
            x_temp--;
            y_temp++;
        }
        board[y_temp][x_temp]=current;
    }
    if(valid_right_top(y,x))
    {
        moved=true;
        x_temp=x+1;
        y_temp=y-1;

        while(x_temp<7&&y_temp>0&&board[y_temp][x_temp]==oposite)
        {
            board[y_temp][x_temp]=current;
            x_temp++;
            y_temp--;
        }
        board[y_temp][x_temp]=current;
    }
    if(valid_left_top(y,x))
    {
        moved=true;
        x_temp=x-1;
        y_temp=y-1;

        while(x_temp>0&&y_temp>0&&board[y_temp][x_temp]==oposite)
        {
            board[y_temp][x_temp]=current;
            x_temp--;
            y_temp--;
        }
        board[y_temp][x_temp]=current;
    }
}
void print_board()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
            cout<<board[i][j];
        cout<<"\n";
    }
}
