# HW-3
Вводится позиция на шахматной доске фигуры Конь. Вывести все доступные ходы.

## Build program
```sh
#> g++ main.cpp chess.cpp -o horse
```

## Examples
```sh
$ ./horse
Input beginning posion (column, row): 2 3
All available moves:
(1,5)
(3,5)
(4,4)
(4,2)
(3,1)
(1,1)

$ ./horse
Input beginning posion (column, row): 1 1
All available moves:
(2,3)
(3,2)

$ ./horse
Input beginning posion (column, row): -1 3
Error: Invalid input posion.

$ ./horse 
Input beginning posion (column, row): 8 9
Error: Invalid input posion.

$ ./horse
Input beginning posion (column, row): 8 7
All available moves:
(6,8)
(6,6)
(7,5)

$ ./horse
Input beginning posion (column, row): 5 5
All available moves:
(3,6)
(4,7)
(6,7)
(7,6)
(7,4)
(6,3)
(3,4)
(4,3)
```