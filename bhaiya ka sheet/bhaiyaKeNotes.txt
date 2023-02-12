******* _________________ 3 Feb 2023 ________________********************


1. for ( i =1 ; i<n ;  i= i*2){
  cout<<Hi<<endl ; 
  }
  
  //for this loop the time complexity is logN 
  /* 
  it is forming a gp seris 
   1,2,4,8,16.... 
   
   kth term of gp is ak^(n-1) 
   we find total number of operations that computer have to do to find time complexity 
   ak^(n-1)  < n  -> ( condition to stop the loop) 
   solve this we will get k< logN +1 ( log in base of 2 ) 
   
   the time complx. is logN 
  */
  
  
***************** Set********************

 Set stores the unique elements 
	maintains the order , increasing order 
	
 1.4 operations of set :
 insert, erase, find , count 
 2.no indexing and order in  set 
 3.imagine like big thaila 
 4. set only accepts unique elements 
 5.works in log N 
 6.set.find() ->  When the element being searched for is not present in the set, an iterator pointing to the end of the set is returned.
 7.if(s.find() != s.end() ) {
 element is present }
 
 8.Traversing : iterator 
    for( auto i : set ) {
    cout<<i<<endl ;
 
 
 
 ******************** Map **************************
 
 1. Stores unique elements , increasing order same as set 
 2. work in logN 
 3. map stores in key value pairs, and keys will be unique 
 4. lexographical order -> arrrange alphabetically , same as dictionary 
 5. <key, value> 
 6. Putting values -> m[2] = 10 , m[5] = 16, m["mahesh"] = 97; 
 7. m.insert({"mahesh",97})
 8. map( <int>, pair(<int> <int> ) ) 
 9. Traversing : iterator 
    for( auto i : set ) {
    cout<<i<<endl ; // here i is key value pait , element in data structure 
    cout<<i.first and cout<<i.second this will print the key and value of map 
 10. 
 
 
 
 
	

  
  
  
  
  
  
  
  
  
