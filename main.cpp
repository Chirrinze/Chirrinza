#include <iostream> //declaracao da biblioteca padrao

#include <stdlib.h>
#include <stdio.h>
using namespace std; // para poder usar entradas e saids
int senhastotal=25;
int senhaatual=0; 
int totalritada; 
int tuasenha; 
int ultimasenha=25;
int Senhaporentrar;
int senhaatendida; //declaracao das variaveis
int	proxima;
int poratender;

int existe;

int main() {
		int i;
	while(i<8){
	cout<<"-------------------------------------------------------"<<endl;	
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Bem Vindo, oque deseja fazer?"<<endl;
	cout<<"1-Criar senha\n";
	cout<<"2-Entrar\n";
	cout<<"3-Proximo\n";
	cout<<"4-Senha atual\n";
	cout<<"5-Total de senhas chamadas\n";
	cout<<"6-Senhas por atender\n";
	cout<<"7-Terminar o programa\n";
	cin>>i;	
	cout<<"-------------------------------------------------------"<<endl;	
	cout<<"-------------------------------------------------------"<<endl;
	switch(i){
	int valor, v2,v3, res;
	case 1:
		system("cls");

if(senhastotal==0){
cout<<"Volte amanha"<<endl;	
}else{
senhaatual=senhastotal-1;
 totalritada++;
 senhastotal--;
 cout<<"Tua senha: "<<senhaatual<<endl;
cout<<"Aguarde a sua vez"<<endl;
		

}


	
	break;
	case 2:
		system("cls");
		cout<<"Escreva a sua senha: ";	
cin>>tuasenha;
Senhaporentrar=ultimasenha-1;


if(tuasenha == Senhaporentrar){
cout<<"Atendido"<<endl;
	ultimasenha--;
	senhaatendida++;
	cout<<"Total atendidos: "<<senhaatendida<<endl;
}else{
	
cout<<"Aguarde a sua vez"<<endl;	
}
	
	break;
	case 3:
		system("cls");
	proxima=ultimasenha-2;

		cout<<"Proxima senha: "<<proxima<<endl;	

	break;
		case 4:
		system("cls");
	proxima=ultimasenha-1;

		cout<<"Senha atual: "<<proxima<<endl;	

	break;
		case 5:
		system("cls");

		cout<<"Senha atual: "<<senhaatendida<<endl;	

	break;
		case 6:
		system("cls");
		 poratender=25-senhaatendida;
		cout<<"Senha por atender: "<<poratender<<endl;	

	break;
		case 7:
		system("cls");
	poratender=25-senhaatendida;
		cout<<"Senhas por atender: "<<poratender<<endl;
		proxima=ultimasenha-1;
		cout<<"Senha atual: "<<proxima<<endl;	
		proxima=ultimasenha-2;
		cout<<"Proxima senha: "<<proxima<<endl;		
	cout<<"Total atendidos: "<<senhaatendida<<endl;
	break;
	default:
	cout<<"escolhe uma opcao valida\n";	
	break;
	
	
	}	
		
	}
	
	


	return 0;
}
