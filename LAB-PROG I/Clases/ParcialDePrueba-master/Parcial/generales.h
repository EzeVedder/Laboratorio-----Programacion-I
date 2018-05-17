// ESTRUCTURAS:

//Estructura de persona.
typedef struct
{
    int idPersona;
    char nombreCompleto[100];
    char direccion[100];
    char tarjeta[100];
    int estado;

}ePersona;


typedef struct
{
    int lugar;
    char patente[100];
    int marca;
    int propietario;
    int estado;
}eAuto;


/** \brief Function: Muestra el menu por pantalla y captura la opcion seleccionada.
*   \param Request: NULL.
*   \return Returns: Opcion elegida.
*/ int Menu(void);
/////////////////////////////////////////////////////////////////////////////////



/** \brief Inicializa la estructura seleccionada en 0.
*   \param Array de la estructura Persona.
*   \return void.
*/ void inicializarPropietarios(ePersona persona[],int t);


/** \brief Inicializa la estructura seleccionada en 0.
*   \param Array de la estructura Auto.
*   \return void.
*/ void inicializarAutos(eAuto autos[],int t);



int mostrarUnaPersona(ePersona persona);


void mostrarListaPersonas(ePersona persona[], int t);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibrePersona(ePersona persona[], int t);




  /** \brief Funcion que se utiliza para dar de alta una persona en el sistema.
  *
  * \param lista[] ePersona es la estructura donde se almacenan los datos a guardar.
  * \param int Es la cantidad de personas en la estructura.
  * \return
  */
int altaDePersonas(ePersona persona[],int t);

void modificarPersona(ePersona persona[], int t);

int bajaDePersonas(ePersona persona[],int t);


//************GETS****************//
/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
int getInt (char mensaje[]);



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
float getFloat (char mensaje[]);



/** \brief Solicita un caracter al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el caracter ingresado por el usuario.
 */
char getChar(char mensaje[]);
/////////////////////////////////////////////////////////////////////////







//************VALIDACIONES****************//
/** \brief Funcion que hace mayusculas las primeras letras de los nombres o strings ingresados.
 *
 * \param caracter[] char string que va a ser modificado.
 * \return void
 */
void stringToUpper(char caracter[]);



/** \brief Verifica si el valor recibido es numerico.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero // 0 si no es numero.
 */
int esNumerico (char str[]);



/** \brief Verifica si el valor recibido contiene solamente numeros, + y -.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero, con espacios y guion // 0 si no es numero.
 */
int esTelefono (char str[]);



/** \brief Verifica si el valor recibido contiene solamente letras.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacios y letras // 0 si contiene numero, etc.
 */
int esSoloLetras (char str[]);



/** \brief Verifica si el valor recibido contiene solo letras y numeros.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacio o letras y numeros // 0 si no.
 */
int esAlfaNumerico (char str[]);



/** \brief Solicita un texto al usuario.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return void.
 */
void getString(char mensaje[], char input[]);



/** \brief Solicita un texto al usuario y lo devuelve.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargará el texto ingresado.
 * \return 1 si el texto contiene SOLO letras.
 */
int getStringLetras(char mensaje[], char input[]);



/** \brief Solicita un texto numerico al usuario y lo devuelve
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return 1 si el texto contiene SOLO numeros.
 */
int getStringNumeros(char mensaje[], char input[]);
/////////////////////////////////////////////////////////////////////////







//************VALIDACIONES PESADAS****************//
int validarStringEntero(char datoAValidar[]);

/** \brief Funcion que valida si el string ingresado es un string
 *
 * \param datoAValidar[] char Cadena a validar
 * \return char Retorna la cadena validada
 *
 */
char validarStringCadena(char datoAValidar[]);

/** \brief Funcion que valida si el caracter ingresado es un caracter
 *
 * \param datoAValidar char Caracter a validar
 * \return char Retorna el caracter validado
 *
 */
char validarStringCaracter(char datoAValidar);

/** \brief Funcion que valida si el dato ingresado es un numero flotante
 *
 * \param datoAValidar[] char Dato a validar que debe pasarse como string
 * \return float Retorna el flotante ya validado
 *
 */
float validarStringFloat(char datoAValidar[]);

/** \brief Funcion que le pregunta al usuario si desea continuar
 *
 * \param mensaje[] char Mensaje que se le muestra al usuario
 * \return char Retorna la respuesta del usuario
 *
 */
 /////////////////////////////////////////////////////////////////////////

int idAutoIncrementalEstructura(ePersona persona[],int t);
