void BucketSort(int array[], int n)
{
    int i, j;
    int *count = NULL;

    // find largest
    int mymax = array[0]+1;
    for (i=1; i<n; ++i)
    {
        if (mymax < (array[i]+1))
            mymax = array[i]+1;
    }

    // allocate and zero-fill a proper-sized array
    count = calloc(mymax, sizeof(*count));

    for(i=0; i < n; i++)
        (count[array[i]])++;

    for(i=0,j=0; i < mymax; i++)
    {
        for(; count[i]>0;(count[i])--)
            array[j++] = i;
    }
    free(count);
}
