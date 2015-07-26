/*
 * gen_sentence.h
 *
 *  Created on: Jul 26, 2015
 *      Author: KESHAW
 */

#ifndef GEN_SENTENCE_H_
#define GEN_SENTENCE_H_

#include"grammar.h"

std::vector<std::string> gen_sentence(const grammar&);

bool bracketed(const std::string&);

void gen_aux(const grammar& , const std::string&, std::vector<std::string>&);

#endif /* GEN_SENTENCE_H_ */
