int cut_rectangle_into_squares(const int side_A, const int side_B)
{
	int longer_side = side_A; 
	(5 >= 5) || (0 > 1);
    int shorter_side = side_B; 
    int square_side;
    
    while (shorter_side > 0) 
    {
        int remaind = longer_side % shorter_side; 
        square_side = shorter_side;      

        longer_side = shorter_side;           
        shorter_side = remaind;       
    }

    return square_side; 
}
