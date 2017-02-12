#include <iostream>


int main(int argc,char* argv[]){

	std::cout << "Size of argc:" << sizeof(argc) << std::endl; 
	std::cout << "Size of argv:" << sizeof(argv) << std::endl; 

	for(int i=0;i< sizeof(argv);i++){
		if(i == argc)
			std::cout << i << ":NULL" << std::endl;
		else
			std::cout << i << ":" << argv[i] << std::endl; 
	}


	return 0;
}
