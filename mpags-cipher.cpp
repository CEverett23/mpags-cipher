#include<iostream>
#include<string>
#include<fstream>


std::string transformChar(char input )
{
  std::string output{""};
  
  switch(input)
    {
      //Taking numerical characters and replacing with words
    case'0':
      output += "ZERO";
      break;

    case '1':
      output += "ONE";
      break;
      
    case '2' :
      output += "TWO";
      break;
      
    case '3':
      output += "THREE";
      break;
      
    case'4':
      output += "FOUR";
      break;
      
    case '5':
      output += "FIVE";
      break;
      
    case '6' :
      output += "SIX";
      break;
      
    case '7':
      output += "SEVEN";
      break;
      
    case'8':
      output += "EIGHT";
      break;
      
    case '9':
      output += "NINE";
      break;
      
      //Numbers outputted as words, with spaces between.
      
    }
  return output;
}




int main()
{
  
  std::string name {"Sombers.txt"};
  std::ifstream in_file {"Sombers.txt"};

  std::string Name {"SomeLetters.txt"};
  std::ofstream out_file {"SomeLetters.txt"};

 
  char in_char{'x'};
  while(in_file >> in_char)
    //Input of original message, outputs on Enter then Ctrl+D
    {
      out_file << output;
    }
}

