public class Account {
    private String id;
    private double balance;


    Account(String id,double balance){

       setId(id);
       setBalance(balance);

    }
    public void setId(String id) {
        this.id = id;
    }

    public String getId() {
        return id;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }
    public void check(Account account){
        System.out.println(account.getBalance());
    }
    public void deposit(Account account,double money){
        account.balance=balance+money;
    }
    public void withdraw(Account account,double money){
        account.balance=balance-money;
    }
}
