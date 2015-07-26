/*
 * grammar.h
 *
 *  Created on: Jul 26, 2015
 *      Author: KESHAW
 */

#ifndef GRAMMAR_H_
#define GRAMMAR_H_

#include<vector>
#include<map>
#include<string>

typedef std::vector<std::string> rule;
typedef std::vector<rule> rule_collection;
typedef std::map<std::string, rule_collection> grammar;

grammar read_grammar(std::istream&);


#endif /* GRAMMAR_H_ */
