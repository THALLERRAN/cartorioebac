#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h>//biblioteca respons�vel por cuidar das string 
int registro()  // Fun��o responsavel por cadastrar os usu�rios no sitema
{
	//�nicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf [40];
	char nome[40];
	char sobrenome [40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado:"); //coletando informa��es do usu�rio
	scanf("%s", cpf); //%s se refere-se a string 
	
    strcpy(arquivo, cpf); //Respos�vel por copiar os valores das string
	
	FILE*file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" sigfinifica escrever
	fprintf(file,cpf); //salva o valor da vari�vel	
	fclose(file); //fecha o arquivo	
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//salva o valor da vari�vel
	fclose(file);//fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//coletando informa��es do usu�rio
	scanf("%s",nome);//%s refere-se a string
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,nome);//salva o valor vari�vel
	fclose(file);// fecha o  arquivo
	
	file = fopen(arquivo,"a");//criao arquivo
	fprintf(file,",");//salva o valor da vari�vel
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//coletando informa��es do usu�rio
	scanf("%s",sobrenome);//%s refere-se a string
	
	file = fopen(arquivo,"a");//cria o arquivo
	fprintf(file,sobrenome);//salva o valor da var�vel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo,"a");//cria o arquivo
	fprintf(file,",");//salva o valor da vari�vel
	fclose(file);//fecha o arquivo 
	
	printf("Digite o cargo a ser cadastrado:");//coletando informa��es do usu�rio 
	scanf("%s",cargo);//%s refere-se a string 
	
	file = fopen(arquivo,"a");//cria arquivo
	fprintf(file,cargo);//salva o valor de vari�vel
	fclose(file);//fecha o arquivo
	
	system("pause");//pausar a tela
	
}

int consulta()
{
    setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem

    //�nicio cria��o de variaveis/string
	char cpf[40];
    char conteudo[200];
    //final da cria��o de vari�veis/string
    
    printf("Digite o CPF a ser consultado: ");//coletando informa��es do usu�rio
    scanf("%s",cpf);//%s refere-se a string
    
    FILE *file;// cria arquivo
    file = fopen(cpf,"r");//cria o arquivo
    
    if(file == NULL)
    {
    	printf("N�o foi possivel abri o arquivo,nao localizado!.\n");//coletando informa��ees do usu�rio
	}
	
	while(fgets(conteudo,200, file)!=NULL)
	
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");//coletando informa��es do usu�rio
		printf("%s",conteudo);//%s refere-se a string 
		printf("\n\n");//"\n\n" para se distinguir entre as fun��es 
	}
    
    system("pause");
    
}

int  deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sitema!.\n");
		system("pause");
	}
	
}
int main()
{
	int opcao=0;//Definindo vari�veis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
		
		system("cls");//respons�vel por limpar a tela 
	
        setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	    printf("###Cart�rio da EBAC###\n\n");//�nicio do menu
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 -Registrar nomes\n");
	    printf("\t2 -Consultar nomes\n");
    	printf("\t3 -Deletar nomes\n\n");
        printf("Op��o: ");//Fim do menu
	
	    scanf("%d", &opcao);//amarzenando a escolha do usu�rio
	
	    system("cls"); //respons�vel por limpar a tela
	    
	    switch(opcao)//�nicio de sele��o do menu 
	    {
	    	case 1:
	        registro();	//chamada de fun��es
	        break;
	        
	        case 2:
	        consulta();
	   	    break;
	        	 
	        case 3:
		    deletar();
		    break;
		
		     default:
		   	printf("Essa op��o n�o est� dispon�vel!\n");
	        system("pause");
	        break;
	        //fim da sele��o 
	
	    }
		
	    }
	    
}
