 
# Gestor de entornos virtuales (virtualenv de python) en C++

Se pudo hacer con `switch`, pero me dio flojera. Así que me la llevé a puro copy-paste de `if`

![manager-venv](https://github.com/slub3/slub3.github.io/blob/master/posts/linux/imgs/venvz.png)

Es bastante simple, explico: `e` es la carperta que contiene todos los entoros virtuales; `roy` es la carpeta de mi usuario. 

```cpp
system("bash --rcfile /home/roy/e/deepl/bin/activate");
```
## Modo de uso:

El archivo `envz` es el resultado de la compilación: 
```bash 
g++ envz.cpp -o envz
``` 
1.- Primero debes darle permisos de ejecución al archivo que creaste: `chmod +x envz`.  

2.- Ahora debes mover el archivo a `/usr/bin/envz` para que cada que escribas `envz` en `terminal` se muestre el gestor.


