/*
  @file queries.c
  @brief Consultas sobre tablas de datos climáticos.
*/
#include <limits.h>
#include "queries.h"

/**
 * @brief Dado un año, calcula para cada mes de ese año la máxima precipitación
 * en un día.
 *
 * @param a Tabla de datos climáticos
 * @param year Año, entre FST_YEAR (1980) y LST_YEAR (2016)
 * @param output Arreglo de salida
 */
void max_daily_rainfall(WeatherTable a, int year, int output[MONTHS]) {

    int ano = year - FST_YEAR;
    for(int mes = 0;mes <12;mes++){
      output[mes] = 0;
      for(int dia = 0; dia < 28; dia++){
        if ((int)a[ano][mes][dia]._rainfall >= output[mes]){
          output[mes] = a[ano][mes][dia]._rainfall;

      }}

    }

}
