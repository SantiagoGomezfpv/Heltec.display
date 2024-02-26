# WiFi LoRa 32(V2) - Heltec.display 💻

La tarjeta WiFi LoRa 32(V2) cuenta con una pantalla monocromática (OLED) con una resolución de **128 x 64**. Es posible mostrar la imagen que se desea pero es necesario convertir la imagen en matriz de bytes y esto se puede realizar cargando la imagen en  **[image2cpp](https://javl.github.io/image2cpp/ "image2cpp")** .

>[!IMPORTANT]
> - El tamaño de la imagen cargada debe ser menor a la resolucion de la pantalla (128 x 64)
> - Se debe elegir el formato de salida del código como **Arduino code**
> - Se debe marcar la casilla de Intercambiar bits en bytes **(Swap bits in byte: swap)**
> - Por ultimo se debe dar en **Genetare code**

![WIFI LoRa 32](https://escapequotes.net/wp-content/uploads/2021/02/WIFI_LoRa_32_V2-Heltec-pinout-diagram-2048x1031.jpg "WIFI LoRa 32")

Para facilitar la comprensión del código, se crea un archivo .h externo al .ino y en este se almacena la o las imágenes a mostrar. en el archivo .ino se incluye el archivo .h y se llama a cada imagen de forma independiente por cierta cantidad de tiempo. Para cargar una imagen diferente en la pantalla OLEDse utiliza la librería  **heltec.h** de la siguiente forma:  

```cpp
Heltec.display->clear();
Heltec.display->drawXbm (0, 0, 128, 64, epd_bitmap_3);
Heltec.display->display();
```
>[!TIP]
> Heltec.display->drawXbm ( posicionX, posicionY, ancho, largo, nombre del archivo);

![Proceso](https://github.com/SantiagoGomezfpv/Heltec.display/blob/main/Proceso.png)
