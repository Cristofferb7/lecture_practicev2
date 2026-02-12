
// Consider you want to dynamically allocate memory for an array of arrays, where each array length
// is variable. The type of the arrays would be float. Write a function that takes two items: i) an
// integer P that represents number of arrays, and ii) An array called Lengths of size P that contains
// Lengths for P number of arrays. After allocating memory for the arrays, the function should fill-up
// the arrays with random numbers from 1 to 100 (you can put an int to a float variable. The integer
// will get promoted to float automatically). At the end the function returns appropriate pointer. Next
// write a set of statements to show how you would free-up the memory.

float ** AllocateArrayOfArrays( int P, int *Lengths) {


int *arrayptr = malloc(P * sizeof(float *));

for (int i = 0; i < P; i++)
{
    arrayptr[i] = malloc(Lengths[i] * sizeof(float));

    for (int j = 0; j < Lengths[i]; j++)
    {
        int randomNumber = rand() * 100 ;
        arrayptr[i][j] =  randomNumber;
        
    }
    

}
