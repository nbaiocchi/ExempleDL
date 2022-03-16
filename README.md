# ExempleDL

**a little explaination about how work DL lib with SFML and NCURSES**


***COMPILATION***

- Compile at the root

```
$ make re
```

- Compile in folder `ncure` and `sfml`

```
$ cd ncurse

$ make re

$ cd sfml

$ make re
```

- Lunch the programe

```
$ ./arcade ncurse/lib_arcade_ncurses.so
```

OR

```
$ ./arcade ncurse/lib_arcade_sfml.so
```

- Output should draw `"THIS IS A TEST"` in sfml or ncurse window depend on your choice