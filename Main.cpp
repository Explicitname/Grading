/*
 * Main.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: Explicitness
 */

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()

{
	double grade = 0;
	string cont = "Yes";



	while (cont == "Yes" || cont == "yes")

	{
		cout << "Please input a grade from 0-100: ";
		cin >> grade;
		cout << endl;

		if (!grade)

		{
			cout << "Invalid Input! Stop being bad at stuff." << endl;
			break;
		}

		if (grade == 100)

		{
			cout << "Perfect score!" << endl;
			cout
					<< "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

		else if (grade > 89 && grade < 100)

		{
			cout << "Congratulations, you made an 'A'! " << endl;
			cout << "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

		else if (grade > 79 && grade < 90)

		{
			cout << "Congratulations, you made an 'B'! " << endl;
			cout << "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

		else if (grade > 69 && grade < 80)

		{
			cout << "Congratulations, you made an 'C'! " << endl;
			cout << "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

		else if (grade > 59 && grade < 70)

		{
			cout << "Congratulations, you made an 'D'! " << endl;
			cout << "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

		else if (grade < 60)

		{
			cout << "Congratulations, you failed! " << endl;
			cout << "Would you like to enter another grade? Enter 'Yes' or 'No': ";
			cin >> cont;
		}

	}

	return (0);
}

