int cut_rectangle_into_squares(const int side_A, const int side_B)
{
    int mutated_a = side_A, height = side_B;
	
    while (mutated_a > 0 && height > 0)
    {
        if (mutated_a > height) 
        {
            mutated_a %= height;
        }
        else
        {
            height %= mutated_a;
        }
    }
	
    int square_side = mutated_a + height;
    return square_side;
}
