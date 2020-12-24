#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sbasico,numhoras,salario,vhora;
	cout <<"Digite Sueldo Basico ";
	cin >>sbasico;
	cout <<"Digite Numero de horas Trabajadas ";
	cin >>numhoras;
	vhora=sbasico/240;
	salario=vhora*numhoras;
	cout <<"El salario a recibir es de $" <<salario;
	return 0;
}
