#include "string"
#include "iostream"
int main()
{
	std::cout << "Hello, welcome to the word game, what is your name?\n";
	std::string playerName; 
	std::getline(std::cin, playerName);
	std::cout << "Hello, " << playerName << "!\n";
	backToRoomOne:std::cout << "You wake up in a dark empty room\n"
			  << "There are 2 doors in front of you:\n"
		      << "A. A wooden door with blood on it.\n"
		      << "B, A metal door with a big scratch on it.\n"
			  << "Which on would you go?\n >>>";
	std::string userInput;
	std::getline(std::cin, userInput);
	if (userInput == "A")
	{
		std::cout << "You found a dead body in the other room" << std::endl;
	}
	else if (userInput == "B")
	{
		std::cout << "You found a monster in the other room, it jumps on you and kills you right away\n";
		goto backToRoomOne;
	}
}