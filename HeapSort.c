void HeapSort(int arr[], unsigned int N)  
{  
    unsigned int n = N, i = n/2, parent, child;  
    int t;  
  
    for (;;) { 
        if (i > 0) { 
            i--;          
            t = arr[i];   
        } else {    
            n--;         
            if (n == 0) return; 
            t = arr[n];   
            arr[n] = arr[0];  
        }  
  
        parent = i;  
        child = i*2 + 1; 
  
         
        while (child < n) {  
            if (child + 1 < n  &&  arr[child + 1] > arr[child]) {  
                child++;  
            }  
            if (arr[child] > t) {  
                arr[parent] = arr[child]; 
                parent = child; 
               
                child = parent*2+1;  
            } else {  
                break;   
            }  
        }  
        arr[parent] = t; 
    }  
}  
