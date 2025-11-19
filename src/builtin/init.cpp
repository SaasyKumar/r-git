#include <iostream>
#include "init.hpp"
#include "writefile.hpp"
#include <sys/stat.h>

int makeDirectory(std::string &path){
	int makedirectory = mkdir(path.c_str(),0755);
	return 0;
};

int snobInit(){
	std::cout<<"Initializing version control system...";
	std::string dirs[] ={".shadow",".shadow/HEAD",".shadow/hooks",".shadow/info",".shadow/objects",".shadow/objects/pack",".shadow/objects/info",".shadow/refs"};
	for(auto dir : dirs){
		makeDirectory(dir);
	};
	//mknod("tesimoney",S_IRWXG,0);
	return 0;
};

