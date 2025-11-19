#include <iostream>
#include <string>
#include <unistd.h>

#include "src/builtin/init.hpp"
#include "src/builtin/add.hpp"

int main(int argc,char* argv[]){
	std::string method = argv[1];
	if(method == "init"){
		snobInit();
	} else{
		//Show help page
	}
	return 0;


}
