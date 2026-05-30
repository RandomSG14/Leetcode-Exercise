/******************************************************************************

                             LeetCode Exercise 3

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    
    //Word or names variables
    string name_input = "";
    
    
    cout<<"Insert name/word" << endl;
    
    getline(cin,name_input);
    
    int name_length = name_input.length();
    
    cout<<"the word is :" << name_input << endl;
    cout<<"the length is :" << name_length << endl << endl;
    
    
    
    // Array to insert the string 
    char alphabet_count[name_length];
    
    // char for indicator and counter(s) to count the sequence
    char alphabet_marker; // to mark new alphabet 
    char char_indicator; // alphabet indicator to compare with alphabet_marker
    
    int substring_counter = 1;
    int max_sequence = 1;
    
    // Copy string to array of char
    strcpy(alphabet_count,name_input.c_str());
    
    //Test output
    cout<<"String to char array conversion:\n";
	for (int i = 0; i < name_length; i++) 
		    cout << alphabet_count[i]; 


    cout << "\n\n";
    
    
    // Leetcode Exercise part
    
    char_indicator = alphabet_count[0];
    alphabet_marker = char_indicator;
    for (int counter = 1; counter < name_length; counter++) 
		   { 
		       char_indicator = alphabet_count[counter];
		       if (alphabet_marker == char_indicator)
		       {
		           substring_counter = 1;
		           cout<<"sama " << endl;
		           alphabet_marker = char_indicator;
		       }
		       
		       else
		       {
		           if (substring_counter == max_sequence)
		              max_sequence++;
		           
		           
		           if (alphabet_count[counter] == alphabet_count[counter-1])    
		              cout<<"repeat " << endl;
		           
		           substring_counter++;
		           cout<<"lain " << endl;
		       }
		       
		      
		       
               
		   }
		   
		 	cout<<"The longest substring is " << max_sequence << endl;
	
    return 0;
}
