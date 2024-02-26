#include <heltec.h>
#include "Imagen.h"

void setup() {
  Heltec.begin(true, false, false);
}

void loop() {
  Heltec.display->clear();
  Heltec.display->drawXbm (0, 0, 128, 64, epd_bitmap_Heltec); // Heltec.display->drawXbm ( POSICION X, POSICION Y, ANCHO, LARGO, NOMBRE DEL ARCHIVO);
  Heltec.display->display();
  delay(2000);
  Heltec.display->clear();
  Heltec.display->drawXbm (0, 0, 128, 64, epd_bitmap_3);
  Heltec.display->display();
  delay(2000);
  Heltec.display->clear();
  Heltec.display->drawXbm (0, 0, 128, 64, epd_bitmap_2);
  Heltec.display->display();
  delay(2000);
}

