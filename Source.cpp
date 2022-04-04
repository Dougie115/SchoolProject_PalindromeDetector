#include<iostream>

#include< string>

using namespace std;


bool recPalindrom(string str, int start, int end)

{

	if (end <= 1)

		return true;

	else if (str[start] != str[end])

		return false;

	else

		return recPalindrom(str, start + 1, end - 1);

}
int main()

{

	string str;

	cout << "-------------------------------" << endl;
	cout << "Douglas J Lopez                " << endl;
	cout << "Long Beach City College        " << endl;
	cout << "May 19 2019                    " << endl;
	cout << "Palindrome Derector            " << endl;
	cout << "-------------------------------" << endl;


	cout << "Enter a word to determine if it's a palindrome:";

	cin >> str;

	int max = str.length();

	if (recPalindrom(str, 0, max - 1))

		cout << "Palindrome Detected Success!!" << endl << "Goodbye!" << endl;

	else

		cout << "Not a Palindrome Try Again!!" << endl << "Goodbye!" << endl;

	system("pause");

}

