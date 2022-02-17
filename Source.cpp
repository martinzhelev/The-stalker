#include<iostream>
#include<stdlib.h>
using namespace std;
enum gender {
	Male=1,Female=2
};
int main()
{
	int gender;
	int answer;
	cout << "\n\n\n                           <<<<<<<<<<<<<<<<<<<<<<<<<<< THE STALKER >>>>>>>>>>>>>>>>>>>>>>>\n\n\n" << endl;
	cout << "Male(1) has better strength.\nFemale(2) has better flexibility.\n";
	cout << "Choose your gender:";
	cin >> gender;
	switch (gender)
	{
	case Male:
		cout << "Congratulations, you chose the Male character.\n";
		system("pause");
		cout << "You are walking home from work. You sense that something is not right, but you dont know what it is yet.\n";
		system("pause");
		cout << "As you dont get paid very well, you have to commute to work and back around 5km. on foot every day.\n";
		system("pause");
		cout << "Somewhere along the journey, you notice that a strange woman is watching you.\n";
		system("pause");
		cout << "Do you choose to confront her, or run away in some alleys, that will probably get you lost?\n";
		cout << "run-1|confront-2\n";
		cout << "Answer: ";
		cin >> answer;
		switch (answer)
		{
		case 1:
			cout << "You are now running for your life.\n";
			system("pause");
			cout << "You look back and to your surprise she's gone.\n";
			system("pause");
			cout << "For now anyways.\n";
			system("pause");
			cout << "As you expected you got lost.\n";
			system("pause");
			cout << "You find a map of the area and you seem to understand it.\n";
			system("pause");
			cout << "By following the map you go to the most familiar spot. Your old house.\n";
			system("pause");
			cout << "Do you choose to go into your childhood home, or to continue on your way to your present home?\n";
			cout << "go in-1|continue-2\n";
			cout << "Answer:";
			cin >> answer;
			switch (answer)
			{
			case 1:
				cout << "You chose to go in.\n";
				system("pause");
				cout << "The woman that chased you is inside.\n";
				system("pause");
				cout << "Try not to get too close to the woman before you get home.\n";
				cout << "YOU LOSE!\n";
				break;
			case 2:
				cout << "You chose to continue.\n";
				system("pause");
				cout << "Now that you got familiar with the area and you didn't go in your old house. You reached the halfpoint of your commute home.\n";
				system("pause");
				cout << "Walking this much has strenghtened you legs, so dont conserve energy when kicking.\n";
				system("pause");
				cout << "You reach a busy highway that takes forever to cross. But then you look behind you.\n";
				system("pause");
				cout << "The woman is running to get you and you have nowhere to go but to hope for the best and hop into the traffic\n";
				cout << "Do you choose to cross the road and risk being hit by a vehicle, or jump and climb on a car, that you can surf?\n";
				cout << "cross-1|surf-2\n";
				cout << "Answer: ";
				cin >> answer;
				switch (answer)
				{
				case 1:
					cout << "You chose to cross the road.\n";
					system("pause");
					cout << "However strong your legs are, they are not stronger than a bus.\n";
					cout << "YOU LOSE!" << endl;
					break;
				case 2:
					cout << "You chose to surf a vehicle.\n";
					system("pause");
					cout << "You hop on car using you strong legs and to you surprise you arrive at your apartment.\n";
					system("pause");
					cout << "You run up the stairs and get to your door.\n";
					system("pause");
					cout << "You take your key, open the door and before you go inside you look over your shoulder and see she's still following you.\n";
					system("pause");
					cout << "You go inside locking yourself, you grab a baseball bat and wait anxiously at the door.\n";
					system("pause");
					cout << "You hear keys.\n";
					system("pause");
					cout << "She opens the door and before you have ever seen her face.\n";
					system("pause");
					cout << "Do you take a swing and kill her, or wait to see who she is?\n";
					cout << "kill-1|wait-2\n";
					cout << "Answer: ";
					cin >> answer;
					switch (answer)
					{
					case 1:
						cout << "You chose to swing the bat and kill her.\n";
						system("pause");
						cout << "Well you are gonna regret this.\n";
						cout << "YOU LOSE!" << endl;
						break;
					case 2:
						cout << "You chose to wait and see who she is befire swinging.\n";
						system("pause");
						cout << "Are your eyes decieving you?!\n";
						system("pause");
						cout << "It is your girlfriend!\n";
						system("pause");
						cout << "She's furious that not only did you stay late working AGAIN, but you even had the audacity to avoid her when she came to you.\n";
						system("pause");
						cout << "You apologise...\n";
						system("pause");
						cout << "YOU WIN!\nBut you will sleep on the couch.\n\n\n\n\n";
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}

			case 2:
				cout << "You chose to confront her.\n";
				system("pause");
				cout << "You run and hide behind a bush.\n";
				system("pause");
				cout << "Do you chose to punch her, or to throw a rock at her face?\n";
				cout << "Punch-1|Rock-2\n";
				cout << "Answer: ";
				cin >> answer;
				switch (answer)
				{
				case 1:
					cout << "You chose to punch her.\n";
					system("pause");
					cout << "Bad decision she evades and punches you back.\n";
					cout << "YOU LOSE!\n";
					break;
				case 2:
					cout << "You chose to throw a rock at her.\n";
					system("pause");
					cout << "You actually hit her, but she gets angry and comes running for you.\n";
					system("pause");
					cout << "You get scared and run.\n";
					system("pause");
					cout << "You reach a dead end. There is a tall fence and a dumpster.\n";
					system("pause");
					cout << "Do you choose to climb over the fence or hide in the dumpster?\n";
					cout << "Fence-1|Dumpster-2\n";
					cout << "Answer: ";
					cin >> answer;
					switch (answer)
					{
					case 1:
						cout << "You chose to climb over the fence.\n";
						system("pause");
						cout << "You manage to climb over it and stall her for a bit.\n";
						system("pause");
						cout << "You keep running and at the same time thinking what can you do to get rid of her.\n";
						system("pause");
						cout << "You see an old graveyard and at the end of it there is your home.\n";
						system("pause");
						cout << "Do you chose to go through the graveyard or to go around it, possibly slowing yourself down and getting caught.\n";
						cout << "Through-1|Around-2";
						cout << "Answer: ";
						cin >> answer;
						switch (answer)
						{
						case 1:
							cout << "You chose to go through the graveyard.\n";
							system("pause");
							cout << "Going Through the graveyard you fall in a previously excavated grave.\n";
							system("pause");
							cout << "As you are trying to get out, she catches up to you.\n";
							cout << "YOU LOSE!\n";
							break;
						case 2:
							cout << "You chose to go around the graveyard.\n";
							system("pause");
							cout << "Running from her around the graveyard was not that smart.\n";
							system("pause");
							cout << "She caught up to you.\n";
							cout << "YOU LOSE!\n";
							break;
						default:
							break;
						}
						break;
					case 2:
						cout << "You chose to hide in a dumpster.\n";
						system("pause");
						cout << "It's stinky and dark. You can hear footsteps and heavy breathing coming close.\n";
						system("pause");
						cout << "Then the sounds stop.\n";
						system("pause");
						cout << "Just as you feel relief she opens the dumpster, only to find you there.\n";
						cout << "YOU LOSE!\n";
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
				break;
		default:
			break;
		}
		break;
	case Female:
		break;
	default:
		cout << "Invalid option! Try the options shown on the screen.";
		break;
	}
}