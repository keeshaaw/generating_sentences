# generating_sentences
A console applicatin in C++ that takes a description of a sentence structure—a grammar—and generates random sentences that meet that description.

An example demonstrating how the progrma works. Given the following input

Categories        Rules                        
<noun>            cat
<noun>            dog
<noun>            table
<noun-phrase>     <noun>
<noun-phrase>     <adjective> <noun-phrase>
<adjective>       large
<adjective>       brown
<adjective>       absurd
<verb>            jumps
<verb>            sits
<location>        on the stairs
<location>        under the sky
<location>        wherever it wants
<sentence>        the <noun-phrase> <verb> <location>
our program might generate

the table jumps wherever it wants
The program should always start by finding a rule for how to make a sentence. In this input, there is only one such rule—the last one in our table:

<sentence>   the <noun-phrase> <verb> <location>
This rule says that to make a sentence, we write the word the, a noun-phrase, a verb, and finally a location. The program begins by randomly selecting a rule that matches <noun-phrase>. Evidently the program chose the rule

<noun-phrase>  <noun>
and then resolved the noun using the rule

<noun>   table
The program must still resolve verb and location, which apparently it did by selecting

<verb>    jumps
for the verb and

<location>    wherever it wants
for the location. Note that this last rule maps a category to several words that wind up in the generated sentence.

