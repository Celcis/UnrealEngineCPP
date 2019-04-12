#pragma once
#include <string>


class FBullCowGame{


public:

	void Reset(); //TODO make a more rich return
	int GetMaxTry();
	int GetCurrentTry();
	bool isGameWon();
	bool CheckGuessValidity(std::string);

private:

	int MyCurrentTry;
	int MyMaxTries;
	bool IsIsogram(std::string);

};