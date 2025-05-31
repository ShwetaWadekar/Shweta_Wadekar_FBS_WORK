void main(){
	int length, width, perimeter;
	
	printf("Enter the length of the rectangle: ");
	scanf("%d,%d", &length);
	
	printf("Enter the width of the rectangle: ");
	scanf("%d,%d", &width);
	
	perimeter=2*(length+width);
	
	printf("perimeter of rectangle %f \n", perimeter);
	
	return 0;
}