    #include<iostream>
    #include<stdio.h>
    #include<string>
using namespace std;

int main()
    {
     int count=1,s=1,final[100][100],h=0,r,c,i,j,k,l;
	 char arr[110][110];
     do
     {
         cin>>r>>c;
         if(r==0 && c==0)
         break;
		 memset(final, 0, sizeof(final));
         memset(arr,9,sizeof(arr));
		 for(i=0;i<r;i++)
         for(j=0;j<c;j++)
         cin>>arr[i][j];
         for(i=0;i<r;i++)
         {
              for(j=0;j<c;j++)
             {
                  k=0;
					if(arr[i][j]!=42)
                    {
                                        
                         if(arr[i-1][j]==42 && (i-1)>=0 )
                         k+=1;
                         if(arr[i][j-1]==42 && j-1>=0  )
                         k+=1;
                         if(arr[i+1][j]==42 && i+1<=r)
                         k+=1;
                         if(arr[i][j+1]==42 && j+1<=c)
                         k+=1;
                         if(arr[i+1][j-1]==42 && j-1>=0 && i+1<=r)
                          k+=1;
                          if(arr[i-1][j+1]==42 && (i-1)>=0 && j+1<=c )
                           k+=1;
                           if(arr[i-1][j-1]==42 && (i-1)>=0 && j-1>=0)
                           k+=1;
                           if(arr[i+1][j+1]==42 && i+1<=r && j+1<=c)
                           k+=1;
                          arr[i][j]=k;
					 }													   
                  }
              }
            l=0;
              for(i=0;i<r;i++)
              {
                 for(j=0;j<c;j++)
                  {
                    final[i][j]=(int)arr[i][j];
//cout<<final[l]<<" ";                                                                       
					         
                   }            
				 }
              if(count>=2)
				  cout<<endl;
			  cout<<"Field #"<<count<<":"<<endl;		
			  for(i=0;i<r;i++)
              {
                 for(j=0;j<c;j++)
                  {
              								
						if(final[i][j]==42)
								cout<<(char) final[i][j];
							else	
							cout<<final[i][j];
							}
						
				 cout<<endl;
					}
		count++;
			
		}
while(r!=0 && c!=0);


return 0;
	}


						
							
                                                                       
                                                       
                                                       
                                                       
                                                       
                                                       
                                                       
                                                           
         
         
                         
                                         
