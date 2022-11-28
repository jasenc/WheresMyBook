// The purpose of this program is to read bibliographic data for books
// and output in a query format.

// Jasen Carroll
// CS171-064
// Assignment 2/Homework 2
// 1/23/2010

// This program succesfully takes the Title, Authors, and ISBN of 
// the book you are searching for and displays in a format that can 
// easily be used for online text look up services.

#include <iostream>
#include <string> // The string library is used to input words.
using namespace std;

int main()
{	
	string TITLE;
	cout << "Please enter the title of the book: ";
	getline(cin, TITLE); // Allows the user to put in a title as long as they wish.
	string AUTHORS;
	cout << "Please enter the authors of the book (first last): ";
	getline(cin, AUTHORS); // Allows users to input any amount of authors.
	string ISBN;
	cout << "Please enter the ISBN of the book: ";
	cin >> ISBN; // Allows the user to input the ISBN with dashes. 
	int FIRST_TITLE_BLANK = TITLE.find(" "); // Finds the first space in the title.
	string FIRST_TITLE = TITLE.substr( 0, FIRST_TITLE_BLANK); // Takes the first name of the title.
	int FIRST_AUTHOR = AUTHORS.find(", "); // Finds the first comman in the line of authors.
	int LAST_NAME = AUTHORS.rfind(" ",FIRST_AUTHOR); 
				    // Finds the last night of the first author based off of the comma position.
	int NAME_LENGTH = FIRST_AUTHOR - LAST_NAME - 1; // Finds the length of the last name of the first author.
	string AUTHOR_LAST_NAME = AUTHORS.substr( LAST_NAME + 1, NAME_LENGTH); 
							  // This string is solely the last name of the first author.
	int DASH1 = ISBN.find("-"); // Finds the first dash in the ISBN.
	int DASH2 = ISBN.find("-", DASH1+1); // FInds the second dash in the ISBN.
	int DASH3 = ISBN.find("-", DASH2+1); // Finds the third dash in the ISBN.
	int DASH_LENGTH1 = DASH2 - DASH1; // Finds the length between the second and first dashes.
	int DASH_LENGTH2 = DASH3 - DASH2; // Finds the length between the thrid and seconds dashes.
	string REAL_ISBN = ISBN.substr(0, DASH1) + ISBN.substr(DASH1+1, DASH_LENGTH1-1)
					   + ISBN.substr(DASH2+1, DASH_LENGTH2-1) + ISBN.substr(DASH3+1);
					   // This string is the entire ISBN without the dashes.
	cout << "query?author=" << AUTHOR_LAST_NAME << "&title=" << FIRST_TITLE << "&isbn=" << REAL_ISBN << endl;
		 // Finally, the output is put in the format of a query.

	return 0;
}
