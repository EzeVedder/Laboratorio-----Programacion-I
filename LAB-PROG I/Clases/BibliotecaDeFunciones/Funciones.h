
/** \brief Funcion para mostrar el numero ingresado
 *
 * \param mensaje[] char msj de retorno
 * \return float Devuelve el numero ingresado
 *
 */
float mostrarNum(char[]);
//------------------------------
/** \brief Recibe dos numeros de tipo float y devuelve la suma de ellos
 *
 * \param n1 float Es el primer parametro
 * \param n2 float Es el segundo parametro
 * \return float Devuelve la suma de los dos numeros recibidos como parametro
 *
 */

float sumarFloat(float,float);
 //------------------------------
 /** \brief Funcion que sirve para restar dos numeros de tipo float
  *
  * \param n1 float Es el primer parametro
  * \param n2 float Es el segundo parametro
  * \return float Devuelve la resta de los dos numeros recibidos como parametro
  *
  */
float restarFloat(float,float);
 //------------------------------

/** \brief Funcion que sirve para multiplicar dos numeros de tipo float
 *
 * \param float Es el primer parametro
 * \param float Es el segundo parametro
 * \return float Devuelve el producto entre los dos numeros recibidos como parametro
 *
 */
float multiplicarFloat(float,float);
//-------------------------------

/** \brief Esta funcion sirve para obtener el cociente entre dos numeros float
 *
 * \param  float Es el primer parametro
 * \param  float Es el segundo parametro difente de 0
 * \return float Devuelve el cociente entre los dos numeros recibidos como parametros
 *
 */
float funcionDividir(float,float);
//-------------------------------

/** \brief Funcion para obtener el factorial de un numero (sin recursividad)
 *
 * \param Numero que hay que calcular
 * \return Retorna el factorial del numero a la llamada
 *
 */
int calcularFactorial(int);
//-------------------------------

/** \brief Pide un numero entero y lo valida
 *
 * \param char[] mensaje mostrado = msj mostrado
 * \param int Valor minimo del intervalo
 * \param int Valor maximo del intervalo
 * \return int Retorna un entero que representa un numero
 *
 */
int pedirEntero(char[],int,int);//no hace falta poner int en el parentesis


/** \brief Funcion para validar si un numero recibido es entero
 *
 * \param int Es el entero ingresado que hay que validar
 * \param int Numero minimo dentro de un rango determinado
 * \param int Numero maximo dentro de un rango determinado
 * \param char[] Msj Error si es el dato recibido no es entero
 * \return int Retorna el numero ingresado y validado
 *
 */
int validarEntero(int,int,int,char[]);//funcion para validar un dato, que es llamada desde otra funcion
