#include<iostream>
#include<string>

int main(int argc, char* argv[])
{

  std::cout << "So... what's your phone number? Press Enter then Ctrl-D after."<<std::endl;
  
  char in_char{'x'};
  while(std::cin >> in_char)

    //Input of original message, outputs on Enter then Ctrl+D
    {
    switch(in_char)
      {
	//Taking numerical characters and replacing with words
      case'0':
	std::cout<<("ZERO ");
	break;

      case '1':
	std::cout<<("ONE ");
	break;

      case '2' :
	std::cout<<("TWO ");
	break;

      case '3':
	std::cout<<("THREE ");
	break;

      case'4':
	std::cout<<("FOUR ");
	break;

      case '5':
	std::cout<<("FIVE ");
	break;

      case '6' :
	std::cout<<("SIX ");
	break;

      case '7':
	std::cout<<("SEVEN ");
	break;

	 case'8':
	std::cout<<("EIGHT ");
	break;

      case '9':
	std::cout<<("NINE ");
	break;

	//Numbers outputted as words, with spaces between.
     
      }
    }



}

	  

      
