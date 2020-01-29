package domain;

public class CheckingAccount extends Account {

    private double overdraftProtection;

    public CheckingAccount(double balance) {
        super(balance);
    }

    public CheckingAccount(double balance, double protect) {
        super(balance);
        this.overdraftProtection = protect;
    }

    /*Modify the CheckingAccount Class
      Modify the withdraw method:
      1.Rewrite the withdraw method so that it does not return a value(that is, void).
        Declare that this method throws the OverdraftException.
      2.Modify the code to throw an exception if necessary.
      There are two cases that need to be handled.
      First, there is a deficit with no overdraft protection from the savings account;
      use the message "No overdraft protection" for this exception.
      Second, the overdraft Protection amount is sufficient to cover the deficit;
      use the message"Insufficient funds for overdraft protection" for this exception.
*/
    public void withdraw(double amt) throws OverdraftException {
        if (balance - amt >= 0) {
            balance -= amt;
        } else {
            if (getOverdraftProtection() == 0) {
                throw new OverdraftException("No overdraft protection", amt - balance);
            }
            double val=amt-super.getBalance();
            if (val<=this.getOverdraftProtection())
            {
                balance=0;
                this.overdraftProtection-=val;
            } else if(getOverdraftProtection() < (amt-balance)){
                throw new OverdraftException("Insufficient funds for overdraft protection", amt - balance);
            }
        }
    }

    public double getOverdraftProtection() {
        return overdraftProtection;
    }
}
