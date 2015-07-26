/*
 * gen_sentence.cpp
 *
 *  Created on: Jul 26, 2015
 *      Author: KESHAW
 */

#include"gen_sentence.h"
#include"grammar.h"
#include"nrand.h"
#include<stdexcept>

using std::vector;
using std::string;
using std::logic_error;

vector<string> gen_sentence(const grammar& g)
{
	vector<string> ret;
	gen_aux(g,"<sentence>", ret);
	return ret;
}


//function to check if the string represents a category i.e. <category>
bool bracketed(const string& s)
{
	return s.size()>0 && s[0] =='<' && s[s.size()-1]=='>';
}

//function that generate a sentence by reading the rules from the grammar

void gen_aux(const grammar& g, const string& word, vector<string>& ret)
{
	if(!bracketed(word))
	{
		ret.push_back(word);
	}
	else
	{
		//locate the rule that corresponds to word
		grammar::const_iterator it = g.find(word);
		if(it == g.end())
			throw logic_error("empty rule");
		const rule_collection& c = it->second;
		//fetch the set of possible rules
		const rule& r = c[nrand(c.size())];

		//recursively expand the selected rule
		for(rule::const_iterator i = r.begin(); i != r.end(); ++i)
			gen_aux(g,*i,ret);
	}
}
