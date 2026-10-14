#include <iostream>
#include <string>

int main(){

do{

	}while(false); // выполняет вайл минимум 1 раз
std::string y = "";		
int x = 0;
std::cin>> x;
std::cout<<"are you sure? (y/n)";
std::cin>> y;
if(y == "y"){
switch(x){
	case 1:
		std::cout<<"one\n"; break;
	case 0:
		std::cout<<"zero\n"; break;
	default :
		std::cout<<"we dont know this number\n"; break;//пачка ифов
	
	

}
	}else if(y == "n"){std::cout<<"ok bye ";}
else{std::cout<<"u dump?\n";return(0);}
		

}		
		}
		
