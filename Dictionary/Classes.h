#pragma once
#include<iostream>
using namespace std;

struct Trie;
class Dictionary;
void LoadDictionary(Dictionary&);
void ToLower(string &str);
struct Trie
{
	Trie* Letter[26];
	bool EndOfWord;
	string meaning;
	Trie();
};

class Dictionary
{
	Trie* root;
	void SaveDictionary(Trie* current, string prefix, fstream& file);

public:
	Dictionary();
	void Traverse(Trie* current, string prefix, int& count, int& strcount, string str[]);
	string* SuggestWords(string prefix);
	void insert(string, string);
	bool Delete(string);
	string search(string);
	bool UpdateWord(string word,string NewMeaning);
	void SaveDictionary();
};