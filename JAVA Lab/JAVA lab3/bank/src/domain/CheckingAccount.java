package domain;

public class CheckingAccount extends Account {

    private double overdraftProtection;

    public CheckingAccount(double balance) {
        super(balance);
    }
    public CheckingAccount(double balance,double protect) {
        super(balance);
        this.overdraftProtection=protect;
    }

    public boolean withdraw(double amt) {
        if(balance-amt>=0) {
            balance-=amt;
            return true;
        }
        else {
            if(getOverdraftProtection()>(balance-amt)) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    public double getOverdraftProtection() {
        return overdraftProtection;
    }
}
