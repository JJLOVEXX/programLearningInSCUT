package domain;

public class Bank
{
	private Customer[] customers;
	private int numOfCustomers;

	//Modify the Bank class to create a public static method, called getBank, that returns an instance of the Bank class.
	private static Bank bank=new Bank();
	
	//The single instance should be a static attribute and should be private. Likewise, make the Bank constructor private.
	private Bank(){
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

	public static Bank getBank() {
		// TODO Auto-generated method stub
		return bank;
	}

}
