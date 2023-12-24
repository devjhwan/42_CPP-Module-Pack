/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:03:09 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 19:35:27 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	replaceString(std::string filename, std::string newFilename, \
							std::string s1, std::string s2);
static int	readAndReplaceString(std::ifstream &readFileStream, \
									std::ofstream &writeFileStream, \
									std::string s1, std::string s2);
static int	flushString(std::string &buffer, \
							std::string &s1, std::string &s2, \
							std::ofstream &writeFileStream);
static void	closeFiles(std::ifstream &readStream, std::ofstream &writeStream);

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	newFilename;
	std::string	s1;
	std::string	s2;
	int			ret;

	if (argc != 4)
	{
		std::cout << "Too few arguments. <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	else
	{
		filename = argv[1];
		newFilename = filename + ".replace";
		s1 = argv[2];
		s2 = argv[3];
		if ((ret = replaceString(filename, newFilename, s1, s2)) != 0)
			return (ret);
	}
	return (0);
}

static int	replaceString(std::string filename, std::string newFilename, \
							std::string s1, std::string s2)
{
	int	ret;

	std::ifstream fileStream(filename.c_str());
    if (!fileStream.is_open()) {
        std::cerr << "Error: Unable to open file '" << filename;
		std::cerr << "' for reading." << std::endl;
        return (1);
    }
	std::ofstream newFileStream(newFilename.c_str());
    if (!newFileStream.is_open()) {
        std::cerr << "Error: Unable to open file '" << newFilename;
		std::cerr << "' for writing." << std::endl;
		closeFiles(fileStream, newFileStream);
        return (1);
    }
	ret = readAndReplaceString(fileStream, newFileStream, s1, s2);
	closeFiles(fileStream, newFileStream);
	return (ret);
}

static int	readAndReplaceString(std::ifstream &readFileStream, \
									std::ofstream &writeFileStream, \
									std::string s1, std::string s2)
{
	std::string	buffer;
	std::string	line;
	size_t		s1len;

	buffer = "";
	s1len = s1.length();
	while (std::getline(readFileStream, line))
	{
		buffer += line;
		buffer += '\n';
		if (s1len == 0)
			continue ;
		if (flushString(buffer, s1, s2, writeFileStream) == 1)
			return (1);
	}
	if (!readFileStream.eof() && readFileStream.fail())
	{
        std::cerr << "Error reading from file." << std::endl;
        return (1);
    }
	writeFileStream << buffer;
	if (writeFileStream.fail())
	{
		std::cerr << "Error writing to file." << std::endl;
		return (1);
	}
	return (0);
}

static int	flushString(std::string &buffer, \
							std::string &s1, std::string &s2, \
							std::ofstream &writeFileStream)
{
	size_t	pos;

	while ((pos = buffer.find(s1)) != std::string::npos)
	{
		writeFileStream << buffer.substr(0, pos);
		writeFileStream << s2;
		if (writeFileStream.fail())
		{
            std::cerr << "Error writing to file." << std::endl;
            return (1);
        }
		buffer = buffer.substr(pos + s1.length());
	}
	return (0);
}

static void	closeFiles(std::ifstream &readStream, std::ofstream &writeStream)
{
	if (readStream.is_open())
		readStream.close();
	if (writeStream.is_open())
		writeStream.close();
}
