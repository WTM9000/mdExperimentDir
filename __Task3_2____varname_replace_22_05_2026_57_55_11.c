int cut_rectangle_into_squares(const int side_A, const int side_B)
{
	int longer_side = side_A; 
    int shorter_side = side_B; 
    int square_side;
    
    while (shorter_side > 0) 
    {
        int mutated_a = longer_side % shorter_side; 
        square_side = shorter_side;      

        longer_side = shorter_side;           
        shorter_side = mutated_a;       
    }

    return square_side; 
}
