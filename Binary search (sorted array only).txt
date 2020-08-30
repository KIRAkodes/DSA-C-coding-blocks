// BINARY SEARCH IS MORE EFFICIENT THAN LINEAR SEARCH

int binary_search( int a[ ], int s, int e)   {
	int s =0;
	int e= n-1;
	while(s<=e)   {
	int mid=(s+e)/2;

	if (a[mid]==key)  {
	return mid;  
                 }

	else if (a[mid]> key)  {
	e= mid - 1;   
	 }
	
	else  {
   	s= mid +1;
	}
        
            }
//if elelment is not present 
	return = -1;
  }
	
        int main  ()  {

	int n , key;
	cin>>n;
	int a[1000];
	for (int i= 0; i< n; i++)  {
	cin>>a[i];
	}
//ASK FRO THE ELEMENT TO SEARCH
	COUT<<"ENETR KEY"<<ENDL;
	CIN>>KEY;

	cout<<binary_search(a,n,key)<<endl;
	RETURN 0;
	} 

