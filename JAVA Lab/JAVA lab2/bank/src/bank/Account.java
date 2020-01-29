package bank;

public class Account {
	//The balance attribute is now protected (indicated by the # character instead of the - character).
	protected double balance;
	
	//Change the access mode of the balance attribute to protected.
	public Account(double init_balance){	
		this.balance = init_balance;
	}

	public double getBalance (){
		return balance;
	}

	public boolean deposit (double amt){
		balance +=amt;
		return true;
	}

	public boolean withdraw (double amt){
		if (amt <= balance)
		{
			balance -=amt;
			return true;
		}
		else
		{
			return false;
		}
	}

}




