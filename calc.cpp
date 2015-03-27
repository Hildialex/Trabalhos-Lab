#include calc.h
#include <iostream>

Calculadora::Calculadora(){
	std::count << 'Chamei Construtor de Calculadora'<< std::ednl;
}

int Calculadora::soma(int a , int b){
	return a+b;
}
int Calculadora::subtrai(int a, int b){
	return a-b;
}
int Calculadora::multiplica(int a, int b){
	return a*b;
}