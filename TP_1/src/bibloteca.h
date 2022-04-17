/// \brief maneja la funcion del menu
/// \param a variable de kilometros
/// \param b variable de aerolineas
/// \param c variable de latam
/// \return retorna el numero de la opcion que elije el usuario
int menu(float a, float b, float c);
/// \brief funcion para ingresar los km
/// \param a variable kilometros
/// \param mensaje
/// \param flag
void ingresarKm(float* a, char mensaje[], int* flag);
/// \brief funcion para ingresar los vuelos
/// \param a se ingresa la empresa (aerolineas o latam)
/// \param mensaje
/// \param flag
void ingresarVuelos(float* a, char mensaje[], int* flag);
/// \brief funcion que valida los datos ingresados (kilometros, aerolineas, latam)
/// \param a variable a validar
/// \param mensajeError
/// \return retorna la variable validada
float validacion(float a,char mensajeError[]);
/// \brief imprime un mensaje de error, con limpiado de mensaje y un pause
/// \param mensaje
void error(char mensaje[]);
/// \brief hace todas las cuentas que se piden
/// \param a tarjeta de debito
/// \param b tarjeta de credito
/// \param c bitcoin
/// \param d precio unitario
/// \param e vuelo
/// \param f kilometros
void hacerCuentas(float* a, float* b, float* c, float* d, float e, float f);
/// \brief muestra todos los datos
/// \param a vuelo
/// \param b tarjeta de debito
/// \param c tarjeta de credito
/// \param d bitcoin
/// \param e precio unitario
/// \param mensaje
void mostrarDatos(float a, float* b, float* c, float* d, float* e, char mensaje[]);
/// \brief hace la diferencia de precio y se fija cual es mayor
/// \param a empresa 1
/// \param b empresa 2
void mostrarDif(float a, float b);
