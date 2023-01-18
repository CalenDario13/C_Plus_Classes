#include <iostream>
#include <cstring>

int main(){

 
	//std::strlen : Find the length of a string
    // It works for both real arrays and those decayed into pointers
    const char message1 [] {"The sky is blue."};
	const char* message2 {"The sky is blue."};
    
    std::cout << "message: " << message1 << std::endl;
    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;
	std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
	
	// Size include in the len the '\0' charcater and does not work with pointers
    std::cout << "sizeof(message1) is the size of the array + the null char: " << sizeof(message1) << std::endl;
    std::cout << "sizeof(message2) is the size of a pointer : " << sizeof(message2) << std::endl;


    //std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order. 

    std::cout << std::endl;
    const char* string1{ "Alabama" };
    const char* string2{ "Blabama" };
    char string3[]{ "Alabama" };
    char string4[]{ "Blabama" };

    //Print out the comparison
    // Works with both array and pointer as input
    std::cout << "std::strcmp (" << string1 << "," << string2 << ") : "
        << std::strcmp(string1, string2) << std::endl;
    std::cout << "std::strcmp (" << string3 << "," << string4 << ") : "
        << std::strcmp(string3, string4) << std::endl;
    
    string1 = "Alabama";
    string2 = "Alabaca";
    std::cout << "std::strcmp (" << string1 << "," << string2 << ") : "
        << std::strcmp(string1, string2) << std::endl;

    string1 = "Alabama";
    string2 = "Alabama";
    std::cout << "std::strcmp (" << string1 << "," << string2 << ") : "
        << std::strcmp(string1, string2) << std::endl;
    
    /*
    // It is not possible to assign a new value to char array
    // While it is possible with a pointer
    string3 = "Hello" // It RAISES AN ERROR
    string1 = "Hello" // It is ok
    */


	//std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count );
	//Compares FIRST n characters in the strings
	//Returns : Negative value if lhs appears before rhs in lexicographical order.
    //Zero if lhs and rhs compare equal, or if count is zero.
    //Positive value if lhs appears after rhs in lexicographical order. 
 
    string1 = "Alabama";
    string2 = "Blabama";
    size_t n{3};

    std::cout << std::endl;
    std::cout << "std::strncmp (" << string1 << "," << string2 << "," << n << ") : " 
              << std::strncmp(string1,string2,n) << std::endl;

            
    string1 = "aabijisdf";
    string2 = "aaaidisua";
    std::cout << "std::strncmp (" << string1 << "," << string2 << "," << n << ") : " 
              << std::strncmp(string1,string2,n) << std::endl;

    string1 = "aaaijisdf";
    string2 = "aaaidisua";
    std::cout << "std::strncmp (" << string1 << "," << string2 << "," << n << ") : " 
              << std::strncmp(string1,string2,n) << std::endl;

      
    //Find the first occurrence of a character 
    // It returns a pointer to the occurence
    // It takes as input the pointer to the array (or the array) and teh target
    // If there is no occurence, it returns a 'nullptr'
 
    std::cout << std::endl;    
	const char* const str { "Try not. Do, or do not. There is no try."};
	char target = 'T';
	const char* result = str;
	size_t iterations{};

	while ( ( result = std::strchr(result, target) ) != nullptr ) {
		std::cout << "Found '" << target
				<< "' starting at '" << result << "'\n";
 
		// Increment result, otherwise we'll find target at the same location
		++result;
		++iterations;
	}
	std::cout << "iterations : " << iterations << std::endl;


	//Find last occurence
    std::cout << std::endl;
    char input[] = "/home/user/hello.cpp";
    char* output = std::strrchr(input, '/');
    if(output)
        std::cout << output+1 << std::endl; //+1 because we want to start printing past 
                                            // the character found by std::strrchr.
   
    return 0;
}