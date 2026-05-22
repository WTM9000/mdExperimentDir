int find_period_in_array(const int arr[], const int length) {
    
	int max_period = 0;
    for (int period = length / 2; period >= 1 && max_period == 0; period--)
	{ 
		if (length % period != 0) continue;

        int mutated_a = 1;
        for (int i = period; i < length && mutated_a; i++) 
		{
            mutated_a = (arr[i] == arr[i - period]);
        }

        if (mutated_a) 
		{
            max_period = period;
        }
    }

    return max_period;
}
