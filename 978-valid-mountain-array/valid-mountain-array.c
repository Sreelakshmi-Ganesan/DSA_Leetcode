

bool validMountainArray(int* arr, int arrSize){
 int index=0,flag=0;
 for(int i=0;i<arrSize-1;i++)
 {  if(arr[i]!=arr[i+1] )
    {
       if(arr[i]>arr[i+1])
       {
        index=i;
        break;
       }
   }
   else return false;
 }
 if(index==0 || index==arrSize-1)
 return false;
 for(int i=index;i<arrSize-1;i++)
 {
    
       if(arr[i]<=arr[i+1])
       { return false;
        
        }
 } return true;

}
