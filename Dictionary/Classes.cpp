#include "Classes.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool Dictionary::UpdateWord(string word, string NewMeaning)
{
	
	char letter;
	int index;
	Trie* current = root;

	for (int i = 0; i < word.length(); ++i)
	{
		letter = word[i];
		index = letter - 'a';

		if (current->Letter[index] == NULL)											//searching thw word to update
		{
			//cout << "Word not found!";							
			return 0;
		}

		current = current->Letter[index];       //

	}
	if (current && current->EndOfWord)    //idher gui mein condition laga de yes no ki 
	{										//old meaning show krke yes no laga de agr update krna
		current->meaning = NewMeaning;        //assigning new meanig
		return 1;
	}
	else
		return 0;
}

void Dictionary::SaveDictionary(Trie* current, string prefix,fstream &file)
{																						
	if (current->EndOfWord)
	{																			//saves the complete trie tree into the txt file
		file << prefix << "\t" << current->meaning << endl;
	}
																			// it overwrites the exsiting file
	for (int i = 0; i < 26; ++i)
	{
		if (current->Letter[i])													//traverses thru the complete ttree by recursion
		{
			char ch = 'a' + i;
			SaveDictionary(current->Letter[i], prefix + ch,file);
		}
	}
}

void Dictionary::SaveDictionary()
{                                      
	fstream file;													//overloaded func to pass the file parameter coz of recursion
	file.open("Dictionary.txt", ios::out);   
	SaveDictionary(root, "", file);
	file.close();
}


void Dictionary::Traverse(Trie* current, string prefix, int& count, int& strcount, string str[])
{
	if (current->EndOfWord)
	{
		str[strcount] = prefix;
		strcount++;						//base case
		count++;
		if (count >= 10)
			return;														//suggets 10 words or less 
	}

	for (int i = 0; i < 26; ++i)
	{
		if (current->Letter[i])
		{
			char ch = 'a' + i;
			Traverse(current->Letter[i], prefix + ch, count, strcount, str);
			if (count >= 10)												//traverses complete tree starting from the index  of word provided
				return;														//and shows similar suggsted words
		}
	}
}
string* Dictionary::SuggestWords(string word)  //suggest words
{
	Trie* current = root;
	char letter;
	string* str = new string[10];
	for (int i = 0; i < 10; ++i)
	{
		str[i] = "\0";
	}

	int index;												//simply find the index of the word
	for (int i = 0; i < word.length(); ++i)
	{
		letter = word[i];
		index = letter - 'a';
		//to find suggested words according to it
		if (current->Letter[index] == NULL)
		{
			//cout << "Word not found!";
			return str;
		}

		current = current->Letter[index];			//pointing to the index of the word found
	}
	int i = 0;
	int j = 0;
	Traverse(current, word, i, j, str);
	return str;							// passing that index to the traverse to show suggeted words according to the words found
}




void ToLower(string &str)				//converts  all letters to lower case
{
	for (int i = 0; i < str.length(); ++i)
	{												//to avoid errors a
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
}

void Dictionary::insert(string word, string meaning)
{
	char letter;									//insert
	int index;
	Trie* current = root;

	for (int i = 0; i < word.length(); ++i)
	{
		letter = word[i];
		index = letter - 'a';

		if (current->Letter[index] == NULL)
		{
			current->Letter[index] = new Trie;
		}

		current = current->Letter[index];

	}
	current->EndOfWord = 1;				//end of word true
	current->meaning = meaning;					//assign meaning to end of word
}

bool Dictionary:: Delete(string word)
{
	char letter;
	int index;
	Trie* current = root;

	for (int i = 0; i < word.length(); ++i)
	{
		letter = word[i];
		index = letter - 'a';

		if (current->Letter[index] == NULL)
		{
			//cout << "Word not found!";
			return 0;
		}

		current = current->Letter[index];

	}
	if (current && current->EndOfWord)  //if word not found return flase
	{
		current->EndOfWord = 0;             // if found siwth end of word to flase and delete meanig
		current->meaning = "";
		return 1;
	}
	else 
		return 0;
}

string Dictionary::search(string mean)
{
	Trie* current = root;
	char letter;
	int index;
	for (int i = 0; i < mean.length(); ++i)
	{
		letter = mean[i];
		index = letter - 'a';
		if (current->Letter[index])
			current = current->Letter[index];
		else
			return "\0";							//returns null if no word found return type string
	}
	if (current->EndOfWord)
	{
		return current->meaning;
	}
	return "\0";
}

Dictionary::Dictionary()
{
	root = new Trie;
}
Trie::Trie()
{
	EndOfWord = false;
	for (int i = 0; i < 26; i++)
		Letter[i] = NULL;
	meaning = "";
}

void LoadDictionary(Dictionary& D)
{											//load dictionary into memory 
	fstream file;
	string word, meaning, temp;
	file.open("Dictionary.txt", ios::in);
	if (file)
	{
		file >> word;
		file >> meaning;
		D.insert(word, meaning);
		while (!file.eof() && getline(file, temp))
		{
			file >> word;
			file >> meaning;
			D.insert(word, meaning);             //inserting words and meanngs into the trie tree
		}
	}
	else
		cout << "File not found";
	file.close();
}