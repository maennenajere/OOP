/* Make a function sum with the prototype int sum(int *, int *).
 * The function sum takes as input parameters two pointters and returns an integer.
 * The function sum should sum the values of the variables in the memory locations indicated by the pointters and return the result.
 */

int sum(int *a, int *b)
{
    int result=*a + *b;
    return result;
}
