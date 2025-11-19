#include <iostream>
#include "add.hpp"
#include <fstream>
#include <sstream>

#include <iomanip>
#include <zlib.h>

std::string readFile(const std::string &path ){
	    std::ifstream fibi(path, std::ios::binary);
	    return {std::istreambuf_iterator<char>(fibi),{}};
};

std::string makeBlob(const std::string &content){
	    std::string header ="blob"+std::to_string(content.size())+'\0';
	    return header +content;
};

int snobAdd(std::string &path){
	std::string content = readFile(path);
	std::string blob = makeBlob(content);
	return 0;
};
