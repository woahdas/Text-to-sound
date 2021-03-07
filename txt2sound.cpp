#include <iostream>
#include <stdio>
#include <Windows.h>

using namespace std

int main()
{
	string targetfile;

	cout << "What's the file you want to transfer?";
	cin >> targetfile;
	cout << "Is " targetfile << "correct? If not, please interrupt the program";
	Sleep(5000);

	bool fileavailable = ofstream myfile && myfile.open(targetfile) && myfile.close(); //This sets it to false if it can't open the file (it can't open the file if it can't find it)
	if (fileavailable = false)
	{
		cout << "The program can't seem to find the file requested";
	}
	for (int i = 0; int i < 1000000000; i++)
	{
		while (!targetfile.eof()) //As long as eof() is zero, so the end of the file isn't reached
		{
			char current = targetfile[i];
			if (current = 'a')
			{
				// you get the logic, ok?
				//PlaySound("whatever", NULL, SND_SYNC);
			}
			if (targetfile.eof())
			{
				cout << "Finished!";
				break;
			}
		}
	}

}
