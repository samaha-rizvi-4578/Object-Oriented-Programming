/*(TicTacToe Class) Create a class TicTacToe that will enable you to write a complete program to play the game
of tic-tac-toe. The class contains as private data a 3-by-3 two-dimensional array of integers. The constructor
should initialize the empty board to all zeros. Allow two human players. Wherever the first player moves, place a
1 in the specified square. Place a 2 wherever the second player moves. Each move must be to an empty square.
After each move, determine whether the game has been won or is a draw.*/
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

class TicTacToe{
	private:
		static int board[3][3];
	public:
		TicTacToe(){
		//	memset(board, 0, sizeof(board));
		}
		void player1_move(int x, int y){
			if (board[x][y] != 0){
				cout << "Invalid move!\nEnter again";
				cout << "Enter x coordinate: ";
				cin >> x;
				cout << "Enter y coordinate: ";
				cin >> y;
				player1_move(x,y);
			}
			board[x][y] = 1;
		}
		void player2_move(int x, int y){
			if (board[x][y] != 0){
				cout << "Invalid move!\nEnter again";
				cout << "Enter x coordinate: ";
				cin >> x;
				cout << "Enter y coordinate: ";
				cin >> y;
				player2_move(x,y);
			}
			board[x][y] = 2;
		}
		bool CheckResult(int Player, bool *GameOver)
   {
      for(int i = 0; i < 3; i++) //Increment i to check rows
      {
         if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2]==Player)
		 {
		 *GameOver = true;
		  } 
      }
      for(int i = 0; i < 3; i++) //Increment i to check column
      {
         if(board[0][i] == board[1][i] && board[1][i] == board[2][i]&& board[2][i]==Player){
         *GameOver = true;	
		 } 
      }
      //Checking the Diagonals
      if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2]== Player) 
      {
         *GameOver = true;
      }
      if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0]==Player)
      {
         *GameOver = true;
      }
      if(*GameOver == true) 
      {
         cout << "Player " << Player << " wins!\n\n";
         cout << "-----------------------" << endl;
         cout << "|   CONGRATULATIONS " << Player << " |\n";
         cout << "-----------------------" << endl << endl;
      }
      else{
      	CheckDraw(GameOver);
	  }
         return GameOver;
   } //End Check Winner
//Check the board to see if the match has come to a draw
   bool CheckDraw(bool *GameOver)
   {
      int i = 0;
      int j = 0;
      int counter = 0;

      for( i = 0; i < 3; i++ )
      {
         for( j = 0; j < 3; j++ )
         {
            //Check to see if the board if full
            if(board[i][j] == 0) 
            { 
               counter++; 
            }
         }
      }
      if( counter < 1 ) 
      {
         cout << "No one won :(GAME DRAW)!\n\n"; 
         *GameOver = true;
      }
      return GameOver;
   }
		int get_board(int x, int y){
			return board[x][y];
		}
};int TicTacToe::board[3][3]={0};

int main(){
	 bool GameOver= false;
	TicTacToe game;
	cout << "TIC TAC TOE:\n\n";
	int i;
	int x,y;
		cout << game.get_board(0,0) << " | " << game.get_board(0,1) << " | " << game.get_board(0,2) << endl;
		cout << game.get_board(1,0) << " | " << game.get_board(1,1) << " | " << game.get_board(1,2) << endl;
		cout << game.get_board(2,0) << " | " << game.get_board(2,1) << " | " << game.get_board(2,2) << endl;
	while(GameOver==false){

		cout << "\n\nPlayer 1 move\n";
		cout << "Enter x coordinate: ";
		cin >> x;
		cout << "Enter y coordinate: ";
		cin >> y;
		game.player1_move(x,y);
			cout << game.get_board(0,0) << " | " << game.get_board(0,1) << " | " << game.get_board(0,2) << endl;
		cout << game.get_board(1,0) << " | " << game.get_board(1,1) << " | " << game.get_board(1,2) << endl;
		cout << game.get_board(2,0) << " | " << game.get_board(2,1) << " | " << game.get_board(2,2) << endl;
		game.CheckResult(1, &GameOver);
		if(GameOver==true){
			return 0;
		}
		cout << "\n\nPlayer 2 move\n";
		cout << "Enter x coordinate: ";
		cin >> x;
		cout << "Enter y coordinate: ";
		cin >> y;
		game.player2_move(x,y);
			cout << game.get_board(0,0) << " | " << game.get_board(0,1) << " | " << game.get_board(0,2) << endl;
		cout << game.get_board(1,0) << " | " << game.get_board(1,1) << " | " << game.get_board(1,2) << endl;
		cout << game.get_board(2,0) << " | " << game.get_board(2,1) << " | " << game.get_board(2,2) << endl;
		game.CheckResult(2, &GameOver);
		if(GameOver==true){
			return 0;
		}
	}
}

