# Tutorial Make
Um pouco dos estudos sobre Makefiles.


## O que eu aprendi
```Makefile
target: prerequisites
<TAB> recipe
```

A `recipe` usa os `prerequisites` pra fazer o `target`. Esses três juntos 
compõem uma `rule`.

Apenas o primeiro `target` é feito com o comando `make`, como default.

Não é necessário que o `target` seja um arquivo, pode apenas ser um nome para o 
`recipe`. Esses são chamados "phony targets".

---
- `$@`: the target filename.
- `$*`: the target filename without the file extension.
- `$<`: the first prerequisite filename.
- `$^`: the filenames of all the prerequisites, separated by spaces, discard duplicates.
- `$+`: similar to `$^`, but includes duplicates.
- `$?`: the names of all prerequisites that are newer than the target, separated by spaces.


## Repositório teste que muito bom pra SB
Esse **[>> aqui <<](https://github.com/yudi-azvd/sb-test)**.


### Referências
- [Um tutorial que vai desde o basicão](https://opensource.com/article/18/8/what-how-makefile) que eu completei
- [Mias um aleatório ](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.2).
pra entender melhor sobre Makefiles.
- [Outro](https://spin.atomicobject.com/2016/08/26/makefile-c-projects/)
- [Um projeto mais completo](https://www.partow.net/programming/makefile/index.html)
- [Quem sabe esse também](https://avikdas.com/2019/12/16/makefiles-for-c-cpp-projects.html)
