#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream inputfile;
	std::string lines;
	std::string name = argv[1];
	name = name.append(".replace");

	if (argc != 4)
	{
		std::cout << "Error.\nWrong Arguments.\nArguments must be: <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}
	inputfile.open(argv[1], std::ifstream::in);
	if (!inputfile.is_open())
	{
		std::cout << "Error.\nFile cannot be opened." << std::endl;
		return (1);
	}
	std::ofstream outfile (name);
	while (std::getline(inputfile, lines))
	{
		std::cout << lines << std::endl;
		if ((int)lines.find(argv[2], 0) >= 0)
			std::cout << argv[2] << " found." << std::endl;
		outfile << lines << std::endl;
	}
	inputfile.close();
	return (0);
}