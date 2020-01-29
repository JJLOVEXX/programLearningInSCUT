package bank;
/*The Savings Account Subclass

The SavingsAccount class must extend the Account class.
It includes an interestRate attribute with type double.
It includes a public constructor that takes two parameters: balance and interest_rate.
This constructor must pass the balance parameter to the parent constructor by calling super(balance).*/

public class SavingsAccount extends Account{
	private double interestRate;
	
	public SavingsAccount(double balance,double interest_rate){
		super(balance);
	}

}
