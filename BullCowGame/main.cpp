
#include "pch.h"
#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
std::string GetGuess();
void PlayGame();
std::string PrintBack();
bool AskToPlayAgain();

int main()
{
	std::cout << std::boolalpha << true << std::endl;
	bool bPlayAgain = false;

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();

	} while (bPlayAgain);
	return 0;

} 

void PlayGame() 
{
	constexpr int NUMBER_OF_TURN = 5;

	for (int i = 0; i < NUMBER_OF_TURN; i++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was : " << Guess << std::endl;
		std::cout << std::endl;
	}
}


std::string GetGuess() 
{

	//get guess from player
	std::cout << "Please enter your guess : ";
	std::string Guess{ "" };
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintIntro() 
{

	//Introduce the game
	constexpr int WORD_LENGTH = 5;  //constexpr 
	std::cout << "Hello World!\n";
	std::cout << "Can your guess the " << WORD_LENGTH;
	std::cout << " X letter isogram I am thinking of \n";
	return;
}
//Get the Guess
std::string PrintBack() 
{

	//get guess from player
	std::cout << "Please enter your guess : ";
	std::string Guess{ "" };
	std::getline(std::cin, Guess);
	//repeat the guess to them
	std::cout << "Your guess was " << Guess << std::endl;

	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)?  :" ;
	std::string Response{""};
	std::getline(std::cin, Response);

	return (Response[0] == 'y' || Response[0] == 'Y') ;

}
