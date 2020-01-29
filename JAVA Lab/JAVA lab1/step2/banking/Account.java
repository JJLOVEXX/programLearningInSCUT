class Account 
{
	private double balance;
	public Account(double balance){
		this.balance=balance;
	}
	public double getBalance(){
		return balance;
	}
	public void deposit(double amount){
		balance+=amount;
	}
	public void withdraw(double amount){
		balance-=amount;
	}
}
