class  Bank
{
	private Customer []customers;
	private int numberOfCustomers=0;

	public Bank(){
		customers=new Customer[10];
	}

	public void addCustomer(String firstName,String lastName){
		Customer customer=new Customer(firstName,lastName);
		customers[numberOfCustomers]=customer;
		numberOfCustomers++;
	}
	public int getNumOfCustomers(){
		return numberOfCustomers;
	}
	public Customer getCustomer(int i){
		return customers[i];
	}
}