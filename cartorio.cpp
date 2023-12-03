#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsável por cuidar das string 
int registro()  // Função responsavel por cadastrar os usuários no sitema
{
	//ínicio criação de variáveis/string
	char arquivo[40];
	char cpf [40];
	char nome[40];
	char sobrenome [40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado:"); //coletando informações do usuário
	scanf("%s", cpf); //%s se refere-se a string 
	
    strcpy(arquivo, cpf); //Resposável por copiar os valores das string
	
	FILE*file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" sigfinifica escrever
	fprintf(file,cpf); //salva o valor da variável	
	fclose(file); //fecha o arquivo	
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,",");//salva o valor da variável
	fclose(file);//fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//coletando informações do usuário
	scanf("%s",nome);//%s refere-se a string
	
	file = fopen(arquivo, "a");//cria o arquivo
	fprintf(file,nome);//salva o valor variável
	fclose(file);// fecha o  arquivo
	
	file = fopen(arquivo,"a");//criao arquivo
	fprintf(file,",");//salva o valor da variável
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//coletando informações do usuário
	scanf("%s",sobrenome);//%s refere-se a string
	
	file = fopen(arquivo,"a");//cria o arquivo
	fprintf(file,sobrenome);//salva o valor da varável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo,"a");//cria o arquivo
	fprintf(file,",");//salva o valor da variável
	fclose(file);//fecha o arquivo 
	
	printf("Digite o cargo a ser cadastrado:");//coletando informações do usuário 
	scanf("%s",cargo);//%s refere-se a string 
	
	file = fopen(arquivo,"a");//cria arquivo
	fprintf(file,cargo);//salva o valor de variável
	fclose(file);//fecha o arquivo
	
	system("pause");//pausar a tela
	
}

int consulta()
{
    setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem

    //ínicio criação de variaveis/string
	char cpf[40];
    char conteudo[200];
    //final da criação de variáveis/string
    
    printf("Digite o CPF a ser consultado: ");//coletando informações do usuário
    scanf("%s",cpf);//%s refere-se a string
    
    FILE *file;// cria arquivo
    file = fopen(cpf,"r");//cria o arquivo
    
    if(file == NULL)
    {
    	printf("Não foi possivel abri o arquivo,nao localizado!.\n");//coletando informaçõees do usuário
	}
	
	while(fgets(conteudo,200, file)!=NULL)
	
	{
		printf("\nEssas são as informações do usuário: ");//coletando informações do usuário
		printf("%s",conteudo);//%s refere-se a string 
		printf("\n\n");//"\n\n" para se distinguir entre as funções 
	}
    
    system("pause");
    
}

int  deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sitema!.\n");
		system("pause");
	}
	
}
int main()
{
	int opcao=0;//Definindo variáveis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
		
		system("cls");//responsável por limpar a tela 
	
        setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	    printf("###Cartório da EBAC###\n\n");//Ínicio do menu
	    printf("Escolha a opção desejada do menu:\n\n");
	    printf("\t1 -Registrar nomes\n");
	    printf("\t2 -Consultar nomes\n");
    	printf("\t3 -Deletar nomes\n\n");
        printf("Opção: ");//Fim do menu
	
	    scanf("%d", &opcao);//amarzenando a escolha do usuário
	
	    system("cls"); //responsável por limpar a tela
	    
	    switch(opcao)//ínicio de seleção do menu 
	    {
	    	case 1:
	        registro();	//chamada de funções
	        break;
	        
	        case 2:
	        consulta();
	   	    break;
	        	 
	        case 3:
		    deletar();
		    break;
		
		     default:
		   	printf("Essa opção não está disponível!\n");
	        system("pause");
	        break;
	        //fim da seleção 
	
	    }
		
	    }
	    
}
