int validarNumero(char str[]);
int validarSoloLetras(char str[]);
int validarAlfanumerico(char str[]);
int validarTelefono(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumerico(char mensaje[],char input[]);

int getInt(char mensaje[]);

void inicializarArray(int array[],int cantidad_de_elementos,int valor);
int buscarPrimerOcurrencia(int array[],int cantidad_de_elementos,int valor);

//estructuras-----------
void inicializarArrayContactos(eContactos arrayContactos[],int cantidadDeElementos,int valor);
int buscarPrimerOcurrencia(eContactos arrayContactos[],int cantidadDeElementos,int valor);
