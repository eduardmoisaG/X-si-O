#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;
char tabela[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char Player = 'X';
int game = 2;
void message()
{
	cout << " *****" << endl;
	cout << "* TIC *" << endl;
	cout << "* TAC *" << endl;
	cout << "* TOE *" << endl;
	cout << " *****" << endl;
	cout << "Choose against who you want to play by entering the number: " << endl;
	cout << "   ======" << endl;
	cout << "1.|Player|" << endl;
	cout << "   ======" << endl;
	cout << "   ==============" << endl;
	cout << "2.|Computer(Easy)|" << endl;
	cout << "   ==============" << endl;
	cout << "   ==============" << endl;
	cout << "3.|Computer(Hard)|" << endl;
	cout << "   ==============" << endl;
}
void tabel()
{
	int i, j;
	cout << " == ==" << endl;
	for (j = 0; j < 3; j++)
		cout << "|" << tabela[0][j];
	cout <<"|"<< endl;
	for (i = 1; i < 3; i++)
	{
		cout << " -+-+-" << endl;
		for (j = 0; j < 3; j++)
		{
			cout <<"|"<< tabela[i][j];
		}
		cout <<"|"<< endl;
	}
	cout << " == ==" << endl;
}
void Button()
{
	int a,valid;
	cout << " ==============================" << endl;
	cout << "|Enter the number of the field |" << endl;
	cout << " ==============================" << endl;
	do{
		cin >> a;
		valid = 1;
		if (a == 1 && tabela[0][0]=='1')
			tabela[0][0] = Player;
		else if (a == 2 && tabela[0][1]=='2')
			tabela[0][1] = Player;
		else if (a == 3 && tabela[0][2]=='3')
			tabela[0][2] = Player;
		else if (a == 4 && tabela[1][0]=='4')
			tabela[1][0] = Player;
		else if (a == 5 && tabela[1][1]=='5')
			tabela[1][1] = Player;
		else if (a == 6 && tabela[1][2]=='6')
			tabela[1][2] = Player;
		else if (a == 7 && tabela[2][0]=='7')
			tabela[2][0] = Player;
		else if (a == 8 && tabela[2][1]=='8')
			tabela[2][1] = Player;
		else if (a == 9 && tabela[2][2]=='9')
			tabela[2][2] = Player;
		else
		{
			cout << "Invalid character, please try again: ";
			valid = 0;
		}
	} while (!valid);
}
void ChangePlayer()
{
	if (Player == 'X')
		Player = 'O';
	else
		Player = 'X';
}
int testwin()
{
	if (tabela[0][0] == 'X'&&tabela[0][1] == 'X'&&tabela[0][2] == 'X')
		return 'X';
	if (tabela[1][0] == 'X'&&tabela[1][1] == 'X'&&tabela[1][2] == 'X')
		return 'X';
	if (tabela[2][0] == 'X'&&tabela[2][1] == 'X'&&tabela[2][2] == 'X')
		return 'X';
	if (tabela[0][0] == 'X'&&tabela[1][0] == 'X'&&tabela[2][0] == 'X')
		return 'X';
	if (tabela[0][1] == 'X'&&tabela[1][1] == 'X'&&tabela[2][1] == 'X')
		return 'X';
	if (tabela[0][2] == 'X'&&tabela[1][2] == 'X'&&tabela[2][2] == 'X')
		return 'X';
	if (tabela[0][0] == 'X'&&tabela[1][1] == 'X'&&tabela[2][2] == 'X')
		return 'X';
	if (tabela[0][2] == 'X'&&tabela[1][1] == 'X'&&tabela[2][0] == 'X')
		return 'X';

	if (tabela[0][0] == 'O'&&tabela[0][1] == 'O'&&tabela[0][2] == 'O')
		return 'O';
	if (tabela[1][0] == 'O'&&tabela[1][1] == 'O'&&tabela[1][2] == 'O')
		return 'O';
	if (tabela[2][0] == 'O'&&tabela[2][1] == 'O'&&tabela[2][2] == 'O')
		return 'O';
	if (tabela[0][0] == 'O'&&tabela[1][0] == 'O'&&tabela[2][0] == 'O')
		return 'O';
	if (tabela[0][1] == 'O'&&tabela[1][1] == 'O'&&tabela[2][1] == 'O')
		return 'O';
	if (tabela[0][2] == 'O'&&tabela[1][2] == 'O'&&tabela[2][2] == 'O')
		return 'O';
	if (tabela[0][0] == 'O'&&tabela[1][1] == 'O'&&tabela[2][2] == 'O')
		return 'O';
	if (tabela[0][2] == 'O'&&tabela[1][1] == 'O'&&tabela[2][0] == 'O')
		return 'O';
	else
		return 0;
}
void rematch()
{
	tabela[0][0] = '1';
	tabela[0][1] = '2';
	tabela[0][2] = '3';
	tabela[1][0] = '4';
	tabela[1][1] = '5';
	tabela[1][2] = '6';
	tabela[2][0] = '7';
	tabela[2][1] = '8';
	tabela[2][2] = '9';
	char Player = 'X';
}
int TabelaFull()
{
	if (tabela[0][0] != '1'&&tabela[0][1] != '2' &&tabela[0][2] != '3'&&tabela[1][0] != '4'&&tabela[1][1] != '5'&&tabela[1][2] != '6'&&tabela[2][0] != '7'&&tabela[2][1] != '8'&&tabela[2][2] != '9')
		return 1;
	return 0;
}
void score(int x,int y,int z,char *player1, char *player2)
{
	cout << "|"<<player1<<"'s score: " << x << "|" << endl;
	cout << "|"<<player2<<"'s score: " << y << "|" << endl;
	cout << "|Games:       " << z << "|" << endl;
}
void Player_Vs_Player()
{
	int x_score,o_score,nr_games;
	char player1[30], player2[30],choose,play='1';
	x_score = 0;
	o_score = 0;
	nr_games = 0;
		cout << " -------------------------------------" << endl;
		cout << "| Enter the name of the first player: | "<<endl;
		cout << " -------------------------------------" << endl;
		cin >> player1;
		cout << endl;
		cout << " -------------------------------------" << endl;
		cout << "| Enter the name of the second player: | "<<endl;
		cout << " -------------------------------------" << endl;
		cin >> player2;
		if (strcmp(player1, player2) == 0)
			strcat_s(player2, "(2)");
		cout << endl;
		system("cls");
		do{
			cout << "Choose who starts: " << endl;
			cout << "|Enter 1 for " << player1 << " (X)|" << endl;
			cout << "|Enter 2 for " << player2 << " (O)|" << endl;
			cin >> choose;
			while (choose != '1' && choose != '2')
			{
				cout << "Invalid character, please try again: ";
				cin >> choose;
				system("cls");
				cout << "Choose who starts: " << endl;
				cout << "|Enter 1 for " << player1 << " (X)|" << endl;
				cout << "|Enter 2 for " << player2 << " (O)|" << endl;
			}
			if (choose == '1')
				Player = 'X';
			else if (choose == '2')
				Player = 'O';
			while (testwin() != 'X' && testwin() != 'O')
			{
				system("cls");
				tabel();
				Button();
				if (TabelaFull())
					break;
				ChangePlayer();
			}
			if (testwin() == 'X')
			{
				nr_games++;
				x_score++;
				cout << "|" << player1 << " Won!|" << endl;
				tabel();
			}
			else if (testwin() == 'O')
			{
				o_score++;
				nr_games++;
				cout << "|" << player2 << " Won!|" << endl;
				tabel();
			}
			else if (TabelaFull())
			{
				nr_games++;
				cout << " ------------" << endl;
				cout << "|It's a draw!|" << endl;
				cout << " ------------" << endl;
				tabel();
			}
			score(x_score, o_score, nr_games, player1, player2);
			cout << " -------------------------------" << endl;
			cout << "|Enter 2 to choose another mode.|" << endl;
			cout << "|Enter 1 to play again.         |" << endl;
			cout << "|Enter 0 to exit.               |" << endl;
			cout << " -------------------------------" << endl;
		read:
			cin >> play;
			if (play == '1')
			{
				rematch();
				system("cls");
			}
			else if (play == '0')
				game = 0;
			else if (play == '2')
			{
				game = 2;
				rematch();
				system("cls");
			}
			else
			{
				system("cls");
				cout << " -------------------------------" << endl;
				cout << "|Enter 2 to choose another mode.|" << endl;
				cout << "|Enter 1 to play again.         |" << endl;
				cout << "|Enter 0 to exit.               |" << endl;
				cout << " -------------------------------" << endl;
				cout << "Invalid character, please try again: ";
				goto read;
			}
		} while (play == '1');
		system("cls");
}
void CompMove()
{
	int r, valid;
	do{
		valid = 1;
		srand(static_cast<unsigned int>(time(0)));
		r = rand() % 9 + 1;
		if (r == 1 && tabela[0][0] == '1')
			tabela[0][0] = Player;
		else if (r == 2 && tabela[0][1] == '2')
			tabela[0][1] = Player;
		else if (r == 3 && tabela[0][2] == '3')
			tabela[0][2] = Player;
		else if (r == 4 && tabela[1][0] == '4')
			tabela[1][0] = Player;
		else if (r == 5 && tabela[1][1] == '5')
			tabela[1][1] = Player;
		else if (r == 6 && tabela[1][2] == '6')
			tabela[1][2] = Player;
		else if (r == 7 && tabela[2][0] == '7')
			tabela[2][0] = Player;
		else if (r == 8 && tabela[2][1] == '8')
			tabela[2][1] = Player;
		else if (r == 9 && tabela[2][2] == '9')
			tabela[2][2] = Player;
		else
			valid = 0;
	} while (!valid);
}
void score_2(int x, int y, int z,char *player)
{
	cout << "|"<<player<<"'s score:" << x << "|" << endl;
	cout << "|Computer's score:  " << y << "|" << endl;
	cout << "|Games:           " << z << "|" << endl;
}
void Player_Vs_Computer_Easy()
{
	int x_score,o_score,nr_games;
	char player[30], turn,play = '1';
	x_score = 0;
	o_score = 0;
	nr_games = 0;
	cout << " ------------------" << endl;
	cout << "| Enter your name: | " << endl;
	cout << " ------------------" << endl;
	cin >> player;
	system("cls");
	do{
			cout << " =================================" << endl;
			cout << "|Choose first turn by entering [1]|" << endl;
			cout << " =================================" << endl;
			cout << " ==================================" << endl;
			cout << "|Choose second turn by entering [2]|" << endl;
			cout << " ==================================" << endl;
			cin >> turn;
			while (turn != '1' && turn != '2')
			{
				cout << "Invalid character, please try again: ";
				cin >> turn;
				system("cls");
				cout << " =================================" << endl;
				cout << "|Choose first turn by entering [1]|" << endl;
				cout << " =================================" << endl;
				cout << " ==================================" << endl;
				cout << "|Choose second turn by entering [2]|" << endl;
				cout << " ==================================" << endl;
			}
		if (turn == '1')
			Player = 'X';
		else
			Player = 'O';
		if (turn == '1')
		{
			while (testwin() != 'X' && testwin() != 'O')
			{
				system("cls");
				tabel();
				cout << " ******* It's your turn ******* " << endl;
				Button();
				if (TabelaFull())
					break;
				ChangePlayer();
				CompMove();
				if (TabelaFull())
					break;
				ChangePlayer();
			}
		}
		else if (turn == '2')
		{
			while (testwin() != 'X' && testwin() != 'O')
			{
				CompMove();
				if (TabelaFull())
					break;
				system("cls");
				tabel();
				if (testwin() == 'X' || testwin() == 'O')
					break;
				ChangePlayer();
				cout << " ******* It's your turn ******* " << endl;
				Button();
				if (TabelaFull())
					break;
				ChangePlayer();
			}
		}
		if (testwin() == 'X')
		{
			x_score++;
			nr_games++;
			cout << " -------------------------" << endl;
			cout << "|Congratulations! You Won!|" << endl;
			cout << " -------------------------" << endl;
			tabel();
		}
		else if (testwin() == 'O')
		{
			o_score++;
			nr_games++;
			cout << " -----------------" << endl;
			cout << "|The Computer Won!|" << endl;
			cout << " -----------------" << endl;
			tabel();
		}
		else if (TabelaFull())
		{
			nr_games++;
			cout << " ------------" << endl;
			cout << "|It's a draw!|" << endl;
			cout << " ------------" << endl;
			tabel();
		}
		score_2(x_score, o_score, nr_games,player);
		cout << " -------------------------------" << endl;
		cout << "|Enter 2 to choose another mode.|" << endl;
		cout << "|Enter 1 to play again.         |" << endl;
		cout << "|Enter 0 to exit.               |" << endl;
		cout << " -------------------------------" << endl;
	read:
		cin >> play;
		if (play == '1')
		{
			rematch();
			system("cls");
		}
		else if (play == '0')
			game = 0;
		else if (play == '2')
		{
			game = 2;
			rematch();
			system("cls");
		}
		else
		{
			system("cls");
			cout << " -------------------------------" << endl;
			cout << "|Enter 2 to choose another mode.|" << endl;
			cout << "|Enter 1 to play again.         |" << endl;
			cout << "|Enter 0 to exit.               |" << endl;
			cout << " -------------------------------" << endl;
			cout << "Invalid character, please try again: ";
			goto read;
		}
	} while (play == '1');
	system("cls");
}
void CompMoveHard()
{
	int r, valid;
	if (tabela[0][0] == 'O'&&tabela[0][1] == 'O'&&tabela[0][2] == '3')
		tabela[0][2] = Player;
	else if (tabela[0][0] == 'O'&&tabela[0][2] == 'O'&&tabela[0][1] == '2')
		tabela[0][1] = Player;
	else if (tabela[0][1] == 'O'&&tabela[0][2] == 'O'&&tabela[0][0] == '1')
		tabela[0][0] = Player;
	else if (tabela[0][0] == 'O'&&tabela[1][0] == 'O'&&tabela[2][0] == '7')
		tabela[2][0] = Player;
	else if (tabela[0][0] == 'O'&&tabela[2][0] == 'O'&&tabela[1][0] == '4')
		tabela[1][0] = Player;
	else if (tabela[1][0] == 'O'&&tabela[2][0] == 'O'&&tabela[0][0] == '1')
		tabela[0][0] = Player;
	else if (tabela[1][0] == 'O'&&tabela[1][1] == 'O'&&tabela[1][2] == '6')
		tabela[1][2] = Player;
	else if (tabela[1][1] == 'O'&&tabela[1][2] == 'O'&&tabela[1][0] == '4')
		tabela[1][0] = Player;
	else if (tabela[1][0] == 'O'&&tabela[1][2] == 'O'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[2][0] == 'O'&&tabela[2][1] == 'O'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[2][1] == 'O'&&tabela[2][2] == 'O'&&tabela[2][0] == '7')
		tabela[2][0] = Player;
	else if (tabela[2][0] == 'O'&&tabela[2][2] == 'O'&&tabela[2][1] == '8')
		tabela[2][1] = Player;
	else if (tabela[0][1] == 'O'&&tabela[1][1] == 'O'&&tabela[2][1] == '8')
		tabela[2][1] = Player;
	else if (tabela[0][1] == 'O'&&tabela[2][1] == 'O'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[1][1] == 'O'&&tabela[2][1] == 'O'&&tabela[0][1] == '2')
		tabela[0][1] = Player;
	else if (tabela[0][2] == 'O'&&tabela[1][2] == 'O'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[0][2] == 'O'&&tabela[2][2] == 'O'&&tabela[1][2] == '6')
		tabela[1][2] = Player;
	else if (tabela[1][2] == 'O'&&tabela[2][2] == 'O'&&tabela[0][2] == '3')
		tabela[0][2] = Player;
	else if (tabela[0][0] == 'O'&&tabela[1][1] == 'O'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[0][0] == 'O'&&tabela[2][2] == 'O'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[1][1] == 'O'&&tabela[2][2] == 'O'&&tabela[0][0] == '1')
		tabela[0][0] = Player;
	else if (tabela[2][0] == 'O'&&tabela[1][1] == 'O'&&tabela[0][2] == '3')
		tabela[0][2] = Player;
	else if (tabela[2][0] == 'O'&&tabela[0][2] == 'O'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[0][2] == 'O'&&tabela[1][1] == 'O'&&tabela[2][0] == '7')
		tabela[2][0] = Player;
	else if (tabela[0][0] == 'X'&&tabela[0][1] == 'X'&&tabela[0][2]=='3')
		tabela[0][2] = Player;
	else if (tabela[0][0] == 'X'&&tabela[0][2] == 'X'&&tabela[0][1]=='2')
		tabela[0][1] = Player;
	else if (tabela[0][1] == 'X'&&tabela[0][2] == 'X'&&tabela[0][0]=='1')
		tabela[0][0] = Player;
	else if (tabela[0][0] == 'X'&&tabela[1][0] == 'X'&&tabela[2][0]=='7')
		tabela[2][0] = Player;
	else if (tabela[0][0] == 'X'&&tabela[2][0] == 'X'&&tabela[1][0]=='4')
		tabela[1][0] = Player;
	else if (tabela[1][0] == 'X'&&tabela[2][0] == 'X'&&tabela[0][0]=='1')
		tabela[0][0] = Player;
	else if (tabela[1][0] == 'X'&&tabela[1][1] == 'X'&&tabela[1][2]=='6')
		tabela[1][2] = Player;
	else if (tabela[1][1] == 'X'&&tabela[1][2] == 'X'&&tabela[1][0] == '4')
		tabela[1][0] = Player;
	else if (tabela[1][0] == 'X'&&tabela[1][2] == 'X'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[2][0] == 'X'&&tabela[2][1] == 'X'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[2][1] == 'X'&&tabela[2][2] == 'X'&&tabela[2][0] == '7')
		tabela[2][0] = Player;
	else if (tabela[2][0] == 'X'&&tabela[2][2] == 'X'&&tabela[2][1] == '8')
		tabela[2][1] = Player;
	else if (tabela[0][1] == 'X'&&tabela[1][1] == 'X'&&tabela[2][1] == '8')
		tabela[2][1] = Player;
	else if (tabela[0][1] == 'X'&&tabela[2][1] == 'X'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[1][1] == 'X'&&tabela[2][1] == 'X'&&tabela[0][1] == '2')
		tabela[0][1] = Player;
	else if (tabela[0][2] == 'X'&&tabela[1][2] == 'X'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[0][2] == 'X'&&tabela[2][2] == 'X'&&tabela[1][2] == '6')
		tabela[1][2] = Player;
	else if (tabela[1][2] == 'X'&&tabela[2][2] == 'X'&&tabela[0][2] == '3')
		tabela[0][2] = Player;
	else if (tabela[0][0] == 'X'&&tabela[1][1] == 'X'&&tabela[2][2] == '9')
		tabela[2][2] = Player;
	else if (tabela[0][0] == 'X'&&tabela[2][2] == 'X'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[1][1] == 'X'&&tabela[2][2] == 'X'&&tabela[0][0] == '1')
		tabela[0][0] = Player;
	else if (tabela[2][0] == 'X'&&tabela[1][1] == 'X'&&tabela[0][2] == '3')
		tabela[0][2] = Player;
	else if (tabela[2][0] == 'X'&&tabela[0][2] == 'X'&&tabela[1][1] == '5')
		tabela[1][1] = Player;
	else if (tabela[0][2] == 'X'&&tabela[1][1] == 'X'&&tabela[2][0] == '7')
		tabela[2][0] = Player;
	else
	{
		do{
			valid = 1;
			srand(static_cast<unsigned int>(time(0)));
			r = rand() % 9 + 1;
			if (r == 1 && tabela[0][0] == '1')
				tabela[0][0] = Player;
			else if (r == 2 && tabela[0][1] == '2')
				tabela[0][1] = Player;
			else if (r == 3 && tabela[0][2] == '3')
				tabela[0][2] = Player;
			else if (r == 4 && tabela[1][0] == '4')
				tabela[1][0] = Player;
			else if (r == 5 && tabela[1][1] == '5')
				tabela[1][1] = Player;
			else if (r == 6 && tabela[1][2] == '6')
				tabela[1][2] = Player;
			else if (r == 7 && tabela[2][0] == '7')
				tabela[2][0] = Player;
			else if (r == 8 && tabela[2][1] == '8')
				tabela[2][1] = Player;
			else if (r == 9 && tabela[2][2] == '9')
				tabela[2][2] = Player;
			else
				valid = 0;
		} while (!valid);
	}
}
void score_3(int x, int y, int z,char *player)
{
	cout << "|"<<player<<"'s score:  " << x << "|" << endl;
	cout << "|Computer's score: " << y << "|" << endl;
	cout << "|Games:            " << z << "|" << endl;
}
void Player_Vs_Computer_Hard()
{
	int x_score, o_score, nr_games;
	char player[30], turn, play = '1';
	x_score = 0;
	o_score = 0;
	nr_games = 0;
	cout << " ------------------" << endl;
	cout << "| Enter your name: | " << endl;
	cout << " ------------------" << endl;
	cin >> player;
	system("cls");
	do{
		cout << " =================================" << endl;
		cout << "|Choose first turn by entering [1]|" << endl;
		cout << " =================================" << endl;
		cout << " ==================================" << endl;
		cout << "|Choose second turn by entering [2]|" << endl;
		cout << " ==================================" << endl;
		cin >> turn;
		while (turn != '1' && turn != '2')
		{
			cout << "Invalid character, please try again: ";
			cin >> turn;
			system("cls");
			cout << " =================================" << endl;
			cout << "|Choose first turn by entering [1]|" << endl;
			cout << " =================================" << endl;
			cout << " ==================================" << endl;
			cout << "|Choose second turn by entering [2]|" << endl;
			cout << " ==================================" << endl;
		}
		if (turn == '1')
			Player = 'X';
		else
			Player = 'O';
		if (turn == '1')
		{
			while (testwin() != 'X' && testwin() != 'O')
			{
				system("cls");
				tabel();
				cout << " ******* It's your turn ******* " << endl;
				Button();
				if (TabelaFull())
					break;
				ChangePlayer();
				CompMoveHard();
				if (TabelaFull())
					break;
				ChangePlayer();
			}
		}
		else if (turn == '2')
		{
			while (testwin() != 'X' && testwin() != 'O')
			{
				CompMoveHard();
				if (TabelaFull())
					break;
				system("cls");
				tabel();
				if (testwin() == 'X' || testwin() == 'O')
					break;
				ChangePlayer();
				cout << " ******* It's your turn ******* " << endl;
				Button();
				if (TabelaFull())
					break;
				ChangePlayer();
			}
		}
		if (testwin() == 'X')
		{
			x_score++;
			nr_games++;
			cout << " -------------------------" << endl;
			cout << "|Congratulations! You Won!|" << endl;
			cout << " -------------------------" << endl;
			tabel();
		}
		else if (testwin() == 'O')
		{
			o_score++;
			nr_games++;
			cout << " -----------------" << endl;
			cout << "|The Computer Won!|" << endl;
			cout << " -----------------" << endl;
			tabel();
		}
		else if (TabelaFull())
		{
			nr_games++;
			cout << " ------------" << endl;
			cout << "|It's a draw!|" << endl;
			cout << " ------------" << endl;
			tabel();
		}
		score_3(x_score,o_score,nr_games,player);
		cout << " -------------------------------" << endl;
		cout << "|Enter 2 to choose another mode.|" << endl;
		cout << "|Enter 1 to play again.         |" << endl;
		cout << "|Enter 0 to exit.               |" << endl;
		cout << " -------------------------------" << endl;
	read:
		cin >> play;
		if (play == '1')
		{
			rematch();
			system("cls");
		}
		else if (play == '0')
			game = 0;
		else if (play == '2')
		{
			game = 2;
			rematch();
			system("cls");
		}
		else
		{
			system("cls");
			cout << " -------------------------------" << endl;
			cout << "|Enter 2 to choose another mode.|" << endl;
			cout << "|Enter 1 to play again.         |" << endl;
			cout << "|Enter 0 to exit.               |" << endl;
			cout << " -------------------------------" << endl;
			cout << "Invalid character, please try again: ";
			goto read;
		}
	} while (play == '1');
	system("cls");
}
int main()
{
	char mode;
	while (game == 2)
	{
		message();
		cin >> mode;
		while (mode != '1' && mode != '2' && mode != '3')
		{
			cout << "Invalid character , please try again: ";
			cin >> mode;
			system("cls");
			message();
		}
		if (mode == '1')
		{
			system("cls");
			Player_Vs_Player();
		}
		else if (mode == '2')
		{
			system("cls");
			Player_Vs_Computer_Easy();
		}
		else if (mode == '3')
		{
			system("cls");
			Player_Vs_Computer_Hard();
		}
		else
			tabel();
	}
	system("cls");
	cout << " *****" << endl;
	cout << "* TIC *" << endl;
	cout << "* TAC *" << endl;
	cout << "* TOE *" << endl;
	cout << " *****" << endl;
	cout << " -----------------------" << endl;
	cout << "|Thank you for playing !|" << endl;
	cout << " -----------------------" << endl;
	system("pause");
}