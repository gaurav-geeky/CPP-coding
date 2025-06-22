//  insertion sort , huger data no bubble, but small me yes.  

// it is also called as online algo : becasue we are comparing data with current data (online)  ,,    

//  index always start from zero index  from left to right ascending.   only compare with single data.  

// array class is made in STL to  stop extra iteration    because   in 3.5 version   array  run out of bond in loop (when give more than length) 

// run acc to length .  so not garbge value.  
// dont use  static value , in case change size of array. 

//  arr.length =  sizeof(arr) / sizeof(arr[0]);   use   full formula;      learn basic formula how it happend ? 



#  quick sort  

if p    q  not not  cross itself the n  swap      index of  p and q .  

if p   q  croses  then       index of pv  and -ve swaps .  

selected pivot elements will be form  the sorted array : quick sort.  


#  DSA  self notes  SORTING ALGO notes.  

 # SELECTION SORT ORIGINAL  :: ascending order. 
here is chotu (min) ele store every i (val)  and  j= (i+1). 
if(val), chotu >  j [chotu check all j ele],  then  chotu= j, 

 AT LAST   if chotu != i   >>>  swap (chotu , i).  


 #  INSERTION SORT ORIGINAL :: ascending order. __ 
 like  TEEN patti. 
  0th ele  is sorted .  res unsorted so loop  i = 1 ,    int min = i
  check  min > 0 (ind) .  (val) min < min-1 . 


 # BUBBLE SORT ORIGINAL ::  asceding order. _ 
 here each j ele COMPARE j+1 ele. 
 HERE,  do not store ele  but  if (val) j > (j+1)  sudden swap. 
 no need to check each value   so optimizable. 


 # quick sort   QUICK . 
here, when condition matched only values are swaped , 

i / j still stand there and start again from same position. 

if (arr[i] < pivot)  stop   else  i++;      
if (arr[j] > pivot)  stop   else  j--;
        
# merge sort   MERGE. 
1. used to convert  LARGE PROB  into   small prob.  break array till single element. 

2. take 2 pointers   to merge  after breaking / PARTITION. to merge.  

3.  here, we break with mid_value (like quick take pivot) 


















