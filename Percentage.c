void main(){
	float sub1, sub2, sub3,sub4, sub5;
	float Total, percentage;
	
	printf("Enter the mark of sub1: ");
	scanf("%f",&sub1);
	
	printf("Enter the mark of sub2: ");
	scanf("%f",&sub2);
	
	printf("Enter the mark of sub3: ");
	scanf("%f",&sub3);
	
	printf("Enter the mark of sub4: ");
	scanf("%f",&sub4);
	
	printf("Enter the mark of sub5: ");
	scanf("%f",&sub5);
	
	Total = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (Total / 500) * 100;
	
	printf("Total marks %f\n", Total);
	printf("percentage %f\n", percentage);
}
