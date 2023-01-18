#include <iostream>
#include <cstring>

int main(){

    std::cout << std::endl;
    //Check if character is alphanumeric
    char input_char{};
    std::cout << "Give me any character: ";
    std::cin >> input_char;
    
    int is_alfnum{ std::isalnum(input_char) };
	
	if(is_alfnum){
		std::cout << input_char << " is alhpanumeric." << std::endl;
	}else{
		std::cout << input_char <<  " is not alphanumeric." << std::endl;
	}

    //Check if character is alphabetic
    int is_alfa{ std::isalpha(input_char) };
    if(is_alfa){
        std::cout << input_char << " is alphabetic" << std::endl;
    }else{
        std::cout << input_char << " is NOT alphabetic" << std::endl;        
    }


	//Check if a character is blank
    std::cout << std::endl;
    char message[50];
    std::cout << "Give me sentence: ";
    std::cin.ignore();
    std::cin.getline(message, 50);

    //Find and print blank index
    size_t blank_count{};
    char letter{'a'};
    size_t i{};
    while(letter != '\0'){
        letter = message[i];
        if( std::isblank(message[i]) ){
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
        ++i;
    }
    std::cout << "In total we found " << blank_count << " blank characters."<< std::endl;

	//Check if character is lowercase or uppercase
    std::cout << std::endl;
    size_t lowercase_count{};
    size_t upppercase_count{};
    i = 0;
    letter = 'a';
    while(letter != '\0'){
        letter = message[i];
        if(std::islower(letter)){
            ++lowercase_count;
        }
        if(std::isupper(letter)){
            ++upppercase_count;
        }
        ++i;
    }
    std::cout << "Found " << lowercase_count << " lowercase characters and "
                <<upppercase_count << " uppercase characters."<<  std::endl;


    //Check if a character is a digit
    
    std::cout << std::endl;
    size_t digit_count{};
    i = 0;
    letter = 'a';
    while(letter != '\0'){
        letter = message[i];
        if(std::isdigit(letter)){
            ++digit_count;
        }
        ++i;
    }
    std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;
    

    //Turning a character to lowercase using the std::tolower() function
    std::cout << std::endl;
    //Turn this to uppercase. Change the array in place
    char dest_str[std::size(message)];
    i = 0;
    letter = 'a';
    while(letter != '\0'){
        letter = message[i];
        dest_str[i] = std::toupper(message[i]);
        ++i;
    }
    dest_str[i] = '\0';

    std::cout << "Original string : " << message << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;

    //Turn this to lowercase. Change the array in place
    i = 0;
    letter = 'a';
    while(letter != '\0'){
        letter = message[i];
        dest_str[i] = std::tolower(message[i]);
        ++i;
    }
    dest_str[i] = '\0';
    
    std::cout << "Lowercase string : " << dest_str << std::endl;
    
    return 0;
}