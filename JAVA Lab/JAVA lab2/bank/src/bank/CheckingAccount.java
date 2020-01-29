package bank;

/*The Checking Account Subclass
Implement the CheckingAccount class as modeled in the above UML diagram.
The CheckingAccount class must extend the Account class.
It includes an overdraftProtection attribute with type double.
It includes one public constructor that takes one parameter: balance. 
This constructor must pass the balance parameter to the parent constructor by calling super(balance).
It includes another public constructor that takes two parameters: balance and protect.
This constructor must pass the balance parameter to the parent constructor by calling super(balance) 
and set the overdraftProtection attribute.
The CheckingAccount class overrides the withdraw method. 
It performs the following check: 
if the current balance is adequate to cover the amount to withdraw, then proceed as usual. 
If not and if there is overdraft protection, then attempt to cover the difference (balance - amount)
by value of the overdraftProtection.
If the amount needed to cover the overdraft is greater than the current level of protection, 
then the whole transaction must fail with the checking balance unaffected.
It must include one public method getOverdraftProtection that return value of the overdraftProtection.*/
public class CheckingAccount extends Account {


    private double overdraftProtection;


    public CheckingAccount(double balance) {
        super(balance);
    }

    public CheckingAccount(double balance, double protect) {
        super(balance);
        this.overdraftProtection = protect;
    }

    public boolean withdraw(double amt) {
        if (balance - amt >= 0) {
            balance -= amt;
            return true;
        } else if (amt > balance && balance + overdraftProtection <= amt) {
            balance = 0;
            overdraftProtection -= amt - balance;
            return true;
        } else {
            return false;
        }

    }

    public double getOverdraftProtection() {
        return overdraftProtection;
    }
}