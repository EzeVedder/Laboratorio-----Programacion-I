/** \brief Funcion que muestra un menu de opciones
 *
 * \param void No recibe valor
 * \return void No retorna valor
 *
 */
void menu(void);

typedef struct
{
    char nombre[50];
    //------------
    int idGenerica;
    int estado;
}eGenerica;


int eGen_init(eGenerica[],int limite);
int eGen_buscarPorId(eGenerica[] ,int limite, int id);
int eGen_siguienteId(eGenerica[] ,int limite);
int eGen_buscarLugarLibre(eGenerica listado[],int limite);

int eGen_mostrarUno(eGenerica parametro);
int eGen_mostrarListado(eGenerica[] ,int limite);
int eGen_mostrarListadoConBorrados(eGenerica[] ,int limite);

int eGen_alta(eGenerica[] ,int limite);
int eGen_baja(eGenerica[] ,int limite, int id);
int eGen_modificacion(eGenerica[] ,int limite, int id);

int eGen_ordenar(eGenerica[] ,int limite, int orden);

/** \brief Valida si el dato que recibe es numerico
 *
 * \param str[] char Array que va a ser analizado
 * \return int Retorna 1 si es numero y 0 si no lo es
 *
 */
int validarNumerico(char str[]);

