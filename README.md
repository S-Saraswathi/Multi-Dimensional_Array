# Multi-Dimensional Array
## AIM
To understand the logic and syntax of 2D arrays in C++
## THEORY
In C++, a two-dimensional array is a grouping of elements arranged in rows and columns. Each element is accessed using two indices: one for the row and one for the column, which makes it easy to visualize as a table or grid. The simplest form of the multidimensional array is the two-dimensional array.<br>
A 2-dimensional array a, which contains three rows and four columns can be shown below −
![Two Dimensional Arrays](https://github.com/S-Saraswathi/Multi-Dimensional_Array/assets/139524048/84c4936d-998e-4d7c-87d0-a1da48c2d825)<br>
Syntax of 2D array:
```
data_Type array_name[n][m];
```
Where,<br>
n: Number of rows.<br>
m: Number of columns.
- **INITIALIZATION OF 2-D ARRAY**<br>
  Two-dimensional arrays may be initialized by specifying bracketed values for each row. Following is an array with 3 rows and each row has 4 columns.
  ```
  int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
  };
  ```
  The nested braces, which indicate the intended row, are optional.<br>
  The following initialization is equivalent to the previous example −
  ```
  int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
  ```
- **ACCESSING ELEMENTS**<br>
  An element in a 2-dimensional array is accessed by using the subscripts, i.e., row index and column index of the array.
  ```
  int val = a[2][3];
  ```
  The above statement will take the 4th element from the 3rd row of the array.
