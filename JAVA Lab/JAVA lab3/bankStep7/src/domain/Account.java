package domain;

public class Account {

    protected double balance;

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
    /*
    Modify the Account Class
    Modify the withdraw method:

    1.Rewrite the withdraw method so that it does not return a value(that is, void).
      Declare that this method throws the OverdraftException.
    2.Modify the code to throw a new exception that specifies
      "Insufficient funds"and the deficit
      (the amount requested subtracted by the current balance).
    */
    public void withdraw (double amt)throws OverdraftException{
        if (amt <= balance)
        {
            balance -=amt;
        }
        else
        {
            throw new OverdraftException("Insufficient funds"+"The deficit is",amt-balance);
        }
    }

}




