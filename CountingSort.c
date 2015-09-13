void CountingSort(int *array,int n,int k){

int i;
int *count, *sorted;
count = (int*)malloc(sizeof(int)*(k+1));
sorted = (int*)malloc(sizeof(int)*n);

for(i=0; i<n ; i++){
++count[array[i]];
}
for(i=1;i<=k;i++){
count[i]+=count[i-1];
}
for(i=0; i<n ; i++){
sorted[count[array[i]]-1]=array[i];
--count[array[i]];
}

}
