typedef struct _f1{
	struct _f1* parent;	//frame pointer - ambiente da função chamante
	void* locals[64];	//espaço de endereçamento para variáveis locais	
	void* outgoing[32];	//espaço de endereçamento para argumentos de funções chamadas
	void* temp[32];
	void* return_value;
	int return_address;	//endereço do código na função chamante
}frame;
