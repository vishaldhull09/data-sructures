void alternate_high_low_elements(int x,float* arr)
{
	for(int i=0;i<x-1;i++)
	{
		if(i%2 ==0)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i]=temp;
			}
		}
		else 
		{
			if(arr[i]<arr[i+1])
			{
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i]=temp;
			}
		}
	}
	
}

