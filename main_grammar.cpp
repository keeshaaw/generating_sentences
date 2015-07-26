/*
 * main_grammar.cpp
 *
 *  Created on: Jul 26, 2015
 *      Author: KESHAW
 */
#include"grammar.h"
#include"gen_sentence.h"
#include<iostream>

using std::string;
using std::vector;
using std::cin;
using std::cout;


int main()
{
	//generate a sentence
	vector<string> sentence = gen_sentence(read_grammar(cin));

	//write the first word, if any
	vector<string>::const_iterator it = sentence.begin();
	if(!sentence.empty())
	{
		cout << *it;
	}

	//write the rest of the words in the sentence each preceded by a space
	while(it != sentence.end())
	{
		cout << " " << *it;
		++it;
	}
	return 0;
}
