/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, MAIN
Author: Chloe Tu
Date: 10/09/2019
*/

#include <iostream>
#include "PERSON.h"
#include "GAME.h"
#include "BOARD.h"
using namespace std;

int main()
{
    string name;
    int no_of_games = 0, current_game = 0;
    string X = "X";
    string O = "O";
    
    cout << "Number of games: ";
    cin >> no_of_games;
    cin.get();
    cout << "Player 1 Name: ";
    getline (cin, name);
    Person* player_1 = new Person (name, X);
    cout << "Player 2 Name: ";
    getline (cin, name);
    Person* player_2 = new Person (name, O);
    cout << endl;
    
    Game game(player_1, player_2);
    Board board(player_1, player_2, &game);
    board.print_board();
    
    while(current_game < no_of_games)
    {
        game.mark_location(player_1);
        board.print_board();
        if (game.full_game() == true)
        {
            cout << "You have tied this round." << endl;
            ++current_game;
            if (current_game < no_of_games)
            {
                game.refresh_game();
                board.print_board();
            }
        }
        else if (game.win_check() == true)
        {
            player_1->win();
            cout << player_1->get_name() << " wins this round!" << endl << player_1->get_name() << " : " << player_1->get_score() << endl << player_2->get_name() << " : " << player_2->get_score();
            ++current_game;
            if (current_game < no_of_games)
            {
                game.refresh_game();
                board.print_board();
            }
        }
        else
        {
            game.mark_location(player_2);
            board.print_board();
        if (game.win_check() == true)
        {
            player_2->win();
            cout << player_2->get_name() << " wins this round!" << endl << player_1->get_name() << " : " << player_1->get_score() << endl << player_2->get_name() << " : " << player_2->get_score() << endl << endl;
            ++current_game;
            if (current_game < no_of_games)
            {
                game.refresh_game();
                board.print_board();
            }
        }
        }
    }
    cout<< endl << "Congratulations, ";
    if (player_1->get_score() == player_2->get_score()) {cout << "You have tied!";}
    else if (player_1->get_score() > player_2->get_score()) {cout << player_1->get_name()<< ". You have won!" << endl;}
    else {cout << player_2->get_name() << ". You have won!" << endl;}
    delete player_1;
    delete player_2;
    return 0;
}
