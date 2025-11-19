#include <string>
#include <fcntl.h>
#include <unistd.h>
#include "writefile.hpp"

void writeFile( const std::string &path, const std::string &content ){
	int file = open(path.c_str(),O_WRONLY | O_CREAT,0644);
	if (file<0)return;
	write(file,content.c_str(),content.size());
	close(file);
};
