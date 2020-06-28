 
# Gestor de entornos virtuales (virtualenv de python) en C++

Se pudo hacer con `switch`, pero me dio flojera. Así que me la llevé a puro copy-paste de `if`

![manager-venv](https://github.com/slub3/slub3.github.io/blob/master/posts/linux/imgs/manager-venvs.png)

Es bastante simple, explico: `e` es la carperta que contiene todos los entoros virtuales; `roy` es la carpeta de mi usuario. 

```cpp
system("bash --rcfile /home/roy/e/deepl/bin/activate");
```
