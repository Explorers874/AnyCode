#include <iostream>
#include <conio.h>
using namespace std;
char board[16][16],o;
void init(){
 for(int i=0;i<=15;i++)
  for(int j=0;j<=15;j++)
   board[i][j]='-';
 for(int i=1;i<=15;i++) board[0][i]=i+64;
 for(int j=1;j<=15;j++) board[j][0]=j+64;
 board[0][0]='*';
}
void display(){
 cout<<" ================================"<<endl;
 for(int i=0;i<=15;i++){
  cout<<"|";
  for(int j=0;j<=15;j++)
   cout<<board[i][j]<<" ";
  cout<<"|"<<endl;
 }
 cout<<" ================================"<<endl; 
}
void place(bool color){
 string colour;
 char x,y;
 x=y=' ';
 system("cls");
 display();
 if(!color) colour="黑";
 if(color) colour="白";
 cout<<colour<<"方放置棋子，请输入棋子的行和列（大写字母）：";
 cin>>x>>y;
 if(x-64>16||y-64>16||x-64<1||y-64<1){
  cout<<"该位置超出棋盘范围，请重新放置！"<<x<<y<<endl;
  system("pause");
  place(color);
 }
 if(board[x-64][y-64]=='b'||board[x-64][y-64]=='w'){
  cout<<"该位置已有棋子"<<board[x-64][y-64]<<"，请重新放置！"<<endl;
  system("pause");
  place(color);
 }
 if(!color) board[x-64][y-64]='b';
 if(color) board[x-64][y-64]='w'; 
}
int compute(){
 int num;
 for(int i=1;i<=15;i++)
  for(int j=1;j<=15;j++)
   if(board[i][j]=='b'||board[i][j]=='w') num++;
 if(num==225) return 2;
 for(int i=1;i<=15;i++)
  for(int j=1;j<=15;j++){
   if(board[i][j]=='b'&&board[i][j]==board[i+1][j]&&board[i][j]==board[i+2][j]&&board[i][j]==board[i+3][j]&&board[i][j]==board[i+4][j]) return 0; 
   if(board[i][j]=='w'&&board[i][j]==board[i+1][j]&&board[i][j]==board[i+2][j]&&board[i][j]==board[i+3][j]&&board[i][j]==board[i+4][j]) return 1; 
   if(board[i][j]=='b'&&board[i][j]==board[i][j+1]&&board[i][j]==board[i][j+2]&&board[i][j]==board[i][j+3]&&board[i][j]==board[i][j+4]) return 0; 
   if(board[i][j]=='w'&&board[i][j]==board[i][j+1]&&board[i][j]==board[i][j+2]&&board[i][j]==board[i][j+3]&&board[i][j]==board[i][j+4]) return 1;
   if(board[i][j]=='b'&&board[i][j]==board[i+1][j+1]&&board[i][j]==board[i+2][j+2]&&board[i][j]==board[i+3][j+3]&&board[i][j]==board[i+4][j+4]) return 0;
   if(board[i][j]=='w'&&board[i][j]==board[i+1][j+1]&&board[i][j]==board[i+2][j+2]&&board[i][j]==board[i+3][j+3]&&board[i][j]==board[i+4][j+4]) return 1;
   if(board[i][j]=='b'&&board[i][j]==board[i-1][j+1]&&board[i][j]==board[i-2][j+2]&&board[i][j]==board[i-3][j+3]&&board[i][j]==board[i-4][j+4]) return 0;
   if(board[i][j]=='w'&&board[i][j]==board[i-1][j+1]&&board[i][j]==board[i-2][j+2]&&board[i][j]==board[i-3][j+3]&&board[i][j]==board[i-4][j+4]) return 1;
  }
}
int main(){
game_start:
 init(); 
 system("cls");
 system("title 双人五子棋");
 cout<<"双人五子棋小游戏"<<endl;
 cout<<"小提示：棋盘中b代表黑方（black），w代表白方（white）"<<endl; 
 cout<<"请按任意键开始游戏......";
 getch(); 
 while(true){
  place(0);
  if(compute()==0){
   system("cls");
   display();
   cout<<"黑方胜！"<<endl;
   break;
  }
  if(compute()==2){
   system("cls");
   display();
   cout<<"平局！"<<endl;
   break;
  }
  place(1);
  if(compute()==1){
   system("cls");
   display();
   cout<<"白方胜！"<<endl;
   break;
  } 
  if(compute()==2){
   system("cls");
   display();
   cout<<"平局！"<<endl;
   break;
  }
 }
 cout<<"再来一局？Y/N  ";
 o=getch();
 if(o=='Y'||o=='y') goto game_start;
 return 0;
}
