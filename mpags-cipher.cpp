#include<iostream>
#include<string>


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




int main(int argc, char* argv[])
{

  std::cout << "So... what's your phone number? Press Enter then Ctrl-D after."<<std::endl;
  
  char in_char{'x'};
  while(std::cin >> in_char)
    //Input of original message, outputs on Enter then Ctrl+D
    {
      std::cout << transformChar(in_char);
    }
}



	  

      
