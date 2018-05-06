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
typedef struct//ESTRUCTURA PARA CONTACTOS
{
    char nombre[50];
    char apellido[50];
    int legajo;

}eContactos;


void inicializarArrayContactos(eContactos arrayContactos[],int cantidadDeElementos,int valor);//para inicializar un array de personas con estructuras
int buscarPrimerOcurrenciaEstructuras(eContactos arrayContactos[],int cantidadDeElementos,int valor);
