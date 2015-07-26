/*
 * grammar.cpp
 *
 *  Created on: Jul 26, 2015
 *      Author: KESHAW
 */

#include"split.h"
#include"grammar.h"
#include<iostream>

using std::istream;
using std::string;
using std::vector;

grammar read_grammar(istream& in)
{
	grammar ret;
	string line;

	while(getline(in,line))
	{
		//split the input into words
		vector<string> entry = split(line);

		if(!entry.empty())
		{
			//use the category denoted by entry[0] to store the associated rule
			//rule_collection is a vector where each entry of which is a vector of string
			//and this vector represents a rule associated with the category.
			ret[entry[0]].push_back(rule(entry.begin()+1, entry.end()));
		}
	}
	return ret;
}
