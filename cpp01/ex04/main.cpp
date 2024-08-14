#include <iostream>
#include <fstream>

void replace_1(std::string &line, char **argv, int found)
{
	std::string arg_2 = argv[2];
	std::string arg_3 = argv[3];
	std::string newString;
	std::string bufferString;
	char buffer[1024];

	line.copy(buffer, found, 0);
	newString = buffer;
	newString.append(arg_3);
	line.copy(buffer, line.length(), newString.length());
	bufferString = buffer;
	newString.append(bufferString);
	line = newString;
}

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
	std::ofstream outfile(name);
	while (std::getline(inputfile, lines))
	{
		if ((int)lines.find(argv[2], 0) >= 0)
			replace_1(lines, argv, lines.find(argv[2], 0));
		outfile << lines << std::endl;
	}
	inputfile.close();
	outfile.close();
	return (0);
}