#include <iostream>


// create a function to switch lower case to upper case 
int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (int i = 1; i < argc; i++)
			std::cout << "hello world" << std::endl;
}