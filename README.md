 
# Gestor de entornos virtuales (virtualenv de python) en C++

Se pudo hacer con `switch`, pero me dio flojera. Así que me la llevé a puro copy-paste de `if`

![manager-venv](https://github.com/slub3/slub3.github.io/blob/master/posts/linux/imgs/venvz.png)

Es bastante simple, explico: `e` es la carperta que contiene todos los entoros virtuales; `roy` es la carpeta de mi usuario. 

```cpp
system("bash --rcfile /home/roy/e/deepl/bin/activate");
```
## Modo de uso:

Yo edité el archivo`.bashrc` de ubuntu y le agregué un alias `alias envz='opt/envz'` dado que el archivo `envz` es el resultado de la compilación: 
```bash 
g++ envz.cpp -o envz
``` 
El archivo `envz` lo cambié a la carpeta `opt`, obvio primero debes darle permisos de ejecución: `chmod +x envz`.   

**NOTA: los permisos se los cambias cuando aún no lo hyas cambiado de carpeta.**   

Ahora si, escribiremos `source .bashrc`. De esta manera cada que escribas en terminal `envz` desplegara el menú del gestor.  
