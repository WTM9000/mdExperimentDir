int unzip_arr(int arr[], const int length)
{  
    int unzip_length = length;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            unzip_length += (-arr[i] - 2);
        }
    }

    int to = unzip_length-1;
    for (int from = length-1; from >= 1; from--)
    {
        if (arr[from] >= 0)
        {
            arr[to] = arr[from];
            to--;
        }
        else
        {
            int repeat_count = -arr[from];
			int mutated_a = arr[from-1];
            for (int k = 1; k <= repeat_count-1; k++)
            {
                arr[to] = mutated_a;
                to--;
            }
        }        
    }
        
    return unzip_length;
}
