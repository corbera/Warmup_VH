# Práctica de Warmup: Paginación y Caché en x86_64

Este repositorio contiene una práctica inicial ("warmup") para la asignatura **Vulnerabilidades Hardware** del Grado en Civerseguridad e Inteligencia Artificial de la UMA.  
El objetivo es familiarizarse el entorno de trabajo para las prácticas (Linux, C, ..) utilizando conceptos básicos de bajo nivel relacionados con la **memoria virtual** y la **jerarquía de memoria** en sistemas x86_64.

## Objetivos de la práctica
1. **Traducción de direcciones lógicas a físicas**  
   - Acceso al fichero `/proc/self/pagemap`.  
   - Comprender el mecanismo de paginación en arquitecturas x86_64.  

2. **Determinación de presencia en caché de una dirección de memoria**  
   - Uso de instrucciones para medir tiempo y de invalidación de caché.  
   - Medición de tiempos de acceso para diferenciar entre datos en caché y en memoria principal.  

## Nota
Esta práctica no busca implementar un sistema completo, sino servir de introducción práctica a herramientas y conceptos que se usarán en el resto del curso.