#include<iostream>

int main(){

int m[5] = {1, 2, 3, 4 ,5}; 
int n =0;
std::cout<<std::size(m)<<std::endl; //std::size длина масва; std::endl == "\n" 
std::cin>>n;
std::cout<<"you chuse: ";

std::cout<<m[n]<<std::endl;
std::cout<<"another variants: ";
for(int i =0;i <std::size(m); i++){std::cout<<m[i]<<" ";}

 
	}
