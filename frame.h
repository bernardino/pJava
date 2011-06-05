typedef struct _f1{
	struct _f1* parent;	/*frame pointer - ambiente da funcao chamante*/
	void* locals[64];	/*espaço de enderecamento para variaveis locais	**/
	void* outgoing[32];	/*espaço de enderecamento para argumentos de funcoes chamadas*/
	void* temp[32];
	void* return_value;
	int return_address;	/*endereco do codigo na função chamante**/
}frame;
