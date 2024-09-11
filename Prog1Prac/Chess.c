#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
  
// function prototypes
void setup_board();
void display_board();
void set_coords();
  
// global variables
char piece_moved;
char board[10][10];
char choice;
char move[5];
short x, y;
short checkmate;
  
int main()
{ 
  setup_board();
   printf("\n");
  display_board();
  
  while(!checkmate)
  {
    printf("\nEnter Move From: ");
    scanf("%s", move); // ex: b2
  
    set_coords();
  
    piece_moved = board[x][y];
  
    board[x][y] = ' ';
  
    printf("Enter Move To: ");
    scanf("%s", move); // ex: b4
  
    set_coords();
  
    board[x][y] = piece_moved;
    printf("\n");
    display_board();
  }
  
  //system("PAUSE");
  getchar();
  return 0;
}
  
void setup_board()
{
  // clear boxes
  for(x=0;x<10;x++)
  {
    for(y=0;y<10;y++)
    {
      board[x][y] = ' ';
    }
  }
  // color board
  for(x=0;x<8;x++)
  {
    for(y=0;y<9;y++)
    {
      board[x][y] = '-';
    }
  }
  // upper pieces
  board[0][1] = 'r';
  board[0][2] = 'n';
  board[0][3] = 'b';
  board[0][4] = 'q';
  board[0][5] = 'k';
  board[0][6] = 'b';
  board[0][7] = 'n';
  board[0][8] = 'r';
  
  board[1][1] = 'p';
  board[1][2] = 'p';
  board[1][3] = 'p';
  board[1][4] = 'p';
  board[1][5] = 'p';
  board[1][6] = 'p';
  board[1][7] = 'p';
  board[1][8] = 'p';
  
  // lower piece 
  board[6][1] = 'P';
  board[6][2] = 'P';
  board[6][3] = 'P';
  board[6][4] = 'P';
  board[6][5] = 'P';
  board[6][6] = 'P';
  board[6][7] = 'P';
  board[6][8] = 'P';
  
  board[7][1] = 'R';
  board[7][2] = 'N';
  board[7][3] = 'B';
  board[7][4] = 'Q';
  board[7][5] = 'K';
  board[7][6] = 'B';
  board[7][7] = 'N';
  board[7][8] = 'R';
  
  // notation help
  board[7][0] = '1';
  board[6][0] = '2';
  board[5][0] = '3';
  board[4][0] = '4';
  board[3][0] = '5';
  board[2][0] = '6';
  board[1][0] = '7';
  board[0][0] = '8';
    
  board[9][1] = 'A';
  board[9][2] = 'B';
  board[9][3] = 'C';
  board[9][4] = 'D';
  board[9][5] = 'E';
  board[9][6] = 'F';
  board[9][7] = 'G';
  board[9][8] = 'H';
   
}
  
void display_board()
{
  for(x=0;x<10;x++)
  {
    for(y=0;y<10;y++)
    {
      printf("%c", board[x][y]);
    }
    printf("\n");
  }
   printf("\n");
}
  
void set_coords()
{
  // get x value from character
  if(strchr(move,'a'))
    x = 7;
  else if(strchr(move,'b'))
    x = 6;
  else if(strchr(move,'c'))
    x = 5;
  else if(strchr(move,'d'))
    x = 4;
  else if(strchr(move,'e'))
    x = 3;
  else if(strchr(move,'f'))
    x = 2;
  else if(strchr(move,'g'))
    x = 1;
  else if(strchr(move,'h'))
    x = 0;
  // get y value from character
   if(strchr(move,'8'))
    y = 0;
  else if(strchr(move,'7'))
    y = 1;
  else if(strchr(move,'6'))
    y = 2;
  else if(strchr(move,'5'))
    y = 3;
  else if(strchr(move,'4'))
   y = 4;
  else if(strchr(move,'3'))
   y = 5;
  else if(strchr(move,'2'))
   y = 6;
  else  if(strchr(move,'1'))
   y = 7;
   }
