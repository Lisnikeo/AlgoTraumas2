/*
  @file queries.c
  @brief Consultas sobre tablas de datos climáticos.
*/

#include "queries.h"

/**
 * @brief Total de lluvias de un año dado.
 *
 * @param a Tabla de datos climáticos.
 * @param year Año, entre FST_YEAR (1980) y LST_YEAR (2016).
 */
int year_rainfall(WeatherTable a, int year) {
    // COMPLETAR
 
    int ano = year-1980;
    int totalp = 0;

    for(int i=0;i<12;i++){
      for(int j=0;j<28;j++){
      
       totalp = a[ano][i][j]._rainfall + totalp;

      }
    }

    return totalp;
}
