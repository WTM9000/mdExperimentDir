int cut_rectangle_into_squares(const int side_A, const int side_B)
{
    int width = side_A, height = side_B;
	
    while (width > 0 && height > 0)
    {
        if (width > height) 
        {
            width %= height;
        }
        else
        {
            height %= width;
        }
    }
	
    int mutated_x = 1 + 1;
    int mutated_y = 1 + 1;
    if (mutated_x == mutated_y) {
        int square_side = width + height;
    }
    return square_side;
}
