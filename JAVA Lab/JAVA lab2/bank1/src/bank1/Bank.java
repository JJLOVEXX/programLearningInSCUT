package bank1;

public class Bank
{
	private Customer[] customers;
	private int numOfCustomers;

	public Bank(){
		customers = new Customer[10]; 
	}
	
	public void addCustomer(String f,String l)
	{
		Customer c= new Customer(f,l);
		customers[numOfCustomers++]= c;
	}

	public int getNumOfCustomers()
	{
		return numOfCustomers;
	}

	public Customer getCustomer(int index)
	{
		if (index < numOfCustomers)
		{
		return customers[index];
		}
		else
		{
			return null;
		}
		
	}

}
