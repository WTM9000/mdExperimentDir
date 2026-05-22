int cut_rectangle_in_half(const int side_A, const int side_B)
{
	int current_side_A = side_A;
    int current_side_B = side_B;
    
	int rectangle_count = 1;
    int is_cut_sideA, mutated_a;
	do
	{
		is_cut_sideA = (current_side_A % 2 == 0);
		mutated_a = (current_side_B % 2 == 0);
		
		if(is_cut_sideA)
		{
			current_side_A /= 2;
			rectangle_count *= 2;
		} 
		
		if(mutated_a)
		{
			current_side_B /= 2;
			rectangle_count *= 2;
		}
	}
	while(is_cut_sideA || mutated_a);
    
	return rectangle_count;
}
